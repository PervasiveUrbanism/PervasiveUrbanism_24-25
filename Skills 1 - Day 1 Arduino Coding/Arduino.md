

![](Arduino_Logo.svg.png)
# Introduction to Arduino
## What is Arduino, where does it come from?
Arduino is an open-source electronics platform that allows users to program microcontrollers. It was developed in 2003 at the Interaction Design Institute Ivrea (IDII) in Ivrea, Italy by Massimo Banzi. From the outset, it has been developed as an open-source language that allows easy programming of low-cost microprocessors. This proved to be remarkably successful, and Arduino managed to establish itself as one of the main languages to program microprocessors and for easy prototyping.

![alt text](images\BarArduino.jpg)

Above the bar “Arduino” in Ivrea where the founders used to hang out. 

![alt text](images\FirstArduino.jpg)

The image on the shows the first Arduino. 

You can visit the webpage here:  **[Arduino Website](https://www.arduino.cc/)**

## What can it do and what not?
Arduino enables the creation of prototypes for microprocessors, allowing the development of various devices such as sensors, robots, and smart IoT devices. However, Arduino is different from computers like the Raspberry Pi. While it is short on processing power and has no operating system, it is more energy-efficient, compact, and easier to deal with (and also cheaper!).

Ardunio has open the world of microprocessoprs to the wider public:

1. Arduino programming is not geared toward professional production. It employs a simplified language designed for prototyping. Imagine this this language as an *extra layer* that sits between you and the microprocessor.  
2. Most, but not every microprocessor can be programmed using Arduino. The *extra layer* must exist and has to be intalled separatly.
3. The break though is that, the same -simplified- script can work on different microprocessors (with minor adaptations!).


## Language

The Arduino project consists of two parts: the language and the hardware. Both are linked together, as the language can only work on hardware that "knows" Arduino. The language is based on the **C Language**, a low-level language with a few simplifications.

The programming environment is called **Arduino IDE**. It translates the code into the specific language of the microprocessor, making Arduino accessible and successful.

> [!NOTE]
> For each new microprocessor, you need to configure the IDE accordingly. If it's not already available, you will need to download and install the correct configuration.


## The Ecosytem

Arduino is an open-source project. This transparency means anyone can use it without restrictions. Many companies now produce Arduino-compatible boards. Here are a few examples:

- [Adafruit](https://www.adafruit.com/)
- [SparkFun](https://www.sparkfun.com/)
- [Seeed Studio](https://www.seeedstudio.com/)

---
# The Board

There are numerous types of boards available. Depending on your project, you might find a board tailored to your needs. However, the **Arduino Uno** is a general-purpose entry board suitable for a wide variety of projects.

- [Arduino Uno Products](https://www.arduino.cc/en/Main/Products)
- [Tour of the Arduino Uno Board](https://www.hackerearth.com/blog/developers/a-tour-of-the-arduino-uno-board/)
- [Full Pinout Diagram](https://www.circuito.io/blog/arduino-uno-pinout/)
- [Arduino Uno Schematic](https://www.arduino.cc/en/uploads/Main/arduino-uno-schematic.pdf)

---

# Coding in Arduino (C Language)

**000 - Anatomy**

- Libraries
- Declare variables
- `Void setup()`
- `Void loop()`
- Functions

Refer to the [Arduino Reference Page](https://www.arduino.cc/reference/en/) for more information.

Arduino compiles the code in the IDE as follows:

---

### 001 - Basic LED Blink Sketch

Anatomy of a sketch, basic intro, commands, setup, and loop:

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
```

---

### 002 - Basic LED Blink Sketch with Variable and Feedback over the Serial Monitor

Introduction of a variable and output over the serial monitor. We’ll declare our first variable, and it’s worth looking at typical datatypes in C.

1 byte is 8 bits (00000001)

- 1 is `00000001`
- 2 is `00000010`
- ...
- 256 is `11111111` (the largest possible value in byte)

The Arduino Rev 3 has different types of memory:

- **EEPROM:** 1KB (permanent memory)
- **RAM:** 2KB (temporary data or runtime data such as variables)
- **FLASH:** 32KB (where the code is saved)

Common datatypes include `boolean`, `char`, `int`, and `float`.

```cpp
int pause = 50;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(pause);
  digitalWrite(LED_BUILTIN, LOW);
  delay(pause);
  Serial.print("The delay is: "); 
  Serial.print(pause);
  Serial.println("ms");
}
```

---

### 003 - Blink Sketch with a Function

Introduction of a simple function to keep the code organized, shorter, and modular:

```cpp
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  flash(50, LED_BUILTIN);
  flash(500, LED_BUILTIN);
}

void flash(int pause, int ledNumber) {
  digitalWrite(ledNumber, HIGH);
  delay(pause);
  digitalWrite(ledNumber, LOW);
  delay(pause);
  Serial.print("The delay is: "); 
  Serial.print(pause);
  Serial.println("ms");
}
```

---

### 004 - Control Structure with “if”

An `if` control structure with a simple conditional statement:

```cpp
bool Fast = false;

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Fast == true) {
    flash(50, LED_BUILTIN);
  } else {
    flash(400, LED_BUILTIN);
  }
}

void flash(int period, int led) {
  digitalWrite(led, HIGH);
  delay(period);
  digitalWrite(led, LOW);
  delay(period);
  Serial.print("The delay is: ");
  Serial.println(period);
}
```

---

### 005 - Iterations with the "for" Loop

A simple **for** loop example:

```cpp
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i = i + 1) {
    Serial.print("Loop Nr.");
    Serial.print(i);
    Serial.print("\t");
    flash(20, LED_BUILTIN);
  }
}

void flash(int period, int led) {
  digitalWrite(led, HIGH);
  delay(period);
  digitalWrite(led, LOW);
  delay(period);
  Serial.print("The delay is: ");
  Serial.println(period);
}
```

---

### 006 - For Loop with Array

Demonstrating array syntax and how to call a number from an array:

```cpp
int timedelay[] = {200, 40, 50, 500, 70};

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i = i + 1) {
    Serial.print("Loop Nr.");
    Serial.print(i);
    Serial.print("\t");
    Serial.print("Number from array: ");
    Serial.print(timedelay[i]);
    Serial.print("\t");
    flash(timedelay[i], LED_BUILTIN);
  }
}

void flash(int period, int led) {
  digitalWrite(led, HIGH);
  delay(period);
  digitalWrite(led, LOW);
  delay(period);
  Serial.print("The delay is: ");
  Serial.println(period);
}
```

---

### 007 - Communication via the Serial Monitor

Example showing how to control an LED via the serial monitor:

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char letter = Serial.read();
    if (letter == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED is on!");
    }
    else if (letter == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED is OFF!");
    }
  }
}
```

---

### 008 - Debugging

Using the serial monitor to debug the LED state:

```cpp
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    char letter = Serial.read();
    if (letter == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED is on!");
    }
    else if (letter == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED is OFF!");
    }
    if (digitalRead(LED_BUILTIN) == LOW) {
      Serial.println("The LED is really OFF");
    }
    else if (digitalRead(LED_BUILTIN) == HIGH) {
      Serial.println("The LED is really ON");
    }
  }
}
```

---

### 009 - Messages in the Serial Interface

Sending and receiving messages via the serial monitor:

```cpp
void setup() {
  Serial.begin(9600);
}

void loop() {
  String message = "";
  if (Serial.available() > 0) {
    while (Serial.available() > 0) {
      message = message + char(Serial.read());
      delay(250);
    }
    Serial.println(message);
  }
}
```

---

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

---

### SPI Protocol

**Serial Peripheral Interface (SPI)** is the default protocol for communication with SD cards or display modules. SPI is fast but can only connect up to four devices. More wires are required for this protocol compared to I2C.

To use the SPI protocol, refer to the **SPI** library and define four pins: three shared among all devices and one specific to each device.

On the **Arduino Uno**, digital pins 11, 12, and 13 are used for SPI communication. These pins are also found on the ICSP header.

Refer to the **SPI** library here:  
[SPI Library](https://www.arduino.cc/en/Reference/SPI)


