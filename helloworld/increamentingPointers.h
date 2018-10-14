void showIt(void);

void showIt(void){
  int arr[5] = {15,20,25,30,35};
  int *ptr;
  ptr = &arr;

  for(int i = 0; i < 5; i++)
  {
    printf("Element %d: %d\n", (i+1), *ptr);
    ptr++;
  }
}
