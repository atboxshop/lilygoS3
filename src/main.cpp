#include <Adafruit_NeoPixel.h>
#include <TFT_eSPI.h>
 
// the data pin for the NeoPixels
int neoPixelPin = 48;

// How many NeoPixels we will be using, charge accordingly
int numPixels = 1;

// Instatiate the NeoPixel from the ibrary
Adafruit_NeoPixel strip = Adafruit_NeoPixel(numPixels, neoPixelPin, NEO_GRB + NEO_KHZ800);

// Color set #1
int r1 = 255;
int g1 = 0;
int b1 = 0;

// Color set #2
int r2 = 0;
int g2 = 255;
int b2 = 0;

// Color set #3
int r3 = 0;
int g3 = 0;
int b3 = 255;

// variables to control brightness levels
int brightness = 50; 

// a pre-processor macro
#define DELAY_TIME (120)

// Turns all the NeoPixels off
void allOff() {
  strip.clear();
  strip.show();
}

void setup() {
  strip.begin();  // initialize the strip
  strip.setBrightness(brightness);
  strip.show();   // make sure it is visible
  strip.clear();  // Initialize all pixels to 'off'
}

void loop() {
  // Check to see if switch is on/off and call the proper function
  allOff();
  delay(DELAY_TIME);
  strip.setPixelColor(0, r1, g1, b1 );
  strip.show();
  delay(DELAY_TIME);
  allOff();
  strip.setPixelColor(0, r2, g2, b2 );
  strip.show();
  delay(DELAY_TIME);
  allOff();
  strip.setPixelColor(0, r3, g3, b3 );
  strip.show();
  // delay for the purposes of debouncing the switch
  delay(DELAY_TIME);
}
