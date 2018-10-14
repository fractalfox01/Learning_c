void showIt(void);

void showIt(void){
  char a, b, c;
  int d;
  printf("The following are converted to ASCII\na = 'A', b = '4'\nc = a+b and uses ampersand c \nd = a+b and uses  ampersand d\n");
  a = 'A';
  b = '4';
  c = a+b;
  d = a+b;

  printf("c equals %c\n", c);
  printf("d equals %d\n", d);
}
