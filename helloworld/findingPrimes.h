
int findPrimes(void);

int findPrimes(void){
  int a, b;

  for(a = 2; a <= 100; a++)
  {
    for(b = 2; b <= a; b++)
    {
      if(a%b == 0)
      {
        break;
      }
    }
    if(a == b)
    {
      printf("%d\n", a);
    }
  }
}
