void showIt(void);

void showIt(void){
  float a, b;
  a = 40;
  b = 20;
  char choice;
  printf("\nEnter on operator (+ - / Or *):");
  scanf("%c", &choice);
  switch(choice)
  {
    case '+':
    printf("\nResult: %f\n", a+b);
    break;
    case '-':
    printf("Result: %f\n", a-b);
    break;
    case '*':
    printf("Result: %f\n", a*b);
    break;
    case '/':
    printf("Result: %f\n", a/b);
    break;
    default:
    printf("Invalid");
  }
}
