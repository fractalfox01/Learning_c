void showIt(void);

void showIt(void){
  int a, b;
  for(a = 1; a <= 5; a++)
  {
    for(b = 1; b <= a; b++)
    {
      printf("*");
    }
    printf("\n");
  }
}