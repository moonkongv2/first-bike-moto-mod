# First Bike Moto Mod

[English](../en/README.md)

퍼스트바이크에 시동음, LED, 스위치를 추가해 작은 오토바이처럼 만들어보는 DIY 프로젝트입니다.

아이에게 조금 더 재미있는 라이딩 경험을 만들어주고 싶다는 단순한 아이디어에서 시작했습니다. 기능 자체는 복잡하지 않지만, 실제 자전거에 설치하기 위해 회로 설계뿐 아니라 전원 안정성, 배선, 납땜, 부품 배치, 방수, 스피커 음량까지 하나씩 고민하며 완성했습니다.

🌐 **[웹으로 제작기 보기](https://moonkongv2.github.io/first-bike-moto-mod/ko/)**

## 프로젝트 목표

- 스위치를 조작하면 오토바이 시동음 재생
- LED 조명 점등
- Arduino Nano와 DFPlayer Mini를 이용한 제어
- 배터리로 동작하는 컴팩트한 회로 구성
- 자전거에 설치할 수 있는 케이스와 배선 설계
- 야외 사용을 고려한 방수 처리

## 제작 기록

제작 과정은 다섯 편으로 정리했습니다.

1. [프로젝트 시작](01-start.md)
2. [브레드보드 회로 테스트](02-prototype.md)
3. [실제 회로 제작](03-circuit-build.md)
4. [케이스와 자전거 설치](04-enclosure.md)
5. [완성과 개선점](05-final.md)

각 글에는 제작 과정에서 찍은 사진과 함께 실제로 겪었던 문제, 선택한 해결 방법, 그리고 그 과정에서 배운 내용을 담았습니다.

## 주요 부품

- Arduino Nano
- DFPlayer Mini
- microSD 카드
- 스피커
- LED 스트립
- 스위치
- 3.7 V 배터리
- 5 V DC-DC 승압 모듈
- 커패시터
- 만능기판
- 방수 ABS 케이스

Arduino 코드는 [`arduino/first_bike_moto_mod/first_bike_moto_mod.ino`](../arduino/first_bike_moto_mod/first_bike_moto_mod.ino)에 정리해두었습니다.

## 현재 상태

처음 계획했던 시동음과 LED 기능, 자전거 장착과 기본적인 방수 처리까지 완료했습니다. 실제 사용 후 가장 아쉬웠던 부분은 스피커 음량과 케이스 크기였고, 이 부분은 향후 개선 아이디어로 남겨두었습니다. 🏍️
