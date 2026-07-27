#define LILYGO_LGFX_USE_T_EMBED_CC1101
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Embed_CC1101 display;

void setup() {
  Serial.begin(115200);
  display.begin(3, 220);
  display.fillScreen(TFT_BLACK);
  display.drawRect(0, 0, display.width(), display.height(), TFT_CYAN);
  display.setTextDatum(textdatum_t::middle_center);
  display.setTextColor(TFT_WHITE, TFT_BLACK);
  display.drawString("T-Embed CC1101", display.width() / 2, display.height() / 2, &fonts::Font4);
}

void loop() {}
