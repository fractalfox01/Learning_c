int makeArray(void);

int makeArray(void){
  int arr[5] = {23,42,-16,3,14};
  for(int i = 0; i < 5; i++)
  {
    printf("This is index %d which contains %d\n", i, arr[i]);
  }
}

