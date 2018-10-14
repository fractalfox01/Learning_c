void showIt(void);

void showIt(void){
  auto int var1;
  var1 = 5;
  printf("I am a block level storage type: %d\n", var1);
  printf("The address of var is: %d\n", &var1);

  register int var2;
  var2 = 10;
  printf("I am stored in the register (if available): %d\n", var2);
  printf("Address of var2 %d\n", &var2);
}
