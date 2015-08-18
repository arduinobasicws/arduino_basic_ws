/*
  Button

２番ピンに取り付けられたプッシュボタンを押した時に、デジタルピン13番に接続された
LED(発光ダイオード) のオン、オフを切り替えます。


回路:
 * LEDをpin 13 から GNDに接続
 * pushbuttonをpin 2 から +5Vに接続
 * 10K抵抗をpin 2 からGNDに接続

 * 注釈: ほとんどのArduinoはpin 13に基板上のLEDが既に接続されています。


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 translated into Japanese 18 Aug 2015
 by ToruHagihara
 
 このコードはパブリックドメインの元で配布されています。

 http://www.arduino.cc/en/Tutorial/Button
 */

// 定数として宣言された値は変更されない。
//ここではピン番号を指定するため使われている。
const int buttonPin = 2;     // プッシュボタンのピン番号
const int ledPin =  13;      // LEDのピン番号

// 変数は変更されます。
int buttonState = 0;         // プッシュボタンの状態を読み取るための変数

void setup() {
  // LED ピンを出力ピン(output)として初期化:
  pinMode(ledPin, OUTPUT);
  // プッシュボタンピンを入力ピン(input)として初期化:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // プッシュボタンの状態を表す値を読み取る。
  buttonState = digitalRead(buttonPin);

  // プッシュボタンが押されているかどうかチェックする。
  // もし押されていたらbuttonStateはHIGHに設定されている。
  if (buttonState == HIGH) {
    // LED を点灯する:
    digitalWrite(ledPin, HIGH);
  }
  else {
    // LEDを消灯する:
    digitalWrite(ledPin, LOW);
  }
}
