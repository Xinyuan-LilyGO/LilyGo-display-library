#define LILYGO_LGFX_USE_T_ENCODER_PRO
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Encoder_Pro display;

void setup() {
  Serial.begin(115200);
  display.begin(0, 200);
  display.fillScreen(TFT_BLACK);
  display.drawCircle(display.width() / 2, display.height() / 2, 188, TFT_CYAN);
  display.setTextDatum(textdatum_t::middle_center);
  display.setTextColor(TFT_WHITE, TFT_BLACK);
  display.drawString("T-Encoder Pro", display.width() / 2, display.height() / 2, &fonts::Font4);
}

void loop() {}
