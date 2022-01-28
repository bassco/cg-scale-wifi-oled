#define plane_width 104
#define plane_height 65
const uint8_t plane_bits[] PROGMEM= {
  0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFE, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x06, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1C, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x18, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x07, 0x38, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x07, 0x38, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x77, 0x00, 0x00, 0x00, 0x07, 0x38, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x63, 0x00, 0x00, 0x00, 0x07, 
  0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x60, 0x00, 0x00, 0x00, 
  0x07, 0xF0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x60, 0x00, 0x00, 
  0x00, 0x07, 0xF0, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x60, 0x00, 
  0x00, 0x00, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x60, 
  0x00, 0x00, 0x00, 0x07, 0xE0, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 
  0x60, 0x00, 0x00, 0x00, 0x07, 0xE0, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x0F, 0x70, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x80, 0x07, 0x70, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x0F, 0x00, 0x00, 0x00, 
  0x00, 0xC0, 0x03, 0x30, 0x00, 0x00, 0x00, 0x07, 0x80, 0x07, 0x00, 0x00, 
  0x00, 0x00, 0xE0, 0x01, 0x38, 0x00, 0x00, 0x00, 0x07, 0x00, 0x0F, 0x00, 
  0x00, 0x00, 0x00, 0xF0, 0x00, 0x38, 0x00, 0x00, 0x00, 0x07, 0x00, 0x3E, 
  0x00, 0x00, 0x00, 0x00, 0x78, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x7F, 0x00, 
  0xFC, 0x07, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x0E, 0x00, 0x00, 0x00, 0xFF, 
  0x1F, 0xF0, 0xFF, 0x01, 0x00, 0x00, 0x1E, 0x00, 0x0E, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0x00, 0x00, 0x0F, 0x00, 0x07, 0x00, 0x00, 
  0xC0, 0x07, 0xFE, 0x00, 0xE0, 0xFF, 0x7F, 0x80, 0x07, 0x80, 0x03, 0x00, 
  0x00, 0xE0, 0x01, 0xFC, 0x00, 0x00, 0xF0, 0xFF, 0xFF, 0x03, 0x80, 0x03, 
  0x00, 0x00, 0xF0, 0x00, 0xFE, 0x1F, 0x00, 0x00, 0xF8, 0xFF, 0x1F, 0xC0, 
  0x01, 0x00, 0x00, 0x78, 0x80, 0xEF, 0xFF, 0x03, 0x00, 0x00, 0xFC, 0xFF, 
  0xE7, 0x00, 0x00, 0x00, 0x3E, 0xE0, 0x03, 0xFC, 0x7F, 0x00, 0x00, 0x00, 
  0xFE, 0xFF, 0x00, 0x00, 0x00, 0x0F, 0xF8, 0x00, 0x80, 0xFF, 0x0F, 0x00, 
  0x00, 0x80, 0xFF, 0x0F, 0x00, 0x00, 0x07, 0x7F, 0x00, 0x00, 0xF8, 0xFF, 
  0x00, 0x00, 0x00, 0xE0, 0xFF, 0x00, 0x00, 0xFF, 0x1F, 0x00, 0x00, 0x00, 
  0xFE, 0x07, 0x00, 0x00, 0x00, 0xFC, 0x07, 0x00, 0xFE, 0x03, 0x00, 0x00, 
  0x00, 0xC0, 0x0F, 0x00, 0x00, 0x00, 0xE0, 0x3F, 0x00, 0x70, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x80, 0x0F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x07, 0x00, 0xE0, 0xFF, 
  0x0F, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x03, 0x00, 0xF8, 
  0xFF, 0xFF, 0x03, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 
  0xFE, 0x00, 0xFE, 0x7F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 
  0x00, 0x1F, 0x00, 0xC0, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 
  0x00, 0x80, 0x07, 0x00, 0x00, 0xF0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x1C, 0x00, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0E, 0x00, 0xE0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x07, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x80, 0x03, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xC0, 0x01, 0x00, 0x1E, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xC0, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xE0, 0x01, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0xF8, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x3C, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x1F, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xC0, 
  0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x01, 
  0xE0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 
  0x00, 0xF8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x70, 0x00, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3C, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1E, 0xE0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0F, 0xF8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x80, 0x07, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, };