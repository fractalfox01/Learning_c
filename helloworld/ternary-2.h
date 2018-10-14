void showIt(void);

void showIt(void){
  int a, b, c;
  a = 15;
  b = 25;
  c = 110;

  (a>b)?(a>c)?printf("a is the largest!\n"):(printf("c is the largest\n")):
  ((b>c)?printf("b is the largest\n"):printf("c is the largest\n"));
}
