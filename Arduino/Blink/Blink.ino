/*
	Blink
	LEDを一秒間点灯、消灯を繰り返す。
	このサンプルコードはパブリックドメインです。
*/

// 13番ピンは大抵のarduinoボードでLEDにつながっている。
// これに名前をつける。
int led = 13;

// "setup"ルーティンはボードの電源を入れたときやリセットを押した時に一度だけ行われる。
void setup(){
	//　そのデジタルピンを出力に設定する。
	pinMode(led,OUTPUT);
}

// "loop"ルーティンは繰り返し行われる。
void loop(){
	digitalWrite(led, HIGH);	//　LEDを点灯
	delay(1000);			//　一秒待つ
	digitalWrite(led, LOW);		//　電圧を落としてLEDを消灯
	delay(1000);			//　一秒待つ
}
