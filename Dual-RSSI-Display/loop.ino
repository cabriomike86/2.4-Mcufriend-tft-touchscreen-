void loop(void) {
  int j,i,j1,i1;
  j=analogRead(A15);
  j1=analogRead(A14);
  i=map(j,0,1023,1,200);
  i1=map(j1,0,1023,1,200);

  tft.fillRect(10, 10,i, 18, YELLOW);
  tft.fillRect(i+9, 10, (200-i+1), 18, BLACK);
  tft.fillRect(10, 30,i1, 18, YELLOW);
  tft.fillRect(i1+9, 30, (200-i1+1), 18, BLACK);

  //tft.fillRect(10, 50, 100, 40, BLACK);

  tft.setTextColor(BLUE);

  tft.setCursor(100, 15);
  tft.println(j); 
  print_x(map(j,0,1023,227,90)); 

  tft.setCursor(100, 35);
  tft.println(j1); 
  print_x(map(j1,0,1023,227,90)); 

  delay(10);
}


int x=12;
void print_x(int h){
  tft.drawLine(x, h, x, h+2, CYAN);
  if(x<220)x++;
  else{ x=12;tft.fillRect(11, 90, 220, 140, BLACK);}
}
