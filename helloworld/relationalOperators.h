void showIt(void);

void showIt(void){
  int a, b;
  a = 5;
  b = 4;

  if(a>b)
  {
    printf("%d is greater than %d\n", a, b);
  }
  if(a<b)
  {
    printf("%d is greater than %d\n", b, a);

  }
  if(a>=b)
  {
    printf("%d is more then or equal to %d\n", a, b);

  }
  if(a<=b)
  {
    printf("%d is less than or equal to %d\n", a, b);
  }
  if(a==b)
  {
    printf("%d is equal to %d\n", a, b);
  }
  if(a!=b)
  {
    printf("%d is not equal to %d\n", a, b);
  }
}
