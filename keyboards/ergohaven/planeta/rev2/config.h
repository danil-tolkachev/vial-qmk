#pragma once

// SPI config for display
#define SPI_DRIVER SPID1
#define SPI_SCK_PIN GP10
#define SPI_MOSI_PIN GP11
#define SPI_MISO_PIN GP29

// LCD config
#define LCD_DC_PIN GP16
#define LCD_CS_PIN GP13
#define LCD_RST_PIN GP17
#define BACKLIGHT_PWM_DRIVER PWMD7
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define QUANTUM_PAINTER_LVGL_USE_CUSTOM_CONF

#define RGBLED_NUM 2
#define RGBLIGHT_SLEEP
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 16
#define RGBLIGHT_DEFAULT_VAL 150
#define RGBLIGHT_LIMIT_VAL 150
#define RGBLIGHT_DEFAULT_SAT 0

#define AUDIO_PIN GP8
#define AUDIO_PWM_DRIVER PWMD4
#define AUDIO_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define AUDIO_INIT_DELAY
#define AUDIO_CLICKY
#define CG_SWAP_SONG SONG(AG_SWAP_SOUND)

#define TAP_CODE_DELAY 1
#define QUANTUM_PAINTER_DISPLAY_TIMEOUT 0
