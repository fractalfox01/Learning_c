void showIt(void);

void showIt(void){
  int a = 0;
  while(a < 10)
  {
    printf("a is: %d\n", a);
    if(a == 5)
    {
      goto OUT;
    }
    a++;
  }
  OUT:
  printf("We're OUT!!\n");
}
