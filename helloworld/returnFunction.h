void showIt(void);
int add(int, int);

void showIt(void){
  int a, b;
  int result;
  printf("Enter two numbers: ");
  scanf("%d%d", &a, &b);
  result = add(a, b);
  printf("\nResult: %d\n", result);
}

int add(int a, int b)
{
  return a + b;
}
