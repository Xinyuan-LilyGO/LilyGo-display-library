#define LILYGO_LGFX_USE_T_DISPLAY_S3_AMOLED
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Display_S3_AMOLED display;

void setup() {
  Serial.begin(115200);
  display.begin(1, 200);
  display.fillScreen(TFT_BLACK);
  display.drawRect(0, 0, display.width(), display.height(), TFT_CYAN);
  display.setTextDatum(textdatum_t::middle_center);
  display.setTextColor(TFT_WHITE, TFT_BLACK);
  display.drawString("T-Display-S3", display.width() / 2, display.height() / 2 - 14, &fonts::Font4);
  display.drawString("AMOLED", display.width() / 2, display.height() / 2 + 18, &fonts::Font4);
}

void loop() {}
