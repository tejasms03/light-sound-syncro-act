#include <FastLED.h>

#define NUM_LEDS 100
#define DATA_PIN 2
#define BRIGHTNESS 100
#define LED_TYPE NEOPIXEL
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

uint8_t gHue = 0;
uint8_t patternIndex = 0;
unsigned long lastSwitch = 0;
const unsigned long patternDuration = 8000; // ms per pattern

void setup() {
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS);
  FastLED.setBrightness(BRIGHTNESS);
  FastLED.clear();
}

void loop() {
  EVERY_N_MILLISECONDS(20) { gHue++; }
  EVERY_N_MILLISECONDS(patternDuration) { patternIndex++; }

  switch (patternIndex % 5) {
    case 0: rainbowChase(); break;
    case 1: fireFlicker(); break;
    case 2: bluePulse(); break;
    case 3: sparkle(); break;
    case 4: colorWipe(); break;
  }

  FastLED.show();
}

// 🌈 Flowing rainbow
void rainbowChase() {
  fill_rainbow(leds, NUM_LEDS, gHue, 5);
}

// 🔥 Random fire flicker
void fireFlicker() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB(random8(120, 255), random8(0, 50), 0);
  }
}

// 💧 Smooth blue breathing pulse
void bluePulse() {
  uint8_t pulse = beatsin8(10, 20, 255);
  fill_solid(leds, NUM_LEDS, CHSV(160, 255, pulse));
}

// ✨ Random sparkles
void sparkle() {
  fadeToBlackBy(leds, NUM_LEDS, 40);
  leds[random16(NUM_LEDS)] += CHSV(gHue, 200, 255);
}

// 🚀 Color wipe
void colorWipe() {
  static int pos = 0;
  static CRGB wipeColor = CHSV(random8(), 255, 255);

  leds[pos] = wipeColor;
  pos++;

  if (pos >= NUM_LEDS) {
    pos = 0;
    wipeColor = CHSV(random8(), 255, 255);
    FastLED.clear();
  }
}
