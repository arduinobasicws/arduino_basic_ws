/*
  BlinkFullColorLED
  フルカラーLEDの色を制御するサンプル（digitalWrite版）です。
  赤・青・緑・白(全色点灯)の順に点灯させます。
　ここではフルカラーLEDは(+)の側が共通の端子になっているアノードコモンタイプを使用します。
  RGB(赤、青、緑)の三色それぞれにカソード端子が付いています。

  ポイント：
　* アノードは共通のため、一色ごとに入力電圧を上げたり下げたりできない。
  * アノード側は常に電圧（3.3V）をかけた状態にしておく。
  * カソード側に同じ値の電圧（3.3V）をかけると電位差が0になり、電流が流れないため
  　LEDが消灯する。カソード側は3端子あるので、それぞれの色を個別に制御できる。
  * 赤の内部LEDは青、緑の内部LEDに比べ、点灯するのに必要な電圧が小さい。
  　そのため三色を同時に点灯させようとすると、電流が流れやすい赤の回路のみ点灯し、他の色は点灯しない。
  　これを回避するため、赤の回路に抵抗を入れて３つの回路に同等に電流が流れるよう調整する。
  
  回路:
  * LEDのアノードピン(１本だけ長い)をpin 13 に接続
  * LEDのカソードピン（赤）を抵抗（330Ω）を挟んでpin 3に接続
  * LEDのカソードピン（青）抵抗なしでpin 5に接続
  * LEDのカソードピン（緑）抵抗なしでpin 6に接続

  created 17 Sep 2015
  by Toru Hagihara

   このコードはパブリックドメインの元で配布されています。
 */


void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT); //アノードピン
  pinMode(3, OUTPUT); //カソードピン(赤)
  pinMode(5, OUTPUT); //カソードピン(青)
  pinMode(6, OUTPUT); //カソードピン(緑)

  //アノードに電圧をかける（常にHIGH)
  digitalWrite(13, HIGH); // LEDのアノード側をHIGH(3.3V)に設定します。
}

// the loop function runs over and over again forever
void loop() {
  //赤に点灯させる
  digitalWrite(3, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);

  //青に点灯させる
  digitalWrite(3, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(1500);

  //緑に点灯させる
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  delay(1500);

  //白に点灯させる
  digitalWrite(3, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  delay(1500);

  //消灯させる
  digitalWrite(3, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  delay(1500);
}
