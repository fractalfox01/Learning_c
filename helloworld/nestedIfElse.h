void showIt(void);

void showIt(void){
  int a;
  printf("Enter 1 or 2: \n");
  scanf("%d", &a);

  if(a == 1)
  {
    printf("You Typed 1\n");
  }
  else
  {
    if(a == 2)
    {
      printf("You typed 2\n");
    }
    else
    {
      printf("Whats Wrong With You?\n");
    }
  }
}
