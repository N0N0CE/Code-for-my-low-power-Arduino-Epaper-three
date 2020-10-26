/*
 * Epaper shield/Arduino
 * 
 * VCC/D2
 * GND/GND
 * MISO/D12(MISO)
 * MOSI/D11(MOSI)
 * SLCK/D13(SCK)
 * EPD_CS/D10
 * EDP_DC/D9
 * EDP_RST/D8
 * EPD_BUSY/D7
 * SPIRAM_CS/D5
 * SD_CS/D6
 */

// 'grass', 56x384px
const unsigned char grass [] PROGMEM = {
  0x00, 0x00, 0x7e, 0xf8, 0x3f, 0xff, 0xff, 0x00, 0x03, 0xfd, 0xbf, 0x3f, 0xff, 0xff, 0x00, 0x1f, 
  0xf3, 0x7f, 0x9f, 0xff, 0xff, 0x00, 0x3f, 0xe2, 0xff, 0xcf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 
  0xe7, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x05, 0xe0, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfb, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x1d, 0xe7, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x8f, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x02, 0x1f, 0xff, 0x00, 0x00, 0x08, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 
  0x7f, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x01, 0xff, 0x00, 0x3f, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x00, 
  0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x07, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0x83, 0xff, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xc1, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0xff, 0x00, 0x13, 
  0xc7, 0xc3, 0xff, 0xf8, 0x7f, 0x00, 0x07, 0x00, 0x01, 0xff, 0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 
  0xe7, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xcf, 0x00, 0x00, 0x03, 0x00, 0x3f, 0xff, 
  0xef, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf7, 0x00, 0x00, 0x00, 0x03, 0x83, 0xff, 0xfb, 0x00, 
  0x07, 0x00, 0x27, 0xc7, 0xff, 0xfd, 0x00, 0x00, 0xf3, 0xef, 0x07, 0xff, 0xff, 0x00, 0x00, 0x07, 
  0x80, 0x33, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0xf9, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x07, 0xe0, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0e, 0xfc, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfb, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xe7, 0xff, 0x00, 0x00, 0x0f, 0xe0, 0x0f, 0x8f, 0xff, 0x00, 0x00, 
  0x3f, 0xfc, 0x06, 0x3f, 0xff, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x6f, 0xff, 0x00, 0x00, 0x3f, 0xff, 
  0xc0, 0x3f, 0xff, 0x00, 0x70, 0x17, 0xfe, 0x00, 0x7f, 0xff, 0x01, 0x7c, 0x07, 0x80, 0x00, 0x3f, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xcf, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xe7, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7b, 0xff, 0x00, 0x81, 0x80, 
  0x00, 0x00, 0x0d, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0xff, 0x00, 0x08, 0x00, 0x3f, 0xff, 
  0xff, 0x7f, 0x00, 0x00, 0x07, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x1f, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xfa, 0xcf, 0xff, 0xff, 0xff, 0x00, 0x03, 0xfc, 0xaf, 0xff, 0xff, 0xff, 0x00, 0x0f, 
  0xf9, 0x77, 0xff, 0xef, 0xff, 0x00, 0x3f, 0xe2, 0xf7, 0xff, 0xdf, 0xff, 0x00, 0x00, 0xc1, 0xf8, 
  0xff, 0xdf, 0xff, 0x00, 0x00, 0x03, 0xe1, 0xff, 0xbf, 0xff, 0x00, 0x00, 0x00, 0x19, 0xff, 0x7f, 
  0xff, 0x00, 0x00, 0x00, 0x77, 0xfe, 0x7f, 0xff, 0x00, 0x00, 0x00, 0xcf, 0xfe, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x1f, 0xfd, 0xff, 0xff, 0x00, 0x00, 0xf8, 0x1f, 0xf9, 0xff, 0xff, 0x00, 0x00, 0x30, 
  0x1f, 0xc3, 0xff, 0xff, 0x00, 0x00, 0x01, 0x0f, 0x27, 0xff, 0xff, 0x00, 0x00, 0x03, 0xc4, 0x67, 
  0xff, 0xff, 0x00, 0x00, 0x03, 0xc1, 0xcf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x9f, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x39, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7c, 0x3f, 0xff, 0xff, 0x00, 0x00, 
  0x3c, 0x3c, 0x7f, 0xff, 0xff, 0x00, 0x06, 0x00, 0x18, 0x7f, 0xff, 0xff, 0x00, 0xc0, 0x00, 0x01, 
  0xbf, 0xff, 0xff, 0x01, 0x80, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1e, 0x03, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0xff, 0x03, 0xff, 0xff, 0xff, 0x00, 0x07, 0xfe, 0x00, 0xfd, 0xff, 0xff, 0x00, 
  0x1f, 0xfc, 0x18, 0xfb, 0xff, 0xff, 0x00, 0x07, 0xf0, 0x30, 0xf7, 0xff, 0xff, 0x00, 0x00, 0xe0, 
  0x06, 0xe7, 0xdf, 0xff, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x3e, 0x1e, 
  0x7f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x38, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x53, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xc7, 0xff, 0xff, 0x00, 0x00, 0x3c, 0x01, 0x0f, 0xff, 0xff, 0x00, 0x00, 
  0xfe, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0x8f, 0xff, 
  0xff, 0x00, 0x00, 0x01, 0xfe, 0xc7, 0xff, 0xff, 0x00, 0x00, 0xff, 0xfe, 0xf3, 0xff, 0xff, 0x00, 
  0x01, 0xff, 0xfd, 0xf9, 0xff, 0xff, 0x00, 0x00, 0x03, 0xf9, 0xfc, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0xfb, 0xfe, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x23, 0xff, 0x7f, 0xff, 0x00, 0x00, 0x0e, 0x03, 0xff, 
  0xbf, 0xff, 0x00, 0x03, 0x07, 0x87, 0xff, 0xff, 0xff, 0x00, 0x07, 0x83, 0x03, 0xff, 0xff, 0xff, 
  0x00, 0x07, 0xb0, 0xcf, 0xff, 0xff, 0xff, 0x00, 0x01, 0xd0, 0x9f, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x1f, 0xdf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xbf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 
  0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x5c, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x21, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x43, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 
  0xf1, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xf8, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xfc, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x7f, 0xfe, 0x7f, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x3f, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xff, 0x9f, 0xff, 0xff, 0x00, 0x00, 0x7f, 0xff, 0xdf, 0xff, 0xff, 0x00, 0x00, 
  0x1f, 0xff, 0xef, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xef, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x9f, 0xdf, 0xff, 0xff, 0xff, 0x00, 0x00, 0xdf, 0xbf, 0xbf, 0xff, 
  0xff, 0x00, 0x00, 0x9e, 0x7f, 0x7f, 0xff, 0xff, 0x00, 0x02, 0x1c, 0xfe, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x61, 0xf9, 0xff, 0xff, 0xff, 0x00, 0x00, 0x03, 0xf3, 0xff, 0xff, 0xff, 0x00, 0x00, 0x07, 
  0x87, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x33, 0x01, 0x7f, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x02, 0x7f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x71, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0xe0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x03, 0x84, 0xff, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x7f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1f, 0x7f, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x3f, 0xbf, 0xff, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xbf, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x03, 0xdf, 0xff, 0xff, 0xff, 0x00, 0x00, 0x71, 0xff, 0xff, 0xff, 0xff, 0x00, 0x02, 0x3e, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0x09, 0x8f, 0xff, 0xff, 0xff, 0xff, 0x00, 0x0d, 0xb3, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x0e, 0xdd, 0xcf, 0xff, 0xff, 0xff, 0x00, 0x06, 0xdf, 0x97, 0xff, 0xff, 0xff, 
  0x00, 0x03, 0x6f, 0x2f, 0xff, 0xff, 0xff, 0x00, 0xc5, 0xec, 0x4f, 0xff, 0xff, 0xff, 0x00, 0xc3, 
  0xf8, 0x9f, 0xff, 0xff, 0xff, 0x00, 0x03, 0xe1, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x02, 0x00, 0xff, 
  0x9f, 0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x03, 0xfc, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x07, 0xf9, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xe3, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x3f, 0x87, 0xff, 0xff, 0xff, 0x00, 0x00, 0x18, 0x19, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x67, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0x8f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x04, 0x3f, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x8b, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0xcb, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x45, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x37, 0xdf, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x3b, 0xbf, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1c, 0x7f, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x0c, 0x7f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x01, 0xff, 0xef, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xdf, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x7f, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3e, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x08, 0x3c, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x10, 0x11, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0x83, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x02, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x33, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x79, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0xdd, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3e, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0e, 0xff, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x03, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0xfe, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x01, 0x7f, 0x9f, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x4d, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3b, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x63, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x67, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0x8f, 0xdf, 0xff, 0xff, 
  0x00, 0x00, 0x01, 0x1f, 0xbf, 0xff, 0xff, 0x00, 0x00, 0x02, 0x3f, 0x7f, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x38, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x1f, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xfd, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x7f, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xf3, 0xff, 0xff, 0x00, 0x00, 0x01, 
  0xff, 0xe7, 0xff, 0xff, 0x00, 0x00, 0x01, 0xff, 0xe7, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xcf, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0x8f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x1f, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x3e, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1c, 0x3f, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x10, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 
  0xbf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0x7f, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x01, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x80, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x01, 0xf8, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x03, 0xf8, 0x3f, 
  0xff, 0xff, 0x00, 0x00, 0x03, 0xf8, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x06, 0xfb, 0x1f, 0xff, 0xff, 
  0x00, 0x00, 0x07, 0xf3, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x01, 0xf3, 0x9f, 0xff, 0xff, 0x00, 0x00, 
  0x08, 0xe7, 0x8f, 0xff, 0xff, 0x00, 0x00, 0x03, 0x67, 0xcf, 0xff, 0xff, 0x00, 0x00, 0x07, 0xc7, 
  0xe7, 0xff, 0xff, 0x00, 0x00, 0x03, 0x8f, 0xe3, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0xe7, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x0f, 0xc3, 0xff, 0xfb, 0x00, 0x00, 0x00, 0x0f, 0xc3, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x07, 0xa1, 0xff, 0xf7, 0x00, 0x00, 0x00, 0x03, 0x2d, 0xff, 0xe7, 0x00, 0x00, 0x00, 
  0x00, 0x4d, 0xff, 0xef, 0x00, 0x00, 0x00, 0x00, 0x5e, 0xff, 0xcf, 0x00, 0x00, 0x00, 0x10, 0x1e, 
  0xff, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x17, 0xff, 0x9f, 0x00, 0x00, 0x00, 0x01, 0x07, 0xff, 0x3f, 
  0x00, 0x00, 0x00, 0x01, 0x0f, 0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfe, 0x7f, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0xfc, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x01, 0xf8, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x70, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x8e, 0x03, 0xff, 0x00, 0x00, 0x00, 0x01, 0xc7, 0x81, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0xe3, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xf2, 0x0c, 0x3f, 0x00, 0x00, 0x00, 
  0x00, 0x78, 0x0f, 0x1f, 0x00, 0x00, 0x00, 0x03, 0x18, 0x1f, 0xc7, 0x00, 0x00, 0x00, 0x07, 0x20, 
  0x3f, 0xe3, 0x00, 0x00, 0x00, 0x07, 0x80, 0x3f, 0xf9, 0x00, 0x00, 0x00, 0x1f, 0x80, 0x7f, 0xfc, 
  0x00, 0x00, 0x00, 0x0e, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x07, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x03, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0x8f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x21, 0xcf, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x19, 0xc7, 0xff, 0xff, 0x00, 0x00, 0x00, 0x09, 0xe3, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x00, 0xf3, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xff, 0xff, 0x00, 0x00, 
  0x07, 0xf0, 0x39, 0xff, 0xff, 0x00, 0x04, 0x03, 0xf6, 0x10, 0xff, 0xff, 0x00, 0x4e, 0x03, 0xfb, 
  0x04, 0xff, 0xff, 0x01, 0xef, 0x03, 0xff, 0x22, 0xff, 0xff, 0x00, 0xef, 0x81, 0xff, 0xa8, 0x7f, 
  0xff, 0x00, 0x7f, 0x81, 0xff, 0x8e, 0x7f, 0xff, 0x00, 0x3f, 0xa0, 0xff, 0xdf, 0x3f, 0xff, 0x00, 
  0x1f, 0x70, 0xff, 0x9f, 0xbf, 0xff, 0x00, 0x07, 0x70, 0xff, 0x9f, 0xdf, 0xff, 0x70, 0x00, 0x78, 
  0xff, 0x3f, 0xdf, 0xff, 0x00, 0x00, 0x00, 0x7f, 0x3f, 0xef, 0xff, 0x00, 0x00, 0x0c, 0x7e, 0x7f, 
  0xef, 0xff, 0x00, 0x00, 0x0c, 0x3e, 0x7f, 0xf7, 0xff, 0x00, 0x00, 0x1a, 0x3c, 0x7f, 0xf7, 0xff, 
  0x00, 0x00, 0x03, 0x3c, 0xff, 0xff, 0xff, 0x00, 0x00, 0x03, 0x38, 0xff, 0xfb, 0xff, 0x00, 0x00, 
  0x01, 0x91, 0xff, 0xfb, 0xff, 0x00, 0x00, 0x00, 0x91, 0xff, 0xe7, 0xff, 0xd0, 0x02, 0x00, 0x03, 
  0xff, 0x1f, 0xff, 0xf8, 0x03, 0x00, 0x01, 0xc0, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xfd, 0xff, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfb, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xf3, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0f, 0xff, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x07, 0xff, 0x00, 0x3f, 0x00, 0xff, 0x80, 0x01, 0xff, 
  0x00, 0x3e, 0x01, 0xff, 0xf0, 0x00, 0xff, 0x80, 0x18, 0x01, 0xff, 0xfc, 0x00, 0x7f, 0xc0, 0x00, 
  0x03, 0xff, 0xfc, 0x01, 0x9f, 0x00, 0x00, 0x07, 0xff, 0xf0, 0xe0, 0xcf, 0x02, 0x00, 0x0f, 0xff, 
  0xe0, 0xf0, 0x77, 0x40, 0x00, 0x1f, 0xff, 0xc1, 0xfc, 0x1b, 0x00, 0x00, 0x3f, 0xff, 0x83, 0xfe, 
  0x1f, 0x00, 0x00, 0x7f, 0xfe, 0x07, 0xff, 0x8f, 0x00, 0x00, 0xff, 0xf8, 0x0f, 0xff, 0xc7, 0x00, 
  0x03, 0xff, 0xe0, 0x1f, 0xff, 0xe3, 0x00, 0x07, 0xdc, 0x00, 0x3f, 0xff, 0xf9, 0x00, 0x00, 0x00, 
  0x00, 0x7f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x3c, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3e, 0x9f, 0xff, 0xff, 0x00, 0x00, 
  0x1e, 0x0d, 0xff, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xc1, 0xff, 0xff, 0xff, 0x00, 0x18, 0x07, 0xf3, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0xf1, 0xff, 0xf7, 0xff, 0x00, 0x00, 0x00, 0x63, 0xff, 0xef, 
  0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xef, 0xff, 0x00, 0x00, 0x1c, 0x0f, 0xff, 0xdf, 0xff, 0x00, 
  0x00, 0x00, 0x07, 0xff, 0x9f, 0xff, 0x00, 0x00, 0x00, 0x13, 0xff, 0x3f, 0xff, 0x00, 0x00, 0x00, 
  0x3d, 0xfe, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xfc, 0x7f, 0xff, 0x00, 0x00, 0x78, 0x7f, 0xf8, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xf0, 0xff, 0xff, 0x00, 0x00, 0x00, 0xff, 0xe1, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x3f, 0xc3, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 0x83, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x07, 0x07, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x1f, 0xe0, 
  0x1f, 0xff, 0xff, 0x00, 0x00, 0x3f, 0xe0, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x7e, 0x00, 0x3f, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0x1f, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x03, 0x4f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x06, 0xf7, 0xff, 0xff, 0x00, 0x00, 0x00, 
  0x00, 0xfb, 0xff, 0xff, 0x00, 0x00, 0x00, 0x30, 0xfd, 0xff, 0xff, 0x00, 0x00, 0x01, 0xf9, 0x3e, 
  0xff, 0xff, 0x00, 0x00, 0x07, 0xfb, 0xdf, 0xff, 0xff, 0x00, 0x00, 0xff, 0xf3, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0xff, 0xe7, 0xff, 0xff, 0xff, 0x00, 0x1c, 0x7f, 0xe7, 0xff, 0xff, 0xff, 0x00, 0x06, 
  0xff, 0xcf, 0xff, 0xff, 0xff, 0x20, 0x00, 0xfe, 0x0f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1f, 
  0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xef, 0xff, 0xff, 0x00, 0x00, 0x00, 0x3f, 0xdf, 0xff, 
  0xff, 0xf0, 0x00, 0x00, 0x7f, 0x9f, 0xff, 0xff, 0x60, 0x00, 0xf8, 0xff, 0xbf, 0xff, 0xff, 0x00, 
  0x01, 0xe0, 0xff, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x01, 0xfe, 0x7f, 0xff, 0xff, 0x00, 0x00, 0x01, 
  0xfc, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x78, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xff, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0x00, 0x00, 0xdc, 0x00, 0x7f, 0xff, 0xff, 0x00, 0x00, 
  0x40, 0x00, 0x3f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x02, 0x1f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x01, 
  0x8f, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x47, 0xff, 0xff, 0x00, 0x00, 0x00, 0x60, 0x73, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x7e, 0x3b, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1e, 0x1d, 0xff, 0xff, 0x00, 
  0x00, 0xf9, 0x0d, 0x9e, 0xff, 0xff, 0x00, 0x00, 0xf3, 0xc1, 0xdf, 0xff, 0xff, 0x00, 0x00, 0x03, 
  0xf3, 0xef, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf1, 0xf7, 0xff, 0xff, 0x00, 0x00, 0x00, 0x63, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xff, 0x00, 0x00, 0x10, 0x0f, 0xff, 0xff, 0xff
};



#ifdef __arm__
// should use uinstd.h to define sbrk but Due causes a conflict
extern "C" char* sbrk(int incr);
#else  // __ARM__
extern char *__brkval;
#endif  // __arm__

#include <math.h>
#include "Debug.h"
#include "arduino_arbre.h"
#include "EPD.h"
#include "GUI_Paint.h"
//#include "EPD_SDCard.h"
#include "LowPower.h"

int freeMemory() {
  char top;
#ifdef __arm__
  return &top - reinterpret_cast<char*>(sbrk(0));
#elif defined(CORE_TEENSY) || (ARDUINO > 103 && ARDUINO != 151)
  return &top - __brkval;
#else  // __arm__
  return __brkval ? &top - __brkval : &top - __malloc_heap_start;
#endif  // __arm__
}

#define GROWTH_SCALING_FACTOR 13
#define MAX_BRANCHS 30
#define BRANCH_MAX_ANGLE 3.8
#define BRANCH_HEIGHT_TO_WIDTH_RATIO 8
#define GROWTH_DISCRETISATION_FACTOR 3
#define COMPLEXITY_FACTOR 0.23
#define FOLIAGE_GROWTH_FACTOR 7

#define DRAW_FOLIAGE 0
#define DRAW_BRANCHS 1
#define DRAW_NONE 2

int the_time = 800;

byte frame_left;
byte frame_right;
//UWORD Width;

int memory_base;

struct unit_float {
  void set(float &f){
    var = (unsigned int)(f*65535);
  }  

  float get() {
    return (float)var/65535;
  }

  unsigned int var = 0;  
};

struct byte_angle {
  void set(float &f){
    if(f < 0) f += 2*M_PI;
  
    var = (byte)(f*256/2/M_PI);

  }  

  float get() {
    return (float)var/256*2*M_PI;
  }
  
  byte var = 0;  
};

struct quad_line {
  void create(int ax, int ay, int bx, int by) {
    xa = ax; ya = ay;
    xb = bx; yb = by;
    dx = xb-xa;
    dy = yb-ya;
    xc = xa;
    yc = ya;   

    x_step = 1;
    D = 0;

    if(dx < 0) {
      x_step = -1;
      dx = -dx;
    }
  }

  void step(){
    yc++;
    D = D + 2*dx;

    while(D > 0) {
      
      xc = xc + x_step;
      D = D - 2*dy;
    }
  }
  
  int xa;
  int ya;
  int xb;
  int yb;
  int dx;
  int dy;
  int yc;
  int xc;
  int x_step;
  int D;
};

struct branch {
  void print() {
    DEBUG(F("**** branch addr:"));
    DEBUGLN((int)this);
    DEBUG(F("growth_ratio:"));
    DEBUGLN(growth_ratio.get());
    delay(100);
    DEBUG(F("angle:"));  
    DEBUGLN(angle.get());
    DEBUG(F("fork at growth:"));  
    DEBUGLN(fork_at_growth);
    DEBUG(F("fork1 addr:"));
    int addr = (int)fork1;
    DEBUGLN(addr);
    DEBUG(F("fork2 addr:"));
    addr = (int)fork2;
    DEBUGLN(addr);
    delay(100);
  }
  unit_float growth_ratio;
  byte_angle angle;
  int fork_at_growth;
  branch *fork1 = NULL;
  branch *fork2 = NULL;
};

struct quad_coords {
  quad_coords(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    x[0] = x1; x[1] = x2; x[2] = x3; x[3] = x4;  
    y[0] = y1; y[1] = y2; y[2] = y3; y[3] = y4;
    sort_quad_y();
  }

  quad_coords(){
    
  }

  void sort_quad_y() { //insertion sort
    int key_x;
    int key_y;
    int j;
    int i;
  
    for(i = 1; i <4; i++){
      key_x = x[i]; key_y = y[i];
      j = i-1;
      while((j >= 0) && (y[j] > key_y)) {
        x[j+1] = x[j]; y[j+1] = y[j];
        j--;
      }
      x[j+1] = key_x; y[j+1] = key_y;
    }
  }
  
  void print() {
    DEBUG(F("**** quad addr:"));
    DEBUGLN((int)this);    
    DEBUG(F("p1: "));
    DEBUG(x[0]);
    DEBUG(F(";"));
    DEBUGLN(y[0]);    
    DEBUG(F("p2: "));
    DEBUG(x[1]);
    DEBUG(F(";"));
    DEBUGLN(y[1]);   
    DEBUG(F("p3: "));
    DEBUG(x[2]);
    DEBUG(F(";"));
    DEBUGLN(y[2]);   
    DEBUG(F("p4: "));
    DEBUG(x[3]);
    DEBUG(F(";"));
    DEBUGLN(y[3]);    
    delay(100);       
  }
  int x[4];
  int y[4];
};

void ortho_norm(float *coord) {
  float x=coord[0];
  float y=coord[1];
  float mag;

  if(y == 0){
    coord[0] = 0;
    coord[1] = 1;
  } else {
    coord[0] = 1;
    coord[1] = -x/y;
    mag = sqrt(1+pow(coord[1],2.0));
    coord[0] = coord[0]/mag;
    coord[1] = coord[1]/mag;
  }
}

/*
void e_paper_on(){
  DEV_Module_Init();  
  EPD_7IN5BC_Init();
  EPD_7IN5BC_Clear();
  //DEV_Delay_ms(300);
  //SDCard_Init(); 
}*/

int cross_product_thing_sign(int &origin_x, int &origin_y, int &a_x, int &a_y, int &b_x, int &b_y) {
  int result = (a_x-origin_x)*(b_y-origin_y)-(a_y-origin_y)*(b_x-origin_x);
  if(result > 0) return 1; else if(result < 0) return -1; else return 0;
}

branch branchs_array[MAX_BRANCHS];

void find_frame(branch *b, branch *base_b, int x, int y, int end_x, int end_y, int height, int base_height, char color) {
  if(x <= 0) {
    if(abs(x) > frame_left) frame_left = abs(x);}
  else if(x > frame_right) frame_right = x;
}

struct draw_recursive {

  
  void draw_func_recursive(branch *b, int &x, int &y, unsigned char base_height = 0, branch *base_b = &branchs_array[0]) {
    int end_x;
    int end_y;
    unsigned char i_height;
  
    if(the_time - base_b->fork_at_growth < 0) {return;}
    else {
      
      branch_time = the_time - base_b->fork_at_growth;
      growth = pow(GROWTH_SCALING_FACTOR,2.0)*(float)branch_time/(GROWTH_SCALING_FACTOR*GROWTH_DISCRETISATION_FACTOR+branch_time);
      height = growth * b->growth_ratio.get();
      angle = b->angle.get();
      end_x = (int)(cos(angle)*height+x);
      end_y = (int)(sin(angle)*height+y);
  
      draw_function(b, base_b, x, y, end_x, end_y, (int)height, base_height, color);
      
      //DEBUGLN(freeMemory()-memory_base);  
      //DEBUGLN(freeMemory()-memory_base);
    }

    i_height = (unsigned char)height;   
  
    if(b->fork1 != NULL) {
      draw_func_recursive(b->fork1, end_x, end_y, i_height, b);

    }
    
    if(b->fork2 != NULL) {
      draw_func_recursive(b->fork2, end_x, end_y, i_height, b);

    }
  }    

  int branch_time;
  float growth;
  float angle;
  
  float height;
  void (*draw_function)(branch*,branch*,int,int,int,int,int,int,char);
  char color;
  //char mode;
};

void generate_three() {
  
  struct fork_recursive {

    void insert(branch& b, char n) {
      for(char i = total_branchs-1; i>=n; i--) {       
        
        branchs_array[i+1] = branchs_array[i];
        //update pointers after moving

        for(int ii = i-1; i>=0; ii--){

          if(branchs_array[ii].fork1 == &branchs_array[i]) {
            branchs_array[ii].fork1 += 1;

            break;
          } else if(branchs_array[ii].fork2 == &branchs_array[i]) {
            branchs_array[ii].fork2 += 1;

            break;            
          }
        }
      }

      branchs_array[n] = b;     
    }

    float compute_branch(branch& base_branch, branch& branch_tc, branch& sister_branch, float& branch_tc_angle, float& sister_branch_angle ) {      
      float weight = COMPLEXITY_FACTOR + (1-COMPLEXITY_FACTOR)*sister_branch_angle/(sister_branch_angle-branch_tc_angle);
      float gr = base_branch.growth_ratio.get() * weight;
      branch_tc.growth_ratio.set(gr);
      
      if(gr > 0.1) {
        float angle_set = branch_tc_angle+base_branch.angle.get();
        branch_tc.angle.set(angle_set);
      } else {
        branch_tc.growth_ratio.var = 0;
      }    

      return weight;
    }
    
    void fork(branch& base_branch){

      float angle1;
      float angle2;
      float bgr;
      float gr1;
      float gr2;

      if(&base_branch == &branchs_array[0]){
        angle1 = (float)random(20, 50)/100*M_PI/BRANCH_MAX_ANGLE;
        angle2 = -(float)random(20, 50)/100*M_PI/BRANCH_MAX_ANGLE;               
      } else {
        angle1 = (float)random(20, 100)/100*M_PI/BRANCH_MAX_ANGLE;
        angle2 = -(float)random(20, 100)/100*M_PI/BRANCH_MAX_ANGLE;       
      }
      
      float weight1 = compute_branch(base_branch, fork1, fork2, angle1, angle2 );
      float weight2 = compute_branch(base_branch, fork2, fork1, angle2, angle1 );

      bgr = base_branch.growth_ratio.get();
      gr1 = fork1.growth_ratio.get();
      gr2 = fork2.growth_ratio.get();
      fork1.fork_at_growth = base_branch.fork_at_growth+base_branch.fork_at_growth*weight2;
      fork2.fork_at_growth = base_branch.fork_at_growth+base_branch.fork_at_growth*weight1;    
      
    }

    branch* add_branch_to_array(branch& b) { //Branches are sorted chronologicaly so that they get forked in that order, the three would not be balanced otherwise.

      branch* br;

      for(char i = forking_done_index+1;i <= total_branchs-1;i++) {
        if(b.fork_at_growth < branchs_array[i].fork_at_growth) {
          insert(b,i);
          total_branchs++;

          br = &branchs_array[i];
          return br;
        }
      }
        
      branchs_array[total_branchs] = b;
      total_branchs++;   

      br = &branchs_array[total_branchs-1];
      return br;
    }
    
    void generate_forks() {
    
      if(total_branchs >= MAX_BRANCHS-1 || branchs_array[forking_done_index+1].growth_ratio.var == 0) return;

      fork(branchs_array[forking_done_index+1]);
 
      if(fork1.growth_ratio.var > 0) branchs_array[forking_done_index+1].fork1 = add_branch_to_array(fork1);
 
      if(fork2.growth_ratio.var > 0) branchs_array[forking_done_index+1].fork2 = add_branch_to_array(fork2);
 
          
      forking_done_index++;
    
      generate_forks();    
    }

    char forking_done_index = -1;
    byte total_branchs = 1;
    branch fork1;
    branch fork2;  
    
  };

  branchs_array[0].growth_ratio.var = 65535;
  float angle_set = M_PI/2;
  branchs_array[0].angle.set(angle_set);
  branchs_array[0].fork_at_growth = 30;

  fork_recursive fr;
  fr.generate_forks();

  frame_left = 0;
  frame_right = 0;

  draw_recursive dr;
  //dr.color = BLACK;
  dr.draw_function = &find_frame;
  int x = 0, y = 0;
  dr.draw_func_recursive(&branchs_array[0], x, y, 0, &branchs_array[0]);

  DEBUGLN(F("generate_forks() done"));
  delay(100);  
  DEBUG(F("total branchs:"));
  DEBUGLN(fr.total_branchs);
  delay(100); 
}

/*
void draw_flat_line(int x, int y, int n, char color) {
  int r;
  //if(random(50) > 25) r = 1; else r = -1;
  for(int i = 0; i < n; i++) {
    Paint_DrawPixel(y, x+i, color);
  }
}

void draw_flat_line_V0(int x, int y, int n, char color) {
  int r;
  for(int i = 0; i < n; i++) {
    Paint_DrawPixel(x+i, y, color);
  }
}*/

void draw_flat_line_V2(unsigned int x, unsigned int y, unsigned int n, char color) { //  draw_flat_line_V2(5, 10, 13, 0);
  UBYTE byte_shift = x % 8;
  UBYTE byte_start = 0;
  UBYTE byte_end = 0;
  unsigned int full_bytes = 0;

  unsigned int i;
  for(i = 0; (i < n) && (i < (8 - byte_shift)); i++) {
    byte_start += 0x80 >> i+byte_shift; 
  }
  
  int left = n-i;

  if(left > 0){
    full_bytes = left / 8;
    left = left - 8*full_bytes;
  }

  UDOUBLE Addr = x / 8 + y * Paint_Image.Width2+ Paint_Image.Image_Offset;
  UBYTE Rdata = SPIRAM_RD_Byte(Addr);

  if(color == BLACK) byte_start = ~(byte_start | ~Rdata); else byte_start = byte_start | Rdata;

  SPIRAM_WR_Byte(Addr, byte_start);

  for(i=0;i<full_bytes;i++){
    Addr++;
    if(color == BLACK) SPIRAM_WR_Byte(Addr, 0x00); else SPIRAM_WR_Byte(Addr, 0xFF);
  }
 
  if(left > 0){
    for(i = 0; (i < left); i++) {
      byte_end += 0x80 >> i;
    }
    
    Addr ++;
    Rdata = SPIRAM_RD_Byte(Addr);
    if(color == BLACK) byte_end = ~(byte_end | ~Rdata); else byte_end = byte_end | Rdata;

    SPIRAM_WR_Byte(Addr,byte_end);
  }

}

void draw_circle(int x, int y, int n) {
  unsigned int len = 0;
  float fn = (float)n;
  for(int i = 0; i < n; i++) {
    len = (unsigned int)(sqrt(pow(fn,2.0)-pow(
      i,2.0)));
    draw_flat_line_V2(x-len,y+i,len*2,BLACK);
    draw_flat_line_V2(x-len,y-i,len*2,BLACK);
  }
}

void draw_flat_quad(quad_line &l1, quad_line &l2, int &y_n, char color) {
  quad_line *l_left;
  quad_line *l_right;  
  int ii = 1;

  if(y_n == 0) return;

  for(int i = 1; i <= y_n; i++) {
    ii = i;
    l1.step();
    l2.step();
    if(l1.xc == l2.xc) Paint_DrawPixel(l1.yc,l1.xc, color);
    else if(l1.xc < l2.xc) {
      l_left = &l1;
      l_right = &l2;
      draw_flat_line_V2(l_left->xc,l_left->yc,l_right->xc-l_left->xc, color);
      break;
    } else {
      l_left = &l2;
      l_right = &l1;
      draw_flat_line_V2(l_left->xc,l_left->yc,l_right->xc-l_left->xc, color);
      break;      
    }
  }     

  for(int i = ii; i < y_n; i++){
    l_left->step();
    l_right->step();
    draw_flat_line_V2(l_left->xc,l_left->yc,l_right->xc-l_left->xc, color);
  }    
}

void draw_quad(quad_coords &qc, char color) {
  //qc.print();
  int bl_p;
  int br_p;
  quad_line l1;
  quad_line l2;
  int y_n;

  if(cross_product_thing_sign(qc.x[0],qc.y[0],qc.x[2],qc.y[2],qc.x[3],qc.y[3]) == cross_product_thing_sign(qc.x[0],qc.y[0],qc.x[2],qc.y[2],qc.x[1],qc.y[1])) {
    l2.create(qc.x[0],qc.y[0],qc.x[2],qc.y[2]);
    bl_p = 3;
    br_p = 2;
  } else {
    l2.create(qc.x[0],qc.y[0],qc.x[3],qc.y[3]);
    bl_p = 2;
    br_p = 3;   
  }

  if(qc.y[0] == qc.y[1]) {
    l1.create(qc.x[0],qc.y[0],qc.x[br_p],qc.y[br_p]);
  } else {
    l1.create(qc.x[0],qc.y[0],qc.x[1],qc.y[1]);

    y_n = qc.y[1] - qc.y[0];
    draw_flat_quad(l1,l2,y_n, color);
  }

  y_n = qc.y[2]-qc.y[1];
  l1.create(qc.x[1], qc.y[1], qc.x[bl_p], qc.y[bl_p]);
  draw_flat_quad(l1,l2,y_n, color);

  if(qc.y[2] != qc.y[3]){
    if(l2.yc == l2.yb){
      l2.create(qc.x[2], qc.y[2], qc.x[3], qc.y[3]);
    } else {
      l1.create(qc.x[2], qc.y[2], qc.x[3], qc.y[3]);
    }
  }
  
  y_n = qc.y[3]-qc.y[2];
  draw_flat_quad(l1,l2,y_n, color);
}

void draw_branch(branch *b, branch *base_b, int x, int y, int end_x, int end_y, int height, int base_height, char color) {

  float bb_ortho_norm[2];
  float b_ortho_norm[2];


  if(base_b != b){
    bb_ortho_norm[0] = cos(base_b->angle.get());
    bb_ortho_norm[1] = sin(base_b->angle.get());
    b_ortho_norm[0] = cos(b->angle.get());
    b_ortho_norm[1] = sin(b->angle.get());
    ortho_norm(bb_ortho_norm);
    ortho_norm(b_ortho_norm);

  } else {
    //DEBUG(F("B"));
    base_height = height;
    bb_ortho_norm[0] = 1; bb_ortho_norm[1] = 0;
    b_ortho_norm[0] = 1; b_ortho_norm[1] = 0;
    //Paint_DrawLine(5, 5, y, x, color, LINE_STYLE_SOLID, DOT_PIXEL_1X1);  
  }
  
  float base_width = (float)base_height/BRANCH_HEIGHT_TO_WIDTH_RATIO;
  float width = (float)height/BRANCH_HEIGHT_TO_WIDTH_RATIO;


  quad_coords qc(
    (int)(y+bb_ortho_norm[1]*base_width/2),
    (int)(EPD_7IN5BC_HEIGHT/2+x+bb_ortho_norm[0]*base_width/2),

    (int)(y-bb_ortho_norm[1]*base_width/2),
    (int)(EPD_7IN5BC_HEIGHT/2+x-bb_ortho_norm[0]*base_width/2),

    (int)(end_y-b_ortho_norm[1]*width/2),
    (int)(EPD_7IN5BC_HEIGHT/2+end_x-b_ortho_norm[0]*width/2),

    (int)(end_y+b_ortho_norm[1]*width/2),
    (int)(EPD_7IN5BC_HEIGHT/2+end_x+b_ortho_norm[0]*width/2)

  );  

  //qc.print(); if(base_b == b)
  draw_quad(qc, color);

}

void draw_foliage(branch *b, branch *base_b, int x, int y, int end_x, int end_y, int height, int base_height, char color) {
   //DEBUG(F("test"));
  if((the_time < b->fork_at_growth) || (b->fork1 == NULL && b->fork2 == NULL)) {
    x += 192;
    end_x += 192;
    
    if(y>640) return;
    if(end_y>640) return;
    if(x>384) return;
    if(x<0) return;
  
    if(end_x>384) return;
    if(end_x<0) return;
  
    float foliage_growth = pow(FOLIAGE_GROWTH_FACTOR,2.0)*(float)the_time/(FOLIAGE_GROWTH_FACTOR*30+the_time);
    draw_circle(end_y, end_x, (int)foliage_growth);
  }
}

void draw_grass() {
  UDOUBLE Addr;
  unsigned char my_byte;
  // 'grass', 56x384px
  for (int y = 0; y < 384; y++) {
    for (int x = 0; x < 7; x++) {
      my_byte = pgm_read_byte_near(grass + x+y*7);
      Addr = x + y * Paint_Image.Width2+ Paint_Image.Image_Offset; 
      SPIRAM_WR_Byte(Addr,my_byte);
    }

  }  
}

void draw_three() {

  UBYTE busy;
  DEBUGLN(F("Draw computing ***\r\n"));
  
  unsigned long StartTime = millis();
  //e_paper_on();

  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);
  DEV_Module_Init();  
  DEBUGLN(F("DEV_Module_Init OK."));  
  EPD_7IN5BC_Init();
  DEBUGLN(F("EPD_7IN5BC_Init OK.")); 

        //SDCard_Init(); 
        
  EPD_7IN5BC_Clear();
  DEBUGLN(F("EPD_7IN5BC_Clear OK.")); 

  EPD_7IN5BC_SendCommand(0x04); // POWER ON
  EPD_7IN5BC_ReadBusy();
  EPD_7IN5BC_SendCommand(0x12); // display refresh
  DEBUGLN(F("display refresh OK."));  

  unsigned long CurrentTime = millis();
  unsigned long ElapsedTime = CurrentTime - StartTime;  
  DEBUG(F("Epaper Init time:"));
  DEBUGLN(ElapsedTime);  
  
  Paint_NewImage(IMAGE_BW, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_POSITIVE);

  Paint_Clear(WHITE); //SDCard_ReadBMP("test.bmp", 0, 0);
  draw_grass();

  
  StartTime = millis();

  draw_recursive dr;
  dr.color = BLACK;
  dr.draw_function = &draw_foliage;

  int x =  (int)(((float)frame_left-(float)frame_right)/2); int y = 0; // (int)frame_left-(int)frame_right; int y = 0;

  DEBUG(F("Frame left: "));
  DEBUGLN(frame_left);
  DEBUG(F("Frame right: "));
  DEBUGLN(frame_right);
  DEBUG(F("x: "));
  DEBUGLN(x);
    
  dr.draw_func_recursive(&branchs_array[0], x, y, 0, &branchs_array[0]);

  CurrentTime = millis();
  ElapsedTime = CurrentTime - StartTime;  
  DEBUG(F("Draw foliage computing time:"));
  DEBUGLN(ElapsedTime);

  dr.color = WHITE;
  dr.draw_function = &draw_branch;
  dr.draw_func_recursive(&branchs_array[0], x, y, 0, &branchs_array[0]);
  
  Paint_NewImage(IMAGE_BWR, EPD_7IN5BC_WIDTH, EPD_7IN5BC_HEIGHT, IMAGE_ROTATE_0, IMAGE_COLOR_POSITIVE);
  Paint_Clear(WHITE); 
  dr.color = BLACK;
  dr.draw_function = &draw_branch; 
  dr.draw_func_recursive(&branchs_array[0], x, y,0 ,&branchs_array[0]);

  CurrentTime = millis();
  unsigned long foliage_time = ElapsedTime;
  ElapsedTime = CurrentTime - StartTime;  

  DEBUG(F("Branches computing time:"));
  DEBUGLN(ElapsedTime-foliage_time);
  
  DEBUG(F("Draw total computing time:"));
  DEBUGLN(ElapsedTime);

  EPD_7IN5BC_ReadBusy();

  EPD_7IN5BC_Display();
  EPD_7IN5BC_Sleep();  
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);

  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
}

void setup() {
  // put your setup code here, to run once:

  //LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);

  Serial.begin(SERIAL_BAUD_RATE);
  DEBUGLN(F("*** program start ***"));
  memory_base = freeMemory();
  DEBUG(F("Memory used:"));
  DEBUGLN(freeMemory()-memory_base);  

  //char myChar = pgm_read_byte_near(IMAGE_DATA + 2);

  /*
  DEBUG(F("pin low"));
  delay(5000);
  pinMode(2, OUTPUT);
  digitalWrite(2, HIGH);  
  DEBUG(F("pin high"));
  */
}

void loop() {
  
  // put your main code here, to run repeatedly:
  long seed = analogRead(5)+analogRead(0)*10+analogRead(1)*100;
  randomSeed(seed); //314 pretty 1036 unbalanced
  DEBUG(F("seed:"));
  DEBUGLN(seed);  

  generate_three();
  the_time = 50;

  for(int i = 0; i < 7; i++) {
    Serial.begin(SERIAL_BAUD_RATE);
    //the_time = 700;
    draw_three();
    the_time = (int)(pow(the_time,1.1));
    DEBUG(F("The time:"));
    DEBUGLN(the_time);  

    DEBUGLN(F("*** display sent ***"));
    DEBUG(F("Memory used:"));
    DEBUGLN(freeMemory()-memory_base);  

    Serial.end();
    for(int j = 0; j < 9600; j++) {
      LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
      /*Serial.begin(SERIAL_BAUD_RATE);
      DEBUGLN("t"); 
      Serial.end();*/
    }


  }
}
