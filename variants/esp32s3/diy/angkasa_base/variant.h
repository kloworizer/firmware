#define USE_SX1262

#define LORA_SCK   9
#define LORA_MISO  11
#define LORA_MOSI  10
#define LORA_CS    8
#define LORA_RESET 12
#define LORA_DIO1  14

#define SX126X_CS     LORA_CS
#define SX126X_DIO1   LORA_DIO1
#define SX126X_BUSY   13
#define SX126X_RESET  LORA_RESET

// TXEN/RXEN/DIO2/DIO3 are not wired to the MCU
#define SX126X_DIO2_AS_RF_SWITCH
#define SX126X_DIO3_TCXO_VOLTAGE 1.8
#define TCXO_OPTIONAL          // falls back to crystal if TCXO init fails

#define I2C_SDA 17
#define I2C_SCL 18

#define BUTTON_PIN 0           // DevKit BOOT button
