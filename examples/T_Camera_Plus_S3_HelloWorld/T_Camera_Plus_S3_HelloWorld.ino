#define LILYGO_LGFX_USE_T_CAMERA_PLUS_S3
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Camera_Plus_S3 display;

void setup() {
  Serial.begin(115200);
  display.begin(0, 220);
  display.fillScreen(TFT_BLACK);
  display.drawRect(0, 0, display.width(), display.height(), TFT_CYAN);
  display.setTextDatum(textdatum_t::middle_center);
  display.setTextColor(TFT_WHITE, TFT_BLACK);
  display.drawString("T-Camera Plus S3", display.width() / 2, display.height() / 2, &fonts::Font2);
}

void loop() {}
