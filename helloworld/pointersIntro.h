void showIt(void);

void showIt(void){
  int a = 10;
  int *ptr;
  ptr = &a;

  printf("Value of a: %d\n", a);
  printf("Address of a: %d\n", &a);

  printf("Value of ptr: %d\n", ptr);
  printf("Address of ptr: %d\n", &ptr);
  printf("Value at the address stored at ptr: %d\n", *ptr);
}
