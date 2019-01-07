#include <M5Stack.h>
#include <WiFi.h>
#include <ArduinoJson.h>
#include <AzureIotHub.h>
#include <Esp32MQTTClient.h>

// Images to be displayed on LCD.
#define alarm_triggered_img alarm_trig
#define alarm_warning_img alarm_warn
#define PicArray extern unsigned char

// Pins used by the ultrasonic sensor.
#define TRIGGER_PIN 2
#define ECHO_PIN 5

// Choose frequencies (i.e. notes) for the alarm.
#define NOTE_1 300
#define NOTE_2 350


// Interrupt Button Pins.
portMUX_TYPE mux = portMUX_INITIALIZER_UNLOCKED;
const byte interrupt_pin_button_c = 37;
const byte interrupt_pin_button_b = 38;
const byte interrupt_pin_button_a = 39;

// Global variables.
bool alarm_is_triggered = false;
bool alarm_is_enabled = false;
static bool has_iot_hub = false;
PicArray alarm_triggered_img[]; 
PicArray alarm_warning_img[];
long ultrasonic_sensor_duration;
int ultrasonic_sensor_distance;
static uint64_t send_interval_ms;
StaticJsonBuffer<200> json_buffer;

// Please input the SSID and password of WiFi.
const char* ssid     = "";
const char* password = "";

// Please input connection string of the form "HostName=<host_name>;DeviceId=<device_id>;SharedAccessKey=<device_key>".
static const char* connection_string = "";

void IRAM_ATTR HandleInterruptStopAlarm() {
  /*
  * Interrupt handler for button press. Stops the alarm ring
  * and resets the alarm to its enabled state.
  */
 
}

void ConnectToWiFi(){
  /*
  * Connects the M5Stack to WiFi using the global variable 
  * credentials ssid and password. The M5Stack LCD is
  * initialized to display "Connecting to wiFi...".
  */
  
}

static void SendConfirmationCallback(IOTHUB_CLIENT_CONFIRMATION_RESULT result) {
  if (result == IOTHUB_CLIENT_CONFIRMATION_OK) {
    Serial.println("Send Confirmation Callback finished.");
  }
}

static int  DeviceMethodCallback(const char *methodName, const unsigned char *payload, int size, unsigned char **response, int *response_size) {
  /*
   * Handles commands from IoT Central. The command "stop" 
   * will stop the triggered alarm and return it to its 
   * enabled state.
  */
  
}

static void DeviceTwinCallback(DEVICE_TWIN_UPDATE_STATE updateState, const unsigned char *payLoad, int size) {
  /*
  * Handles settings updates from IoT Central. The 
  * Enable/Disable toggle will enable or disable the alarm 
  * from operation.
  */

  // Copy the payload containing the message from IoT 
  // central into temp.
 
  // Create an ArduinoJson object to parse the string and set alarm_status as the value of the "Enable/Disable" field.
  
}

void PlayAlarmRing(){
   /*
   * Ring played by the speaker when the alarm is triggered.
   */
   
}

void TurnAlarmRingOff(){
  /*
  * Mutes the alarm ring.
  */

}

int FindSensorDistance(){
  /*
  * Calculatess and returns the distance to the nearest object * within view of the ultrasonic sensor.
  */
     
  // Sets the TRIGGER_PIN on HIGH state for 10 micro seconds.
    
  // Reads the ECHO_PIN and returns the sound wave travel time in microseconds.
 
}

void SendMessageToAzure(char *message, bool has_iot_hub){
  /*
  * The given message string is sent to Azure IoT Central.
  */
 
}

void RunAlarm(){
  
}

void setup() {
  /*
   * Alarm setup code, which is run once at the start of 
   * operation. This section is used to connect the device to 
   * WiFi and IoT Central, and initialize I/O pins on the 
   * M5Stack.
  */
  
}

void loop() {
  /*
  * Alarm running code is looped continuously during device
  * operation.
  */
  
}
