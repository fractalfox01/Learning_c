int capitals(int);
void showIt(void);

void showIt(void){
  int a;

  printf("Enter a number 1 - 3:\n");
  printf("1 for USA\n");
  printf("2 for Asia\n");
  printf("3 for India\n");

  scanf("%d", &a);
  capitals(a);
}
int capitals(int x)
{
  switch(x)
  {
    case 1:
    printf("The Capital for USA is: Washington DC\n");
    break;
    case 2:
    printf("The Capital for Asia is: Canberra\n");
    break;
    case 3:
    printf("The Capital for India is: New Delhi\n");
    break;
    default:
    printf("Invalid Choice\n");
  }
  return 0;
}
