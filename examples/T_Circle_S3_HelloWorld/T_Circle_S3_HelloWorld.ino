#define LILYGO_LGFX_USE_T_CIRCLE_S3
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Circle_S3 display;

void setup() {
  Serial.begin(115200);
  display.begin(0, 220);
  display.fillScreen(TFT_BLACK);
  display.drawCircle(80, 80, 78, TFT_CYAN);
  display.setTextDatum(textdatum_t::middle_center);
  display.setTextColor(TFT_WHITE, TFT_BLACK);
  display.drawString("T-Circle S3", 80, 80, &fonts::Font2);
}

void loop() {}
