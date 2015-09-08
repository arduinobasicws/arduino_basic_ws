/*
 Fading
 
 この例はanalogWrite()関数を使って、どのようにLEDを徐々に点灯させるかを示しています。
 
 回路:
 * LEDをpin 9 から GNDに接続

 Created 1 Nov 2008
 By David A. Mellis
 modified 30 Aug 2011
 By Tom Igoe
 translated into Japanese 8 Sep 2015
 By Toru Hagihara
 
 http://arduino.cc/en/Tutorial/Fading
 
 このコードはパブリックドメインの元で配布されています。

 */


int ledPin = 9;    // LEDのピン番号

void setup()  { 
  // セットアップでは何も実行しない
} 

void loop()  { 
  // 最小から最大まで5ポイントずつ徐々に増加させる:
  for(int fadeValue = 0 ; fadeValue <= 255; fadeValue +=5) { 
    // 値を設定する (範囲は 0 〜 255):
    analogWrite(ledPin, fadeValue);         
    // 光の見え方を徐々に変化させるため、３０ミリ秒待つ  
    delay(30);                            
  } 

  // 最大から最小まで５ポイントずつ徐々に減少させる:
  for(int fadeValue = 255 ; fadeValue >= 0; fadeValue -=5) { 
    // 値を設定する (範囲は 0 〜 255):
    analogWrite(ledPin, fadeValue);         
    // 光の見え方を徐々に変化させるため、３０ミリ秒待つ  
    delay(30);                            
  } 
}
