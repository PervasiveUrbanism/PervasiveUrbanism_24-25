### Communication with External Devices

Your Arduino has several ways of communicating with external devices. The communication protocol you choose depends on the circumstances and the devices you want to connect.

We have already used **serial communication** in the sketches above. Let's also look at **I2C** and **SPI** communication.

For more information, you can read an overview of common communication peripherals here:  
[Common Communication Peripherals](https://maker.pro/arduino/tutorial/common-communication-peripherals-on-the-arduino-uart-i2c-and-spi)

---

### Serial Communication (UART)

**Serial Communication** is also called **UART** (Universal Asynchronous Reception and Transmission). This is the most basic communication method, and it communicates with the computer over USB. Two pins are assigned to this protocol, called **TX** and **RX**, which are hardwired to ports 0 and 1. The board has two LEDs that blink when there is activity over these ports.

**Hardware Serial:** The Arduino Uno has one hardware serial interface. However, some boards like the **Arduino Giga** have four.

If you use hardware serial to communicate with your computer, you can't use these pins for anything else at the same time.

There are two alternatives:

1. Buy a new board with multiple hardware serial interfaces (e.g., Arduino Mega has three).
2. Use the **software serial** library to emulate serial communication on any pins you like.  
   [SoftwareSerial Library](https://www.arduino.cc/en/Reference/softwareSerial)

You can refer to more serial communication commands here:  
[Serial Communication Reference](https://www.arduino.cc/reference/en/language/functions/communication/serial/)

---

### I2C Protocol

The **I2C** protocol allows you to connect multiple sensors to the same set of pins. Theoretically, you can connect up to 128 sensors to just three pins and the same set of wires. This protocol isn't particularly fast but can be useful when you need to connect many devices.

I2C works with a **Master-Slave** hierarchy, where each slave device has a unique address.

To use the I2C protocol, you can include the **Wire** library:  
[Wire Library](https://www.arduino.cc/en/reference/wire)

Qwiic or STEMMA are both names for a type of connector developed by [SparkFun](https://www.sparkfun.com/qwiic) and [Adafruit](https://www.adafruit.com/category/1005) respectively, which bundles the I2C pins of a development board and breakout modules. What this means is that if you have a development board (such as for example the Arduino UNO R4 WiFi) and a breakout module, and both have a Qwiic or STEMMA connector, you can hook them up together and with absolutely minimal wiring you can quickly create multi-faceted projects.

---

### SPI Protocol

**Serial Peripheral Interface (SPI)** is the default protocol for communication with SD cards or display modules. SPI is fast but can only connect up to four devices. More wires are required for this protocol compared to I2C.

To use the SPI protocol, refer to the **SPI** library and define four pins: three shared among all devices and one specific to each device.

On the **Arduino Uno**, digital pins 11, 12, and 13 are used for SPI communication. These pins are also found on the ICSP header.

Refer to the **SPI** library here:  
[SPI Library](https://www.arduino.cc/en/Reference/SPI)

---

### Groove System

Like SparkFun and Adafruit, Seeed Studio has its own system called [Grove](https://wiki.seeedstudio.com/Grove_System/), which is focused solely on the connector. It does not come with a dedicated communication protocol.

>[!Note]  
> The systems are interchangeable, meaning you can connect a Grove sensor to your Arduino while also using a sensor from SparkFun at the same time. You can also purchase jumper wires with a Grove or Stemma connector on one end and standard pins on the other, so there's no need to source all your components from a single place.