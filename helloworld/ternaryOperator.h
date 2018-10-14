void showIt(void);

void showIt(void){
  int a, b;
  a = 15;
  b = 10;
  a>b?printf("a is greater than b - ternary\n"):printf("b is greater than a - ternary\n");

  if(a>b)
  {
    printf("a is greater than b - if/else\n");
  }
  else
  {
    printf("b is greater than a - if/else\n");
  }
}
