# Arduino Air Quality Monitor

## What is Air Quality?

  Air quality refers to the condition of the air within our surroundings. Good air quality is crucial for human health, the environment, and overall well-being. Poor air quality, on the other hand, can lead to health issues such as respiratory problems, headaches, and fatigue. It is affected by pollutants such as carbon dioxide (CO2), nitrogen oxides (NOx), ammonia (NH3), smoke, and other harmful gases.

 ## Why Measure Air Quality?
  
  Measuring air quality is important for identifying the levels of pollutants in the environment and ensuring that they are within safe limits. Regular monitoring can help in:

- Assessing indoor air quality.
- Detecting potentially harmful gas concentrations.
- Ensuring proper ventilation in closed spaces.

 ## Understanding PPM Ranges

  The term ppm (parts per million) is a way of expressing very dilute concentrations of substances. Below is a general idea of what different ppm levels represent:

- 400 - 1,000 ppm: Typical range for outdoor air or well-ventilated indoor air. Safe levels.
- 1,000 - 2,000 ppm: Poor air quality; may cause mild discomfort, headaches, and drowsiness.
- 2,000 - 5,000 ppm: High level of CO2 and other pollutants; can cause nausea, dizziness, and affect cognitive performance.
- Above 5,000 ppm: Unsafe air quality; potential risk of severe health effects, especially with prolonged exposure.

 ## Project Overview
  
  This project is designed to build an Air Quality Monitor using an MQ-135 gas sensor for measuring the air quality and an SSD1306 OLED display to show the ppm (parts per million) values. The system is controlled by an Arduino Uno microcontroller, which processes the readings from the sensor and displays the data in real-time.
<img src="https://github.com/user-attachments/assets/8ccaffc3-95ae-485b-9534-d88f9b50141b" alt="Scrot 202124-10-09 035541" style="border:2 solid lightblue;"/>

  ## Requirements
  
  To use this project, you will need:
  
  - **MQ-135 Gas Sensor** : The MQ-135 is a versatile air quality sensor capable of detecting several harmful gases, including CO2, NH3 (ammonia), NOx (nitrogen oxides), benzene, alcohol, and smoke. It provides an analog output that corresponds to the concentration of these gases in the air.
  - **SSD1306 OLED Display (128x64 pixels)** : This is a small monochrome display that uses I2C communication to show the measured air quality values in ppm. It provides a clear and crisp output for easy monitoring.
  - **Arduino Uno** : The Arduino Uno is a microcontroller that reads the data from the MQ-135 sensor, processes it, and sends the information to the OLED display. It acts as the brain of the system, enabling real-time air quality monitoring.

<img src="https://github.com/user-attachments/assets/3c96fd24-61ec-49ca-91d7-30a251879bed" alt="Screenshot 20111124-10-09 035541" width="400" height="300" style="border:2 solid lightblue;"/>

<img src="https://github.com/user-attachments/assets/073b7d60-f118-4310-9101-b748df516c6f" alt="Screenshot 20111124-10-09 035541" width="300" height="300" style="border:2 solid lightblue;"/>

<img src="https://github.com/user-attachments/assets/1a5b0d0e-3d56-4309-b0cb-2a8ec72ce134" alt="Screenshot 20111124-10-09 035541" width="300" height="300" style="border:2 solid lightblue;"/>
    

## Library Installation

1. **Adafruit GFX Library**: Provides graphics support for drawing shapes and text.
2. **Adafruit_SSD1306 (SSD1306 OLED) Library**: Handles communication with the SSD1306 OLED.

### How to Install Libraries

1. Open the **Arduino IDE**.
   
2. Go to **Sketch** > **Include Library** > **Add.ZIP Library...**.
    
3. In the Library Manager, search for and install the following libraries:
   
   - **Adafruit GFX Library** by Adafruit
     
     ```sh
     https://github.com/adafruit/Adafruit-GFX-Library
     
   - **Adafruit_SSD1306 (SSD1306 OLED) Library** by Adafruit
     
     ```sh
     https://github.com/adafruit/Adafruit_SSD1306
    
4. Once all libraries are installed, you can proceed to upload the code to your Arduino.

## How to Connect the Components

**MQ-135 Sensor** :

- **VCC → 5V (Arduino)**
- **GND → GND (Arduino)**
- **AO (Analog Output) → A0 (Arduino)**

**SSD1306 OLED Display** :

- **VCC → 5V (Arduino)**
- **GND → GND (Arduino)**
- **SCL (Clock) → A5 (Arduino)**
- **SDA (Data) → A4 (Arduino)**

 ## Code and Usage
  
  **Once all components are wired correctly and libraries are installed, upload the provided code to the Arduino Uno. The display will show the Air Quality Level in ppm, which is an approximation based on the combined gas concentrations measured by the MQ-135 sensor.**

  **If you would like to calibrate the sensor for more accurate measurements or specific gases, refer to the datasheet of the MQ-135 sensor for details.**

 ## Important Notes
  
  The readings from the MQ-135 are approximations and not specific to **CO2 alone**; they represent a combination of **various gas concentrations**.
  
  Ensure your Arduino and other components are properly connected and powered for optimal performance.

#

  With this project, you can get a basic understanding of air quality monitoring and use it to assess the environment in small indoor spaces.

  Feel free to modify and extend the project based on your needs!

#

  Let me know if you need any changes or additions to this README!

## License

  This project is open-source and free to use under the MIT License.
