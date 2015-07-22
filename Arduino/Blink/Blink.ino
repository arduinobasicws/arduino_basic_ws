/*
	Blink
	LEDを一秒間隔で点灯、消灯を繰り返します。
　大抵のArduinoは基盤上にLEDが接続されています。
	UnoとLeonardoの場合、それは13番ピンに接続されています。
　もしあなたのArduinoでどのピンにLEDが接続されているかわからない場合、
　次のドキュメントで確認してください。　http://arduino.cc

	このサンプルコードはパブリックドメインで提供されています。
*/


// ピンに名前をつける。
int led = 13;

// "setup"関数の命令はボードの電源を入れたときやリセットを押した時に一度だけ行われる。
void setup(){
	//　そのデジタルピンを出力に設定する。
	pinMode(led,OUTPUT);
}

// "loop"関数の命令はずっと繰り返し行われる。
void loop(){
	digitalWrite(led, HIGH);	//　LEDを点灯
	delay(1000);							//　一秒待つ
	digitalWrite(led, LOW);		//　電圧を落としてLEDを消灯
	delay(1000);							//　一秒待つ
}
