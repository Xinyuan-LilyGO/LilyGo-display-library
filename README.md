# LilyGo-display-library

Small Arduino library that wraps LovyanGFX board configuration for selected LILYGO ESP32 display boards.

Supported boards:

| Class | Board | Display |
| --- | --- | --- |
| `LilyGo_T_Display` | T-Display | ST7789V, 135 x 240 native / 240 x 135 landscape, SPI |
| `LilyGo_T_Display_S3` | T-Display-S3 | ST7789V, 170 x 320 native / 320 x 170 landscape, 8-bit parallel |
| `LilyGo_T_Circle` | T-Circle | GC9D01N compatible via GC9A01, 160 x 160, SPI |
| `LilyGo_T_Circle_S3` | T-Circle S3 | GC9D01N compatible via GC9A01, 160 x 160, SPI |
| `LilyGo_T_Display_S3_AMOLED` | T-Display-S3-AMOLED | RM67162, 536 x 240, QSPI |
| `LilyGo_T4_S3` | T4-S3 | RM690B0, 452 x 600, QSPI AMOLED with CST226 touch |
| `LilyGo_T_Deck` | T-Deck | ST7789, 240 x 320 native / 320 x 240 landscape, SPI |
| `LilyGo_T_Deck_Plus` | T-Deck Plus | ST7789, 240 x 320 native / 320 x 240 landscape, SPI |
| `LilyGo_T_Embed_CC1101` | T-Embed CC1101 | ST7789V, 170 x 320 native / 320 x 170 landscape, SPI |
| `LilyGo_T_Embed` | T-Embed | ST7789V, 170 x 320 native / 320 x 170 landscape, SPI |
| `LilyGo_T_Connect_Pro` | T-Connect Pro | ST7796, 222 x 480, SPI |
| `LilyGo_T_Display_Bar` | T-Display Bar | ST7789, 76 x 284, SPI |
| `LilyGo_T_Display_Keyboard` | T-Display Keyboard | ST7789V, 135 x 240 native / 240 x 135 landscape, SPI |
| `LilyGo_T_Dongle_S3` | T-Dongle-S3 | ST7735S, 80 x 160, SPI |
| `LilyGo_T_Dongle_C5` | T-Dongle-C5 | ST7735S, 80 x 160, SPI |
| `LilyGo_T_Encoder` | T-Encoder | GC9A01, 240 x 240, SPI |
| `LilyGo_T_Encoder_Pro` | T-Encoder Pro | SH8601Z, 390 x 390, QSPI AMOLED |
| `LilyGo_T_Display_S3_Pro` | T-Display S3 Pro | ST7796, 222 x 480, SPI |
| `LilyGo_T_Camera_Plus_S3` | T-Camera Plus S3 | ST7789V, 240 x 240, SPI with CST816S touch |

## Install

1. Install `LovyanGFX` from Arduino IDE Library Manager.
2. Put this folder in your Arduino libraries directory.
3. Restart Arduino IDE if it was already open.

## Minimal Usage

```cpp
#define LILYGO_LGFX_USE_T_DISPLAY
#include <LilyGo_LovyanGFX.h>

LilyGo_T_Display display;

void setup() {
  display.begin(1);
  display.drawString("Hello", 20, 20);
}

void loop() {}
```

Use one of these display objects depending on the board:

```cpp
LilyGo_T_Display_S3 display;
LilyGo_T_Display display;
LilyGo_T_Circle display;
LilyGo_T_Circle_S3 display;
LilyGo_T_Display_S3_AMOLED display;
LilyGo_T4_S3 display;
LilyGo_T_Deck display;
LilyGo_T_Deck_Plus display;
LilyGo_T_Embed_CC1101 display;
LilyGo_T_Embed display;
LilyGo_T_Connect_Pro display;
LilyGo_T_Display_Bar display;
LilyGo_T_Display_Keyboard display;
LilyGo_T_Dongle_S3 display;
LilyGo_T_Dongle_C5 display;
LilyGo_T_Encoder display;
LilyGo_T_Encoder_Pro display;
LilyGo_T_Display_S3_Pro display;
LilyGo_T_Camera_Plus_S3 display;
```

The `begin(rotation, brightness)` helper calls `init()`, sets rotation and brightness, and clears the screen.

Define one `LILYGO_LGFX_USE_*` macro before including `LilyGo_LovyanGFX.h` to compile only the target board profile. Sketches should not rely on a default board profile; defining one macro keeps other board configurations out of the build.

Arduino IDE examples are available from `File > Examples > LilyGo-display-library`.

Each supported board has its own example folder under `examples/`, and every example already defines the matching `LILYGO_LGFX_USE_*` macro at the top of the sketch.
