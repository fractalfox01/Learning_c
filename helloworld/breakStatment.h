void showIt(void);

void showIt(void){
  int a = 1;

  while(a < 10)
  {
    printf("A is: %d\n",a);
    if(a == 5)
    {
      break;
    }
    a++;
  }
  printf("a is: %d\n",a);
}
