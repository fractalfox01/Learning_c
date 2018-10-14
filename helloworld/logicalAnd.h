void showIt(void);

void showIt(void){
  int a, b;

  printf("Enter a negative number: ");
  scanf("%d", &a);

  if((a < 0) && (a%2 == 0))
  {
    printf("Thats Good\n");
  }
  else
  {
    printf("Whats Wrong With You?\n");
  }
}
