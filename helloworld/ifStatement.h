void showIt(void);
void showIt(void){
  int a;
  printf("Enter a number less than ten: ");
  scanf("%d", &a);

  if(a < 10)
  {
    printf("Good Job\n");
  }
  else
  {
    printf("Nope\n");
  }

  return 0;
}
