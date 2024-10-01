#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED display dimensions
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

// I2C address for the OLED display
#define OLED_RESET    -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// MQ-135 analog pin
const int mq135Pin = A0;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);

  // Initialize the OLED display
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;); // Loop forever if OLED initialization fails
  }

  // Clear the display buffer
  display.clearDisplay();
  display.setTextSize(2); // Increase text size for better visibility
  display.setTextColor(SSD1306_WHITE);
}

void loop() {
  // Read the analog value from the MQ-135 sensor
  int sensorValue = analogRead(mq135Pin);

  // Simple mapping to get a general air quality level (Approximate conversion)
  int airQualityLevel = map(sensorValue, 0, 1023, 400, 10000); // 400 to 10000

  // Print the air quality level to Serial Monitor (for debugging)
  Serial.print("Air Quality Level: ");
  Serial.println(airQualityLevel);

  // Display the air quality level on the OLED
  display.clearDisplay();

  // Centered title "Air Quality Level"
  display.setTextSize(2); // Set larger text size for title
  display.setCursor(1, 5); // Adjust cursor to center the title
  display.print("AirQuality");
  
  display.setTextSize(2); // Set larger text size for title
  display.setCursor(35, 20); // Move to the next line for "Level"
  display.print("Level");

  // Display the air quality level value in large font
  display.setTextSize(3); // Larger text size for value
  display.setCursor(35, 40); // Adjust cursor for centered value
  display.print(airQualityLevel);

  // Display "ppm" in smaller font beside the value
  display.setTextSize(2); // Smaller text size for "ppm"
  display.setCursor(90, 45); // Position "ppm" beside the air quality level value
  display.print("ppm");

  display.display(); // Update the display

  delay(1000); // Delay for readability
}