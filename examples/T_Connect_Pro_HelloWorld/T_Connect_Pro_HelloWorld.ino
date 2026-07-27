#define LILYGO_LGFX_USE_T_CONNECT_PRO
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Connect_Pro display;

void setup() {
  Serial.begin(115200);
  display.begin(0, 220);
  display.fillScreen(TFT_BLACK);
  display.drawRect(0, 0, display.width(), display.height(), TFT_CYAN);
  display.setTextDatum(textdatum_t::middle_center);
  display.setTextColor(TFT_WHITE, TFT_BLACK);
  display.drawString("T-Connect Pro", display.width() / 2, display.height() / 2, &fonts::Font4);
}

void loop() {}
