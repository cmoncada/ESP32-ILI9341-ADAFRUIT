#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include <SPI.h>
#include <Fonts/FreeSerifBold12pt7b.h>

#define TFT_CS   10
#define TFT_DC   7
#define TFT_MOSI 11
#define TFT_SCK 12
#define TFT_RESET  6
#define TFT_MISO  13

Adafruit_ILI9341 tft = Adafruit_ILI9341(TFT_CS, TFT_DC, TFT_MOSI, TFT_SCK, TFT_RESET, TFT_MISO);

void setup() {
  tft.begin();
  tft.setRotation(3);
  tft.fillScreen(ILI9341_BLACK);
}

void loop(void) {
  tft.setFont(&FreeSerifBold12pt7b);
  tft.setTextColor(ILI9341_CYAN);
  tft.setCursor(10, 30);
  tft.println("Hello World!");

  tft.setCursor(10, 50);
  tft.println("linea 1");

  tft.drawRect(0, 80, tft.width(), 20, ILI9341_BLUE);
  tft.fillRect(0, 100, tft.width(), 20, ILI9341_DARKGREEN);
}
