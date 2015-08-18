/*
  ReadAnalogVoltage

  アナログ入力0番ピンを読み取り、それをボルトの値に変換し、結果をシリアルモニタに出力します。
  ポテンションメーター（ボリューム）のセンターピンをA0ピンに接続し,外側のピンを+5VとGNDに接続します。

  このサンプルコードはパブリックドメインで提供されています。
 */

// setup関数はresetボタンが押された時に一度だけ実行される:
void setup() {
  // シリアル通信を9600 bit/秒の通信速度で初期化する:
  Serial.begin(9600);
}

// loop関数は繰り返し実行され続ける:
void loop() {
  // アナログ入力ピン0(A0)の値を読む:
  int sensorValue = analogRead(A0);
  // 読み込んだアナログ値 (0 - 1023) を ボルト (0 - 5V)に変換する:
  float voltage = sensorValue * (5.0 / 1023.0);
  // 読み取ったボルト数をシリアルモニタに出力する:
  Serial.println(voltage);
}
