void showIt(void);

void showIt(void){
  int a, b, c, d, e;
  a = 10;
  b = 5;
  c = 5;
  d = 10;

  e = a/b+c*d;

  printf("Result of the expression is %d\n", e);

  e = (a/(b+c)*d);
  printf("Result of the expression is %d\n", e);
}
