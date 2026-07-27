# LilyGo-display-library 使用说明

这是一个基于 `LovyanGFX` 的 LILYGO 显示屏单板配置库。库中封装了不同开发板的屏幕驱动、引脚、背光和常用初始化参数，Arduino 示例中可以直接创建对应的显示对象。

## 支持设备

| 类名 | 设备 | 显示屏 |
| --- | --- | --- |
| `LilyGo_T_Display` | T-Display | ST7789V, 135 x 240 native / 240 x 135 landscape, SPI |
| `LilyGo_T_Display_S3` | T-Display-S3 | ST7789V, 170 x 320 native / 320 x 170 landscape, 8-bit parallel |
| `LilyGo_T_Circle` | T-Circle | GC9D01N compatible via GC9A01, 160 x 160, SPI |
| `LilyGo_T_Circle_S3` | T-Circle S3 | GC9D01N compatible via GC9A01, 160 x 160, SPI |
| `LilyGo_T_Display_S3_AMOLED` | T-Display-S3-AMOLED | RM67162, 536 x 240, QSPI AMOLED |
| `LilyGo_T4_S3` | T4-S3 | RM690B0, 452 x 600, QSPI AMOLED with CST226 touch |
| `LilyGo_T_Deck` | T-Deck | ST7789, 240 x 320 native / 320 x 240 landscape, SPI |
| `LilyGo_T_Deck_Plus` | T-Deck Plus | ST7789, 240 x 320 native / 320 x 240 landscape, SPI |
| `LilyGo_T_Embed` | T-Embed | ST7789V, 170 x 320 native / 320 x 170 landscape, SPI |
| `LilyGo_T_Embed_CC1101` | T-Embed CC1101 | ST7789V, 170 x 320 native / 320 x 170 landscape, SPI |
| `LilyGo_T_Connect_Pro` | T-Connect Pro | ST7796, 222 x 480, SPI |
| `LilyGo_T_Display_Bar` | T-Display Bar | ST7789, 76 x 284, SPI |
| `LilyGo_T_Display_Keyboard` | T-Display Keyboard | ST7789V, 135 x 240 native / 240 x 135 landscape, SPI |
| `LilyGo_T_Dongle_S3` | T-Dongle-S3 | ST7735S, 80 x 160, SPI |
| `LilyGo_T_Dongle_C5` | T-Dongle-C5 | ST7735S, 80 x 160, SPI |
| `LilyGo_T_Encoder` | T-Encoder | GC9A01, 240 x 240, SPI |
| `LilyGo_T_Encoder_Pro` | T-Encoder Pro | SH8601Z, 390 x 390, QSPI AMOLED |
| `LilyGo_T_Display_S3_Pro` | T-Display S3 Pro | ST7796, 222 x 480, SPI |
| `LilyGo_T_Camera_Plus_S3` | T-Camera Plus S3 | ST7789V, 240 x 240, SPI，带 CST816S 触摸 |

## 安装

1. 在 Arduino IDE 库管理器中安装 `LovyanGFX`。
2. 将 `LilyGo-display-library` 文件夹放到 Arduino 库目录，例如 `D:\Documents\libraries`。
3. 如果 Arduino IDE 已经打开，请重启 IDE，让它重新扫描库和示例。

## 单板宏

在 `#include <LilyGo_LovyanGFX.h>` 之前定义一个单板宏，避免编译目标设备时同时解析其它设备的引脚配置。

| 设备 | 宏 |
| --- | --- |
| T-Display | `LILYGO_LGFX_USE_T_DISPLAY` |
| T-Display-S3 | `LILYGO_LGFX_USE_T_DISPLAY_S3` |
| T-Circle | `LILYGO_LGFX_USE_T_CIRCLE` |
| T-Circle S3 | `LILYGO_LGFX_USE_T_CIRCLE_S3` |
| T-Display-S3-AMOLED | `LILYGO_LGFX_USE_T_DISPLAY_S3_AMOLED` |
| T4-S3 | `LILYGO_LGFX_USE_T4_S3` |
| T-Deck | `LILYGO_LGFX_USE_T_DECK` |
| T-Deck Plus | `LILYGO_LGFX_USE_T_DECK_PLUS` |
| T-Embed | `LILYGO_LGFX_USE_T_EMBED` |
| T-Embed CC1101 | `LILYGO_LGFX_USE_T_EMBED_CC1101` |
| T-Connect Pro | `LILYGO_LGFX_USE_T_CONNECT_PRO` |
| T-Display Bar | `LILYGO_LGFX_USE_T_DISPLAY_BAR` |
| T-Display Keyboard | `LILYGO_LGFX_USE_T_DISPLAY_KEYBOARD` |
| T-Dongle-S3 | `LILYGO_LGFX_USE_T_DONGLE_S3` |
| T-Dongle-C5 | `LILYGO_LGFX_USE_T_DONGLE_C5` |
| T-Encoder | `LILYGO_LGFX_USE_T_ENCODER` |
| T-Encoder Pro | `LILYGO_LGFX_USE_T_ENCODER_PRO` |
| T-Display S3 Pro | `LILYGO_LGFX_USE_T_DISPLAY_S3_PRO` |
| T-Camera Plus S3 | `LILYGO_LGFX_USE_T_CAMERA_PLUS_S3` |

## 最小示例

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

`begin(rotation, brightness)` 会完成 `init()`、屏幕方向设置、背光亮度设置，并清空屏幕。

## 示例

Arduino IDE 中可以从 `文件 > 示例 > LilyGo-display-library` 打开各开发板独立示例。

每个支持的开发板在 `examples/` 目录下都有单独示例，并且示例顶部已经定义对应的 `LILYGO_LGFX_USE_*` 宏。
