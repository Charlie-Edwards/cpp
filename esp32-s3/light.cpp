#include <Adafruit_NeoPixel.h>

Adafruit_NeoPixel LED_RGB(1, 48, NEO_GRBW + NEO_KHZ800);

void setup() {
  LED_RGB.begin();
  LED_RGB.setBrightness(255 * 0.1);
}

void loop() {
  LED_RGB.setPixelColor(0, uint32_t(LED_RGB.Color(0, 255, 255)));
  LED_RGB.show();
}
