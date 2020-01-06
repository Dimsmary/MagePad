#include <Keyboard.h>
#include "FastLED.h"
#define LED_PIN     2
#define NUM_LEDS    32

#define col1 3
#define col2 4
#define col3 5
#define col4 6
#define line1 7
#define line2 8
#define line3 9
#define line4 10
#define line5 16
#define line6 14
#define line7 15
#define line8 1

CRGB leds[32];
byte arrow;

//定义按键按放命令
#define key11_release\
  Keyboard.release('1');\
  leds[0] = CRGB (0,0,0);\
  FastLED.show();
#define key11_press\
  Keyboard.press('1');\
   leds[0] = CRGB (133,0,133);\
  FastLED.show();
#define key12_press\
  Keyboard.press('q');\
  leds[7] = CRGB (133,0,133);\
  FastLED.show();
#define key12_release\
  Keyboard.release('q');\
  leds[7] = CRGB (0,0,0);\
  FastLED.show();
#define key13_press Keyboard.press('a');leds[8] = CRGB (133,0,133);FastLED.show();
#define key13_release Keyboard.release('a');leds[8] = CRGB (0,0,0);FastLED.show();
#define key14_press Keyboard.press('z');leds[15] = CRGB (133,0,133);FastLED.show();
#define key14_release Keyboard.release('z');leds[15] = CRGB (0,0,0);FastLED.show();
//2
#define key21_release\
  Keyboard.release('2');\
  leds[1] = CRGB (0,0,0);\
  FastLED.show();
#define key21_press Keyboard.press('2');leds[1] = CRGB (133,0,133);FastLED.show();
#define key22_press Keyboard.press('w');leds[6] = CRGB (133,0,133);FastLED.show();
#define key22_release Keyboard.release('w');leds[6] = CRGB (0,0,0);FastLED.show();
#define key23_press Keyboard.press('s');leds[9] = CRGB (133,0,133);FastLED.show();
#define key23_release Keyboard.release('s');leds[9] = CRGB (0,0,0);FastLED.show();
#define key24_press Keyboard.press('x');leds[14] = CRGB (133,0,133);FastLED.show();
#define key24_release Keyboard.release('x');leds[14] = CRGB (0,0,0);FastLED.show();
//3
#define key31_release Keyboard.release('3');leds[2] = CRGB (0,0,0);FastLED.show();
#define key31_press Keyboard.press('3');leds[2] = CRGB (133,0,133);FastLED.show();
#define key32_press Keyboard.press('e');leds[5] = CRGB (133,0,133);FastLED.show();
#define key32_release Keyboard.release('e');leds[5] = CRGB (0,0,0);FastLED.show();
#define key33_press Keyboard.press('d');leds[10] = CRGB (133,0,133);FastLED.show();
#define key33_release Keyboard.release('d');leds[10] = CRGB (0,0,0);FastLED.show();
#define key34_press Keyboard.press('c');leds[13] = CRGB (133,0,133);FastLED.show();
#define key34_release Keyboard.release('c');leds[13] = CRGB (0,0,0);FastLED.show();
//4
#define key41_release Keyboard.release('4');leds[3] = CRGB (0,0,0);FastLED.show();
#define key41_press Keyboard.press('4');leds[3] = CRGB (133,0,133);FastLED.show();
#define key42_press Keyboard.press('r');leds[4] = CRGB (133,0,133);FastLED.show();
#define key42_release Keyboard.release('r');leds[4] = CRGB (0,0,0);FastLED.show();
#define key43_press Keyboard.press('f');leds[11] = CRGB (133,0,133);FastLED.show();
#define key43_release Keyboard.release('f');leds[11] = CRGB (0,0,0);FastLED.show();
#define key44_press Keyboard.press('v');leds[12] = CRGB (133,0,133);FastLED.show();
#define key44_release Keyboard.release('v');leds[12] = CRGB (0,0,0);FastLED.show();
//5
#define key51_release Keyboard.release('5');leds[16] = CRGB (0,0,0);FastLED.show();
#define key51_press Keyboard.press('5');leds[16] = CRGB (133,0,133);FastLED.show();
#define key52_press Keyboard.press('t');leds[23] = CRGB (133,0,133);FastLED.show();
#define key52_release Keyboard.release('t');leds[23] = CRGB (0,0,0);FastLED.show();
#define key53_press Keyboard.press('g');leds[24] = CRGB (133,0,133);FastLED.show();
#define key53_release Keyboard.release('g');leds[24] = CRGB (0,0,0);FastLED.show();
#define key54_press Keyboard.press('b');leds[31] = CRGB (133,0,133);FastLED.show();
#define key54_release Keyboard.release('b');leds[31] = CRGB (0,0,0);FastLED.show();
//6
#define key61_release Keyboard.release('6');leds[17] = CRGB (0,0,0);FastLED.show();
#define key61_press Keyboard.press('6');leds[17] = CRGB (133,133,0);FastLED.show();
#define key62_press Keyboard.press('y');leds[22] = CRGB (133,133,0);FastLED.show();
#define key62_release Keyboard.release('y');leds[22] = CRGB (0,0,0);FastLED.show();
#define key63_press Keyboard.press('h');leds[25] = CRGB (133,133,0);FastLED.show();
#define key63_release Keyboard.release('h');leds[25] = CRGB (0,0,0);FastLED.show();
#define key64_press Keyboard.press('n');leds[30] = CRGB (133,133,0);FastLED.show();
#define key64_release Keyboard.release('n');leds[30] = CRGB (0,0,0);FastLED.show();
//7
#define key71_release Keyboard.release('7');leds[18] = CRGB (0,0,0);FastLED.show();
#define key71_press Keyboard.press('7');leds[18] = CRGB (133,133,0);FastLED.show();
#define key72_press Keyboard.press('u');leds[21] = CRGB (133,133,0);FastLED.show();
#define key72_release Keyboard.release('u');leds[21] = CRGB (0,0,0);FastLED.show();
#define key73_press Keyboard.press('j');leds[26] = CRGB (133,133,0);FastLED.show();
#define key73_release Keyboard.release('j');leds[26] = CRGB (0,0,0);FastLED.show();
#define key74_press Keyboard.press('m');leds[29] = CRGB (133,133,0);FastLED.show();
#define key74_release Keyboard.release('m');leds[29] = CRGB (0,0,0);FastLED.show();
//8
#define key81_release Keyboard.release('8');leds[19] = CRGB (0,0,0);FastLED.show();
#define key81_press Keyboard.press('8');leds[19] = CRGB (133,133,0);FastLED.show();
#define key82_press Keyboard.press('i');leds[20] = CRGB (133,133,0);FastLED.show();
#define key82_release Keyboard.release('i');leds[20] = CRGB (0,0,0);FastLED.show();
#define key83_press Keyboard.press('k');leds[27] = CRGB (133,133,0);FastLED.show();
#define key83_release Keyboard.release('k');leds[27] = CRGB (0,0,0);FastLED.show();
#define key84_press Keyboard.press(',');leds[28] = CRGB (133,133,0);FastLED.show();
#define key84_release Keyboard.release(',');leds[28] = CRGB (0,0,0);FastLED.show();

//定义记录变量
byte key11;
byte key12;
byte key13;
byte key14;
byte key21;
byte key22;
byte key23;
byte key24;
byte key31;
byte key32;
byte key33;
byte key34;
byte key41;
byte key42;
byte key43;
byte key44;
byte key51;
byte key52;
byte key53;
byte key54;
byte key61;
byte key62;
byte key63;
byte key64;
byte key71;
byte key72;
byte key73;
byte key74;
byte key81;
byte key82;
byte key83;
byte key84;

void setup() {
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  //初始化LED
  //扫描输入IO设置
  pinMode(col1, INPUT_PULLUP);
  pinMode(col2, INPUT_PULLUP);
  pinMode(col3, INPUT_PULLUP);
  pinMode(col4, INPUT_PULLUP);
  //扫描输出IO设置
  pinMode(line1, OUTPUT);
  pinMode(line2,OUTPUT);
  pinMode(line3, OUTPUT);
  pinMode(line4,OUTPUT);
  pinMode(line5,OUTPUT);
  pinMode(line6,OUTPUT);
  pinMode(line7,OUTPUT);
  pinMode(line8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
///////////////////////////////// 第一列扫描
  digitalWrite(line1,LOW);
  //第一行第一列扫描
  if(digitalRead(col1)){
    if(key11)
      {
      key11 = 0;
      key11_release
      }
  }
   else
   {
    key11 = 1;
    key11_press
   }
   //第二行第一列扫描
  if(digitalRead(col2)){
    if(key12)
      {
      key12 = 0;
      key12_release
      }
  }
   else
   {
    key12 = 1;
    key12_press
   }
      //第三行第一列扫描
  if(digitalRead(col3)){
    if(key13)
      {
      key13 = 0;
      key13_release
      }
  }
   else
   {
    key13 = 1;
    key13_press
   }
      //第四行第一列扫描
  if(digitalRead(col4)){
    if(key14)
      {
      key14 = 0;
      key14_release
      }
  }
   else
   {
    key14 = 1;
    key14_press
   }
  digitalWrite(line1,HIGH);
  ///////////////////////////////// 第二列扫描
  digitalWrite(line2,LOW);
  //第一行第二列扫描
  if(digitalRead(col1)){
    if(key21)
      {
      key21 = 0;
      key21_release
      }
  }
   else
   {
    key21 = 1;
    key21_press
   }
   //第二行第二列扫描
  if(digitalRead(col2)){
    if(key22)
      {
      key22 = 0;
      key22_release
      }
  }
   else
   {
    key22 = 1;
    key22_press
   }
      //第三行第二列扫描
  if(digitalRead(col3)){
    if(key23)
      {
      key23 = 0;
      key23_release
      }
  }
   else
   {
    key23 = 1;
    key23_press
   }
      //第四行第二列扫描
  if(digitalRead(col4)){
    if(key24)
      {
      key24 = 0;
      key24_release
      }
  }
   else
   {
    key24 = 1;
    key24_press
   }
  digitalWrite(line2,HIGH);
///////////////////////////////// 第三列扫描
  digitalWrite(line3,LOW);
  //第一行第三列扫描
  if(digitalRead(col1)){
    if(key31)
      {
      key31 = 0;
      key31_release
      }
  }
   else
   {
    key31 = 1;
    key31_press
   }
   //第二行第三列扫描
  if(digitalRead(col2)){
    if(key32)
      {
      key32 = 0;
      key32_release
      }
  }
   else
   {
    key32 = 1;
    key32_press
   }
      //第三行第三列扫描
  if(digitalRead(col3)){
    if(key33)
      {
      key33 = 0;
      key33_release
      }
  }
   else
   {
    key33 = 1;
    key33_press
   }
      //第四行第三列扫描
  if(digitalRead(col4)){
    if(key34)
      {
      key34 = 0;
      key34_release
      }
  }
   else
   {
    key34 = 1;
    key34_press
   }
  digitalWrite(line3,HIGH);
///////////////////////////////// 第四列扫描
  digitalWrite(line4,LOW);
  //第一行第四列扫描
  if(digitalRead(col1)){
    if(key41)
      {
      key41 = 0;
      key41_release
      }
  }
   else
   {
    key41 = 1;
    key41_press
   }
   //第二行第四列扫描
  if(digitalRead(col2)){
    if(key42)
      {
      key42 = 0;
      key42_release
      }
  }
   else
   {
    key42 = 1;
    key42_press
   }
      //第三行第四列扫描
  if(digitalRead(col3)){
    if(key43)
      {
      key43 = 0;
      key43_release
      }
  }
   else
   {
    key43 = 1;
    key43_press
   }
      //第四行第四列扫描
  if(digitalRead(col4)){
    if(key44)
      {
      key44 = 0;
      key44_release
      }
  }
   else
   {
    key44 = 1;
    key44_press
   }
  digitalWrite(line4,HIGH);
///////////////////////////////// 第五列扫描
  digitalWrite(line5,LOW);
  //第一行第五列扫描
  if(digitalRead(col1)){
    if(key51)
      {
      key51 = 0;
      key51_release
      }
  }
   else
   {
    key51 = 1;
    key51_press
   }
   //第二行第五列扫描
  if(digitalRead(col2)){
    if(key52)
      {
      key52 = 0;
      key52_release
      }
  }
   else
   {
    key52 = 1;
    key52_press
   }
      //第三行第五列扫描
  if(digitalRead(col3)){
    if(key53)
      {
      key53 = 0;
      key53_release
      }
  }
   else
   {
    key53 = 1;
    key53_press
   }
      //第四行第五列扫描
  if(digitalRead(col4)){
    if(key54)
      {
      key54 = 0;
      key54_release
      }
  }
   else
   {
    key54 = 1;
    key54_press
   }
  digitalWrite(line5,HIGH);
///////////////////////////////// 第六列扫描
  digitalWrite(line6,LOW);
  //第一行第六列扫描
  if(digitalRead(col1)){
    if(key61)
      {
      key61 = 0;
      key61_release
      }
  }
   else
   {
    key61 = 1;
    key61_press
   }
   //第二行第六列扫描
  if(digitalRead(col2)){
    if(key62)
      {
      key62 = 0;
      key62_release
      }
  }
   else
   {
    key62 = 1;
    key62_press
   }
      //第三行第六列扫描
  if(digitalRead(col3)){
    if(key63)
      {
      key63 = 0;
      key63_release
      }
  }
   else
   {
    key63 = 1;
    key63_press
   }
      //第四行第六列扫描
  if(digitalRead(col4)){
    if(key64)
      {
      key64 = 0;
      key64_release
      }
  }
   else
   {
    key64 = 1;
    key64_press
   }
  digitalWrite(line6,HIGH);
///////////////////////////////// 第七列扫描
  digitalWrite(line7,LOW);
  //第一行第七列扫描
  if(digitalRead(col1)){
    if(key71)
      {
      key71 = 0;
      key71_release
      }
  }
   else
   {
    key71 = 1;
    key71_press
   }
   //第二行第七列扫描
  if(digitalRead(col2)){
    if(key72)
      {
      key72 = 0;
      key72_release
      }
  }
   else
   {
    key72 = 1;
    key72_press
   }
      //第三行第七列扫描
  if(digitalRead(col3)){
    if(key73)
      {
      key73 = 0;
      key73_release
      }
  }
   else
   {
    key73 = 1;
    key73_press
   }
      //第四行第七列扫描
  if(digitalRead(col4)){
    if(key74)
      {
      key74 = 0;
      key74_release
      }
  }
   else
   {
    key74 = 1;
    key74_press
   }
  digitalWrite(line7,HIGH);
  ///////////////////////////////// 第八列扫描
  digitalWrite(line8,LOW);
  //第一行第八列扫描
  if(digitalRead(col1)){
    if(key81)
      {
      key81 = 0;
      key81_release
      }
  }
   else
   {
    key81 = 1;
    key81_press
   }
   //第二行第八列扫描
  if(digitalRead(col2)){
    if(key82)
      {
      key82 = 0;
      key82_release
      }
  }
   else
   {
    key82 = 1;
    key82_press
   }
      //第三行第八列扫描
  if(digitalRead(col3)){
    if(key83)
      {
      key83 = 0;
      key83_release
      }
  }
   else
   {
    key83 = 1;
    key83_press
   }
      //第四行第八列扫描
  if(digitalRead(col4)){
    if(key84)
      {
      key84 = 0;
      key84_release
      }
  }
   else
   {
    key84 = 1;
    key84_press
   }
  digitalWrite(line8,HIGH);
}
