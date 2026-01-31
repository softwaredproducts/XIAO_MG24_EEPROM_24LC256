#include <Wire.h>
#include <I2C_eeprom.h>

#define EEPROM_ADDR 0x50   // if A0-A2 connects to GND

I2C_eeprom eeprom(EEPROM_ADDR, I2C_DEVICESIZE_24LC256);

void setup() {
  Serial.begin(115200);
  Wire.begin();  // XIAO MG24 I2C Init

  Serial.println("EEPROM test start");

  // test1 1byte write/read
  // 1byte write at address 0x0
  uint16_t addr = 0x0000;
  byte writedata= 0xFF;
  eeprom.writeByte(addr, writedata);  // Comment out and install again if you want to check if data is saved.
  delay(10);
  // 1byte read
  addr          = 0x0000;
  byte readdata = 0x0;
  readdata = eeprom.readByte(addr);
  Serial.print("Read: 0x");
  Serial.println(readdata, HEX);

  // test2 block write/read
  // 5 bytes write from address 0x1
  addr          = 0x0001;
  byte writedata2[] = {0x11,0x22,0x33,0x44,0x55};
  eeprom.writeBlock(addr,writedata2,sizeof(writedata2)); // Comment out and install again if you want to check if data is saved.
  delay(10);
  // 5byte read from address 0x1
  addr          = 0x0001;
  byte readdata2[sizeof(writedata2)];
  readdata = eeprom.readBlock(addr,readdata2,sizeof(readdata2));
  for(int i=0;i < sizeof(readdata2);i++){
    Serial.print("Read: 0x");
    Serial.println(readdata2[i], HEX);
  }

}

void loop() {}