void showIt(void);
int fact(int);

void showIt(void){
  int a = 5;

  printf("Factorial of %d is: %d\n", a, fact(a));
}
int fact(int x){
  int fin;
  if(x <= 1){
    return 1;
  }
  else
  {
    return x*fact(x - 1);
  }
}
