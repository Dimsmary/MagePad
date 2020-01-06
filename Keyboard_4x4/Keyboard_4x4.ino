#include <Keyboard.h>
#include "FastLED.h"
#define LED_PIN     2
#define NUM_LEDS    16

#define col1 3
#define col2 4
#define col3 5
#define col4 6
#define line1 7
#define line2 8
#define line3 9
#define line4 10
CRGB leds[16];
CRGB led_color  = CRGB(133,0,133);
CRGB led_white = CRGB(0,0,0);
byte arrow;


//定义按键按放命令
#define key11_release Keyboard.release('1');leds[0] = led_white;FastLED.show();
#define key11_press Keyboard.press('1');leds[0] = led_color;FastLED.show();
#define key12_press Keyboard.press('q');leds[7] = led_color;FastLED.show();
#define key12_release Keyboard.release('q');leds[7] = led_white;FastLED.show();
#define key13_press Keyboard.press('a');leds[8] = led_color;FastLED.show();
#define key13_release Keyboard.release('a');leds[8] = led_white;FastLED.show();
#define key14_press Keyboard.press('z');leds[15] = led_color;FastLED.show();
#define key14_release Keyboard.release('z');leds[15] = led_white;FastLED.show();
//2
#define key21_release Keyboard.release('2');leds[1] = led_white;FastLED.show();
#define key21_press Keyboard.press('2');leds[1] = led_color;FastLED.show();
#define key22_press Keyboard.press('w');leds[6] = led_color;FastLED.show();
#define key22_release Keyboard.release('w');leds[6] = led_white;FastLED.show();
#define key23_press Keyboard.press('s');leds[9] = led_color;FastLED.show();
#define key23_release Keyboard.release('s');leds[9] = led_white;FastLED.show();
#define key24_press Keyboard.press('x');leds[14] = led_color;FastLED.show();
#define key24_release Keyboard.release('x');leds[14] = led_white;FastLED.show();
//3
#define key31_release Keyboard.release('3');leds[2] = led_white;FastLED.show();
#define key31_press Keyboard.press('3');leds[2] = led_color;FastLED.show();
#define key32_press Keyboard.press('e');leds[5] = led_color;FastLED.show();
#define key32_release Keyboard.release('e');leds[5] = led_white;FastLED.show();
#define key33_press Keyboard.press('d');leds[10] = led_color;FastLED.show();
#define key33_release Keyboard.release('d');leds[10] = led_white;FastLED.show();
#define key34_press Keyboard.press('c');leds[13] = led_color;FastLED.show();
#define key34_release Keyboard.release('c');leds[13] = led_white;FastLED.show();
//4
#define key41_release Keyboard.release('4');leds[3] = led_white;FastLED.show();
#define key41_press Keyboard.press('4');leds[3] = led_color;FastLED.show();
#define key42_press Keyboard.press('r');leds[4] = led_color;FastLED.show();
#define key42_release Keyboard.release('r');leds[4] = led_white;FastLED.show();
#define key43_press Keyboard.press('f');leds[11] = led_color;FastLED.show();
#define key43_release Keyboard.release('f');leds[11] = led_white;FastLED.show();
#define key44_press Keyboard.press('v');leds[12] = led_color;FastLED.show();
#define key44_release Keyboard.release('v');leds[12] = led_white;FastLED.show();

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
}
