#define cs   A2
#define dc   A1
#define rst  0
#define sclk A3
#define mosi A5


#include "Adafruit_ST7735_Photon.h"

Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, mosi,sclk, rst);


void setup() {
    
    Serial.begin(9600);

    tft.initG();
     
    tft.fillScreen(ST7735_BLACK);


}

void loop() {
    Serial.println("printing though!");
    tft.fillScreen(ST7735_BLACK);
    // tft.setCursor(0, 0);
    tft.setTextColor(ST7735_WHITE);
    tft.setTextWrap(true);
    // tft.setTextSize(3);
    // tft.setCursor(30, 3);
    tft.setFont(HERO_10);
    tft.drawRightString("OTTAWA",  3);

    tft.setFont(HERO_16);
    tft.setTextSize(2);
    // tft.setCursor(25, 20);
    tft.drawRightString("-1  C", 20);

    tft.setTextSize(1);
    // tft.setCursor(35, 60);
    tft.drawRightString("2:35 PM", 60);

    tft.drawFastHLine(0, 90, tft.width(), ST7735_CYAN);

    tft.setTextWrap(true);
    tft.setFont(CENTURY_8);
    tft.setTextSize(1);
    // tft.setCursor(0, tft.height()-65);
    int yPos = tft.drawString("Stay Hungry, Stay Foolish!",  0,tft.height()-65);
    tft.setTextColor(ST7735_CYAN);
    tft.drawRightString(" - Steve Jobs   ", yPos);
    tft.setTextColor(ST7735_MAGENTA);
    delay(5000);
}

