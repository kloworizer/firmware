#ifndef VARIANT_ESP32C3_SUPER_MINI
#define VARIANT_ESP32C3_SUPER_MINI

#ifdef __cplusplus
extern "C" {
#endif 

// 1. I2C & OLED (SDA di Pin 1, SCL di Pin 0)
#define WIRE_INTERFACES_COUNT (1)
#define I2C_SDA (1)
#define I2C_SCL (0)
#define USE_SSD1306
#define OLED_SDA I2C_SDA
#define OLED_SCL I2C_SCL
#define SSD1306_ADDRESS 0x3C

// 2. Buzzer - Menggunakan Pin 21 (Bekas GPS RX)
#define PIN_BUZZER (21)
#define BUZZER_STATE HIGH  // TMB12A03 adalah Active Buzzer

// 3. GPS - hanya RX di Pin 5 (RX-only: tidak ada pin sisa untuk TX)
//    PENTING: GPS_TX_PIN harus -1, bukan 0. Kalau tx_gpio = 0 maka
//    Serial1.begin() akan mengikat UART TX ke GPIO0 = I2C_SCL dan OLED mati.
#define GPS_RX_PIN (5)
#define GPS_TX_PIN (-1)
#define GPS_BAUDRATE 9600 // fixed baud: tanpa TX, probe tidak bisa ganti baudrate

// 4. Button & Rotary Encoder (Pin 2 & 4)
#define BUTTON_PIN (10) 
#define ROTARY_A (2)
#define ROTARY_B (4)

// 5. LoRa (SPI Utama)
#define USE_RF95
#define LORA_DIO0 (3)
#define LORA_RESET (6)
#define LORA_DIO1 RADIOLIB_NC
#define LORA_SCK (20)
#define LORA_MISO (7)
#define LORA_MOSI (8)
#define LORA_CS (9)

// Pastikan Pin 2 & 4 tidak bentrok dengan fungsi LoRa
#undef LORA_RXEN
#undef LORA_BUSY

#ifdef __cplusplus
}
#endif
#endif