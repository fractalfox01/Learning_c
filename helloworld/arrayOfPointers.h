int makeArray(void);

int makeArray(void){
  char *ptr[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};
  for(int i = 0; i < 12; i++)
  {
    printf("Month %d: %s\n", (i+1), ptr[i]);
  }
}
