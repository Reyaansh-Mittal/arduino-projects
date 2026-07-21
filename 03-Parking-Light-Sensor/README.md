# 🚗 Arduino Parking Sensor

A simple Arduino-based parking assistance system that measures the distance to nearby objects using an HC-SR04 ultrasonic sensor. The system provides visual feedback using LEDs and audible feedback using a buzzer, where the beep frequency increases as the object gets closer.

---

## 📌 Features

* Real-time distance measurement
* Green LED for safe distance
* Blue LED for caution
* Red LED for danger
* Variable-speed buzzer using `millis()` (non-blocking timing)
* Distance monitoring through the Serial Monitor

---

## 🛠️ Components Used

| Component | Quantity |
|-----------|---------:|
| Arduino Uno R4 | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| LEDs (Red, Blue, Green) | 3 |
| 220Ω Resistors | 3 |
| Piezo Buzzer | 1 |
| Breadboard | 1 |
| Jumper Wires | Several |

---

## 🔌 Circuit Connections

### HC-SR04

| Sensor Pin | Arduino Pin |
|------------|------------:|
| VCC | 5V |
| GND | GND |
| TRIG | D9 |
| ECHO | D10 |

### LEDs

| LED | Arduino Pin |
|-----|------------:|
| Green | D5 |
| Blue | D4 |
| Red | D3 |

### Buzzer

| Buzzer Pin | Arduino Pin |
|------------|------------:|
| Positive | D8 |
| Negative | GND |

---

## 🚦 System Behaviour

| Distance | LED | Buzzer |
|----------|-----|--------|
| > 30 cm | 🟢 Green | Off |
| 11–30 cm | 🔵 Blue | Slow Beep |
| 6–10 cm | 🔴 Red | Fast Beep |
| ≤ 5 cm | 🔴 Red | Continuous Tone |

---

## 💻 How It Works

1. The HC-SR04 measures the distance to the nearest object.
2. The Arduino calculates the distance using the echo pulse duration.
3. LEDs indicate whether the object is at a safe, caution, or dangerous distance.
4. The buzzer frequency changes according to the measured distance.
5. `millis()` is used instead of `delay()` so the Arduino continues measuring distance while controlling the buzzer.

---

## 📚 Concepts Learned

* Digital Input and Output
* Ultrasonic Distance Measurement
* Pulse Timing with `pulseIn()`
* Non-blocking programming using `millis()`
* Conditional Logic
* Breadboard Wiring
* Hardware Debugging

---

## ▶️ Getting Started

1. Connect the components according to the wiring table.
2. Upload the Arduino sketch.
3. Open the Serial Monitor (9600 baud).
4. Move an object in front of the sensor.
5. Observe the LEDs and buzzer response.

---

## 📄 License

This project is open-source and available under the MIT License.
