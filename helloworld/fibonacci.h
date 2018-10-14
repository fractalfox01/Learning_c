int fibo(int);
void showIt(void);

void showIt(void){
  for(int x = 0; x < 10; x++)
  {
    printf("%d\t", fibo(x));
  }
  printf("\n");
}

int fibo(int a){

  if(a == 0)
  {
    return 0;
  }
  if(a == 1)
  {
    return 1;
  }
  else
  {
    return fibo(a - 1) + fibo(a - 2);
  }
}
