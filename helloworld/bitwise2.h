void showIt(void);

void showIt(void){
  int a = 60;
  printf("Left Shift Operation (multiply by 4, shift 2): %d\n", a<<2);
  printf("Left Shift Operation (multiply by 8, shift 3): %d\n", a<<3);
  printf("Right Shift Operation (divid by 4, shift 2): %d\n", a>>2);
  printf("Right Shift Operation (divid by 8, shift 3): %d\n", a>>3);
}
