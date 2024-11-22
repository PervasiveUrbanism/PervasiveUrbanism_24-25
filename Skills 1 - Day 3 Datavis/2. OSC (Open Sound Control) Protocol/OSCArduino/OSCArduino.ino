
// the library that allows your arduino to go wireless
#include <WiFiS3.h>

// variabe for the status
int status = WL_IDLE_STATUS;

// put in the credits of your wifi (UCL doesn't work, because it has an extra security layer)
char ssid[] = " ";  
char pass[] = " ";

// local port to listen on
unsigned int localPort = 8000;  

//buffer to hold incoming packet , not nessesary
char packetBuffer[256];                 

WiFiUDP Udp;

void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ;  // wait for serial port to connect. Needed for native USB port only
  }

  // check for the WiFi module:
  if (WiFi.status() == WL_NO_MODULE) {
    Serial.println("Communication with WiFi module failed!");
    // don't continue
    while (true)
      ;
  }

  // attempt to connect to WiFi network:
  while (status != WL_CONNECTED) {
    Serial.print("Attempting to connect to SSID: ");
    Serial.println(ssid);
    // Connect to WPA/WPA2 network. Change this line if using open or WEP network:
    status = WiFi.begin(ssid, pass);

    // wait 10 seconds for connection:
    delay(10000);
  }


  Serial.println("\nStarting connection to server...");
  // if you get a connection, report back via serial:
  Udp.begin(localPort);
}

void loop() {


  IPAddress remoteIp = "192.168.1.176";
  unsigned int remotePort = 8000;

  int value = analogRead(A0);

  //char message[] = "Hello from arduino";
  Serial.println(value);


  Udp.beginPacket(remoteIp, remotePort);
  Udp.print(value);
  Udp.endPacket();
}
