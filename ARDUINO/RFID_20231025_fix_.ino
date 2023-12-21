#include <SPI.h>
#include <MFRC522.h>
#include <Servo.h>

#define RST_PIN      A0    // 定义MFRC522的复位引脚
#define SS_PIN       10    // 定义MFRC522的片选引脚
#define SERVO_PIN    2     // 定义舵机的引脚
const int sp = 6;          // 蜂鸣器引脚
const int led = 7;         // LED引脚
const int led2 = 4;        // 第二个LED引脚

bool lockerSwitch = false; // 锁定状态的开关

Servo servo;                // 用于控制舵机的Servo对象

typedef struct {
  byte uid[4];             // RFID卡片的UID
  char* name;              // 卡片关联的名称
} RFIDTag;

RFIDTag tags[] = {
  {{60, 209, 110, 133}, "Arduino"},
  {{0x33, 0xBA, 0x71, 0x95}, "OPEN DOOR"},
  {{21, 8, 10, 83}, "Espruino"}
};

byte totalTags = sizeof(tags) / sizeof(RFIDTag); // 所有标签的数量

MFRC522 mfrc522(SS_PIN, RST_PIN); // 创建MFRC522对象

unsigned long unlockTime = 0;
const unsigned long unlockDuration = 10000; // 10秒后自动关闭门

void setup() {
  // 初始化代码
}

void loop() {
  // 读取RFID卡片，判断是否解锁门
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) {
    for (byte i = 0; i < totalTags; i++) {
      bool tagMatch = true;
      for (byte j = 0; j < 4; j++) {
        if (mfrc522.uid.uidByte[j] != tags[i].uid[j]) {
          tagMatch = false;
          break;
        }
      }
      if (tagMatch) {
        locker(true); // 打开门
        unlockTime = millis(); // 记录解锁时间
      }
    }
  }

  // 在解锁一定时间后关闭门
  if (unlockTime > 0 && (millis() - unlockTime) > unlockDuration) {
    locker(false); // 关闭门
    unlockTime = 0; // 重置解锁时间
  }

  // 其他代码
}

void locker(bool toggle) {
  if (toggle) {
    servo.write(90); // 控制舵机以打开门
  } else {
    servo.write(0); // 控制舵机以关闭门
  }
  delay(15);
}

