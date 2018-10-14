#define SUM(x,y) (x + y)
void showIt(void);

void showIt(void){
  int a=15, b=20;

  printf("Sum of %d and %d is %d\n", a, b, SUM(a,b));
}
