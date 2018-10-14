void showIt(void);

void showIt(void){
  char a;
  printf("Enter the letter 'a': \n");
  scanf("%c", &a);

  if((a == 'a')||(a == 'A'))
  {
    printf("Thats Good!\n");
  }
  else
  {
    printf("Whats Wrong With You?\n");
  }
}
