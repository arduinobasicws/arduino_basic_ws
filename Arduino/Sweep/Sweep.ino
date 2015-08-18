/* Sweep
 by BARRAGAN <http://barraganstudio.com> 
 このサンプルコードはパブリックドメインで提供されています。
 modified 8 Nov 2013
 by Scott Fitzgerald 
 translated into Japanese 18 Aug 2015
 by ToruHagihara
 
 http://www.arduino.cc/en/Tutorial/Sweep
*/ 

#include <Servo.h> 
 
Servo myservo;  // サーボ制御用のサーボオブジェクトを作成する。
                // ほとんどの基板で12までオブジェクトを作成することができる。
 
int pos = 0;    // サーボの位置を格納するための変数
 
void setup() 
{ 
  myservo.attach(9);  // ９番ピンに接続したサーボをサーボオブジェクトに接続する。 
} 
 
void loop() 
{ 
  for(pos = 0; pos <= 180; pos += 1) // 0度から180度まで1度ずつ順番に実行する
  {
    myservo.write(pos);              // サーボに変数'pos'の値の場所へ行くよう命令する。
    delay(15);                       // サーボがその位置に到達するまで、15ミリ秒待つ。
  } 
  for(pos = 180; pos>=0; pos-=1)     // 180度から0度まで1度ずつ順番に実行する
  {                                
    myservo.write(pos);              // サーボに変数'pos'の値の場所へ行くよう命令する。
    delay(15);                       // サーボがその位置に到達するまで、15ミリ秒待つ。
  } 
} 

