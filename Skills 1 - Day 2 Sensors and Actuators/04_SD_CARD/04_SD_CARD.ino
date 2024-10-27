#include <SPI.h> // This is the communication protocol 
#include <SD.h> // this is the library that allows you to have access to the SD Card. 

const int chipSelect = 4; // This is the pin that "activates" the SD card

File dataFile; // we have to create some sort of generic file 
String filename = "Data.csv";
String Data = "Entry Number: ";

int loopCount = 1;


void setup() {
  Serial.begin(9600);
  SD.begin(chipSelect);
  SD.remove(filename);
  String Header = "first entry during setup.";
  File dataFile = SD.open(filename, FILE_WRITE);
  if (dataFile)
  {
    dataFile.println(Header);
    dataFile.close();
  }
}

void loop()
{
  Data. concat (loopCount); 
  dataFile = SD.open(filename, FILE_WRITE);
  if (dataFile)
  {
    dataFile.println(Data);
    dataFile.close();
    Serial.println("New line sucessfully written: " + Data);
  }
  loopCount = loopCount + 1;
  Data = "Entry Number: ";
  delay(1000);
}
