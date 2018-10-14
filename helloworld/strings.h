void showIt(void);

void showIt(void){
  char str[] = "Hello World!";
 // appends \0 to end, making length 13.
  printf("%s\n", str);
  printf("The size of the string is: %d\n", sizeof(str));
}
