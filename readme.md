# ⚡ IoT Light Project – Mortal Kombat Light Effects

---

## 🎮 Overview
Developed as part of the **MIME Club** at **BITS Pilani**, this project creates **interactive wearable light suits** to simulate **Mortal Kombat fight effects**.

Each suit was built from scratch using:

- ✨ **NeoPixel addressable RGB LED light strings**  
- 💡 **EL wires** for additional lighting effects  
- ⚡ **Relays** to control and time the effects

The system synchronizes lighting with **two fight rounds**, giving a **dynamic, live-action Mortal Kombat experience**.

---

## 📹 Project Videos

| 🎬 Video | 📝 Description |
|----------|----------------|
| Video 1 | **Round 1:** Demonstrates the first fight sequence with full suit lighting effects |
| Video 2 | **Round 2:** Demonstrates the second fight sequence, showcasing advanced effects and relay timing |

---

## 🖥 Tinkercad Design

The suit and light setup can also be viewed in Tinkercad here:

[Tinkercad Design Link](https://www.tinkercad.com/things/eFOdSxEuPkS-surprising-wluff?sharecode=0_hikDN02jQ2v9Wr6MrO2wjA0laTxxwwOkDCDkgj7xY)

> You can open the link to interactively view the 3D design and layout of NeoPixels, EL wires, and relays.

---

## ✨ Hardware Flow Diagram (Simplified)

```
      +---------------------+
      |  Arduino / Microcontroller  |
      +-----------+---------+
                  |
         +--------+--------+
         |                 |
   +-----v-----+     +-----v-----+
   |  NeoPixels |     |  Relays   |
   +-----------+     +-----------+
         |                 |
   Light Suit LEDs     EL Wire Effects
```

- **NeoPixels:** Addressable RGB LEDs on the suit for color animations.  
- **EL wires:** Extra lighting effects controlled via relays.  
- **Relays:** Turn on/off specific EL wire patterns for each round.  
- **Microcontroller:** Reads button inputs and runs pre-programmed sequences for rounds.

---

## ✨ Software / Code Flow

```
Loop:
  Read button input
  If pressed:
    -> Trigger Round 1 sequence
        - Smile / loader animation
        - NeoPixel patterns
        - Relay-controlled EL wire effects
    -> Delay & timing between effects
    -> Trigger Round 2 sequence
        - Advanced patterns & combos
        - NeoPixel + EL wire synchronization
    -> Turn off all lights
```

- Functions in code:
  - `state()` → Controls relays & on/off logic for LEDs & EL wires  
  - `smileinit()` → Sequential light initialization for suits  
  - `smclr()` / `rbclr()` → Clear LEDs  
- Loops & delays create synchronized fight animations

---

## 🎬 Fight Round Sequences

### **Round 1 – Video 1**

| Step | Description | Visual |
|------|-------------|--------|
| 1 | Button pressed → Initialize loader / smile animation | 🔵🔵⚪⚪⚪⚪⚪⚪ |
| 2 | NeoPixels pattern starts | 🔵🔵🔵🔵⚪⚪⚪⚪ |
| 3 | EL wire 1 ON via relay | ⚡⚪⚪⚪⚪⚪⚪⚪ |
| 4 | NeoPixels + EL wires alternate | 🔵⚡🔵⚡🔵⚡⚪⚪ |
| 5 | End of Round → lights off | ⚪⚪⚪⚪⚪⚪⚪⚪ |

> 🔵 = NeoPixel ON  
> ⚡ = EL wire ON  
> ⚪ = OFF

### **Round 2 – Video 2**

| Step | Description | Visual |
|------|-------------|--------|
| 1 | Loader / pre-animation | 🔵🔵🔵⚪⚪⚪⚪⚪ |
| 2 | Full NeoPixel pattern | 🔵🔵🔵🔵🔵🔵🔵🔵 |
| 3 | EL wires 1 & 2 ON | ⚡⚡⚪⚪⚪⚪⚪⚪ |
| 4 | Attack combo sequence | 🔵⚡🔵⚡🔵⚡🔵⚡ |
| 5 | Headlight / special effect | 🔵🔵⚡🔵🔵⚡🔵🔵 |
| 6 | End of Round → lights off | ⚪⚪⚪⚪⚪⚪⚪⚪ |

> 🔵 = NeoPixel ON  
> ⚡ = EL wire ON  
> ⚪ = OFF

---

### ✅ How to Read

- Each **column** represents a segment of the suit (e.g., left arm, right arm, chest, back).  
- Steps follow the **sequence in the Arduino code**, matching the videos.  
- EL wires are controlled via **relays**, NeoPixels via **addressable LED strips**.

---

## 🔑 Key Highlights

- 👕 **Custom wearable suits** with NeoPixel LEDs and EL wires  
- ⏱ **Round-based effects**, synchronized with fight sequences  
- 🔌 **IoT-enabled relay control** for precise timing  
- 🎭 Interactive **wearable lighting for performance art**  
- 📹 Demonstrated in **two rounds** in videos

---

## 🏆 Credits

- Developed as part of the **MIME Club**, **BITS Pilani**  
- Creator: **Tejas Sriganesh**

---

## ⚠️ Notes

- ❌ Hardware setup (NeoPixels, EL wires, relays) is required to run the code.  
- 💡 Demonstrates **creative IoT lighting applications** for live performances.  
- 🔧 Code and videos show the **rounds and animations**, but physical wiring is needed to see effects.

