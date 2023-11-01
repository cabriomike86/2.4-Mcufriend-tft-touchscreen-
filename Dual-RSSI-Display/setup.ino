void setup(void) {
  tft.reset();
  uint16_t identifier = tft.readID();

  tft.begin(identifier);
  tft.setRotation(0);

  tft.fillScreen(BLACK);

  tft.fillRect(0, 0,320 , 240, BLACK);
  tft.drawRect(1, 0, 239, 318, WHITE);
  tft.drawRect(9, 9, 202, 40, WHITE);
  tft.drawLine(10,90, 10, 240, BLUE);
  tft.drawLine(1, 230, 239, 230, RED);
  tft.setTextSize(1.5);
  tft.setTextColor(WHITE);
  tft.setCursor(212, 20);tft.println("100%");
  tft.setTextColor(BLUE);
  tft.setCursor(215, 10);tft.println("R C");
  tft.setTextColor(WHITE);
  tft.setCursor(212, 40);tft.println("100%");
  tft.setTextColor(BLUE);
  tft.setCursor(215, 30);tft.println("FPV");
  tft.setTextColor(WHITE);
  tft.setCursor(170, 55);tft.println("RSSI inputs");
}