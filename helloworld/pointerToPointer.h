void showIt(void);

void showIt(void){
  int a, *b, **c, **d;
  a = 100;
  b = &a;
  c = &b;
  d = &c;
  printf("Address of a: %d\n", &a);
  printf("Address of a: %d\n", b);
  printf("Address of a: %d\n", *c);
  printf("Address of b: %d\n", *d);
  printf("Address of b: %d\n", &b);
  printf("Address of b: %d\n", c);
  printf("Address of c: %d\n", &c);
  printf("Address of d: %d\n", &d);
  printf("Value of a: %d\n", a);
  printf("Value of b: %d\n", b);
  printf("Value of c: %d\n", c);
  printf("Value of d: %d\n", d);
  printf("Value of a: %d\n", *b);
  printf("Value of b: %d\n", *c);
  printf("Value of a: %d\n", **c);
  printf("Value of b: %d\n", **d);
  printf("Value of c: %d\n", *d);
}
