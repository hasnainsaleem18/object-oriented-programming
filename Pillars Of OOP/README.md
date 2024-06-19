# Object-Oriented Programming Assignments

## Task 1: Zodiac and Person Composition

### Description
Implement classes using composition:
- **Zodiac Class**:
  - Variables: `name` (string), `description` (string).
  - Methods: `generateZodiacData(day, month)`, `displayPersonality()`.
- **DateOfBirth Class**:
  - Variables: `day` (integer), `month` (integer), `year` (integer), `zodiac` (Zodiac object).
- **Person Class**:
  - Variables: `name` (string), `dateOfBirth` (DateOfBirth object).
  - Methods: `displayZodiacInfo()`.

### Execution
- Create an object of Person and initialize it in `main`.
- Use composition to indirectly call `displayPersonality()` method through `displayZodiacInfo()`.

---

## Task 2: UAV Variants and Multi-Purpose UAV

### Description
Implement inheritance for UAV models:
- **UAV Class**:
  - Methods: `takeOff()`, `land()`.
- **SurveillanceUAV Class**:
  - Attributes: `name` (string), `weight` (double), `maxAltitude` (double), `zoomLevel` (int), `recordingCapacity` (double), `isNightVision` (bool).
  - Methods: `captureImage()`, `recordVideo()`.
- **CargoDeliveryUAV Class**:
  - Attributes: `name` (string), `weight` (double), `maxAltitude` (double), `cargoArea` (double).
  - Methods: `deliverCargo()`.
- **MultiPurposeUAV Class**:
  - Attributes: `name` (string), `weight` (double), `maxAltitude` (double), `solarPanelEfficiency` (double).
  - Methods: `deliverCargoWithSurveillance()`.

### Execution
- Create objects of SurveillanceUAV, CargoDeliveryUAV, and MultiPurposeUAV in `main`.
- Call respective methods (`display()`, `deliverCargo()`, `recordVideo()`, `deliverCargoWithSurveillance()`).

---

## Task 3: Polymorphic RPG Characters

### Description
Implement polymorphism for RPG character types:
- **Character Class**:
  - Variables: `name` (string).
  - Methods: `attack()` (virtual).
- **Warrior Class**:
  - Attributes: `strength` (int).
  - Methods: Override `attack()` to display "Attacks with strength".
- **Mage Class**:
  - Attributes: `intelligence` (int).
  - Methods: Override `attack()` to display "Attacks with intelligence".
- **Thief Class**:
  - Attributes: `agility` (int).
  - Methods: Override `attack()` to display "Attacks with agility".

### Execution
- Create instances of Warrior, Mage, and Thief in `main`.
- Call `attack()` method on each instance to display their unique attack messages along with their name.

---

