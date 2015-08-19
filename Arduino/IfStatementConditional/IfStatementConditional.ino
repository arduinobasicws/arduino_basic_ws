/*
  Conditionals - If statement

 この例ではif()構文の実例をデモします
 （アナログ入力に接続された）ポテンションメーターの状態を読み取り、
 ポテンションメーターの値がしきい値レベルよりも大きい場合だけ、LEDを点灯します。
 閾値レベルにかかわらず、これはアナログ値を出力表示します。

 回路:
 * ポテンションメーターはアナログピン0(A0)に接続する。
 センターピンはアナログピンへ接続する。
 両サイドのピンは＋５VとGNDへ接続する。
 * LEDは13番ピンからGNDへ接続する

 * 注釈: ほとんどのArduinoは13番ピンに基板上のLEDが既に接続されています。
 * そのため、この例では追加で接続する必要はありません。

 created 17 Jan 2009
 modified 9 Apr 2012
 by Tom Igoe
 translated into Japanese 19 Aug 2015
 by ToruHagihara

 このサンプルコードはパブリックドメインで提供されています。

http://www.arduino.cc/en/Tutorial/IfStatement

 */

// これらの定数として宣言された値は変更されない:
const int analogPin = A0;    // センサーが接続されているピン
const int ledPin = 13;       // LEDが接続されているピン
const int threshold = 400;   // アナログ入力値(0~1023)の範囲内で適当に設定した閾値レベル

void setup() {
  // LEDピンを出力ピンに設定する:
  pinMode(ledPin, OUTPUT);
  // シリアル通信を初期化する:
  Serial.begin(9600);
}

void loop() {
  // ポテンションメーターの値を読み取る:
  int analogValue = analogRead(analogPin);

  // もしアナログ値が十分高い時、LEDを点灯する:
  if (analogValue > threshold) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }

  // アナログ値を表示する。
  Serial.println(analogValue);
  delay(1);        // 読み取りを安定させるためdelayによる遅延を入れる
}

