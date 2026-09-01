#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>


const uint8_t DF_RX_PIN = 10;  // Nano RX <- DFPlayer TX
const uint8_t DF_TX_PIN = 11;  // Nano TX -> DFPlayer RX

SoftwareSerial dfSerial(DF_RX_PIN, DF_TX_PIN);
DFRobotDFPlayerMini player;

const uint8_t VOLUME = 30;

void setup() {
  dfSerial.begin(9600);

  randomSeed(analogRead(A0));

  int track_num = random(1,6);

  // DFPlayer + SD 초기화 충분히 대기
  delay(1000);

  // ACK 사용, 추가 reset은 하지 않음
  if (!player.begin(dfSerial, true, false)) {
    while (true) {
      delay(1000);
    }
  }

  delay(300);

  player.volume(VOLUME);

  // 혹시 남아있는 반복 모드 해제
  player.disableLoop();
  player.disableLoopAll();

  delay(300);

  // /mp3/0001xxxx.mp3 1회 재생
  player.playMp3Folder(track_num);
}

void loop() {
}