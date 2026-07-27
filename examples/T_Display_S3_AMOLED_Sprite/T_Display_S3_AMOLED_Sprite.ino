#define LILYGO_LGFX_USE_T_DISPLAY_S3_AMOLED
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Display_S3_AMOLED display;
LGFX_Sprite sprite(&display);
int x = 0;
int dx = 4;

void setup() {
  Serial.begin(115200);
  display.begin(1, 200);
  sprite.createSprite(display.width(), display.height());
}

void loop() {
  sprite.fillSprite(TFT_BLACK);
  sprite.drawRect(0, 0, sprite.width(), sprite.height(), TFT_DARKGREY);
  sprite.fillCircle(x, sprite.height() / 2, 18, TFT_CYAN);
  sprite.setTextDatum(textdatum_t::middle_center);
  sprite.setTextColor(TFT_WHITE, TFT_BLACK);
  sprite.drawString("AMOLED Sprite", sprite.width() / 2, 28, &fonts::Font2);
  sprite.pushSprite(0, 0);

  x += dx;
  if (x < 18 || x > sprite.width() - 18) dx = -dx;
  delay(16);
}
