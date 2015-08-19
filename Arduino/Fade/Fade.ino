/*
 Fade
 この例は9番ピンに接続されたLEDをフェード点灯させる方法です。
 analogWrite() 関数を使用します。

 このサンプルコードはパブリックドメインで提供されています。
 */

int led = 9;           // LEDが接続されているピン番号
int brightness = 0;    // LEDの明るさを表す
int fadeAmount = 5;    // どの程度の量LEDがフェードするかを表す

// setup関数はresetボタンが押された時に一度だけ実行される:
void setup() {
  // ９番ピンを出力端子として宣言する。
  pinMode(led, OUTPUT);
}

// loop関数は繰り返し実行され続ける:
void loop() {
  // ９番ピンの明るさを設定する。
  analogWrite(led, brightness);

  // 次のloop実行時のために明るさを変更する:
  brightness = brightness + fadeAmount;

  // フェードの終端ならばフェードの方向を反転させる:
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  // ぼんやりとした光に見せるため30ミリ秒待つ:
  delay(30);
}

