/*
 DigitalReadSerial
 デジタルピン２番の入力を読み取り、シリアルモニタに結果を表示します。

 このサンプルコードはパブリックドメインです。
 */

// デジタルピン２番にはプッシュボタンを接続する。これに名前をつける:
int pushButton = 2;

// setup関数はresetボタンが押された時に一度だけ実行される:
void setup() {
  // シリアル通信を9600 bit/秒の通信速度で初期化する:
  Serial.begin(9600);
  // プッシュボタンのピンを入力に設定する:
  pinMode(pushButton, INPUT);
}

// loop関数は繰り返し実行され続ける:
void loop() {
  // 入力ピンの状態を読む:
  int buttonState = digitalRead(pushButton);
  // ボタンの状態をシリアル通信で出力する:
  Serial.println(buttonState);
  delay(1);        // 読み取りを安定させるためdelayによる遅延を入れる
}



