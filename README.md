# XIAO_MG24_EEPROM_24LC256

Seeed XIAO MG24からI2CのEEPROM 24LC256を制御するサンプルプログラムです

## 機能
以下のことを行います
- 1バイトデータをアドレス0から書き込んで、読み出す
- 5バイトデータをアドレス1からブロックで書き込み、読み出す

## ハードウェア構成
以下の部品で構成しています
- Seeed Xiao MG24 SENSE
- EEPROM (24LC256)
- ジャンパワイヤー
- プルアップ抵抗(1.5kΩ)x2
- ブレッドボード

## ファイル・フォルダ構成
- mg24_e2peom.ino ; プログラム
- LICENSE         : ライセンス
- README.md       : このファイル


| ファイル名 | 処理内容 | 備考 | ライセンス |
|---------|---------|---------|---------|
| mg24_e2prom.ino | EEPROM書き込み、読み出しサンプルプログラム | | MIT |

### 必要環境
- Seeed Xiao MG24 (SENSE)
- Arduino IDE
- ライブラリ:
  - [I2C_EEPROM](https://github.com/RobTillaart/I2C_EEPROM) 

### 動作確認状況
- https://youtu.be/k8kYMyaQxIk
