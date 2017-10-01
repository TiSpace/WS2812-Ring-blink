// https://www.youtube.com/watch?v=AuOnubC_rKo

#include <Adafruit_NeoPixel.h>

#define PIN      6
#define NUMPIXELS 24

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()
{
  pixels.begin();
}
void loop()
{
  for (int i = 0; i < NUMPIXELS; i++)
  {
    pixels.clear();
    pixels.setPixelColor(i, pixels.Color(0, 255, 0));
    pixels.setPixelColor(23 - i, pixels.Color(0, 255, 0));
    if (i < 12)
    {
      pixels.setPixelColor(12 + i, pixels.Color(255, 0, 0));
    }
    else
    {
      pixels.setPixelColor(i - 12, pixels.Color(255, 0, 0));
    }
    pixels.show();
    delay(50);
  }
}
