
void swapIt(int *, int *);
void showIt(void);

void showIt(void){
  int a, b;
  a = 10;
  b = 3;
  printf("a is %d and b is %d\n", a, b);
  swapIt(&a, &b);
  printf("a is %d and b is %d\n", a, b);
}

void swapIt(int *a, int *b)
{
  int temp;
  temp=*a;
  *a=*b;
  *b=temp;
}
