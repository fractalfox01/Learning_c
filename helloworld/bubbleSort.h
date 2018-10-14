
void bubbleSort(int arr[], int len);
void testBubble(void);

void testBubble(){
  int arr1[5] = {8,2,5,1,6};
  bubbleSort(arr1, 5);

  int arr2[15] = {43,8,2,5,1,6,27,12,4,10,14,32,42,52,100};
  bubbleSort(arr2, 15);
}

void bubbleSort(int arr[], int len){
  int i, j;
  int temp;
  printf("Starting array: ");
  for(int a = 0; a < len; a++)
  {
    printf("%d ", arr[a]);
  }
  printf("\n");
  for(i = 0; i < len-1; i++)
  {
      for(j = i+1; j < len; j++)
      {
          if(arr[j] < arr[i])
          {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
              printf("i is %d and j is %d\n", i, j);
              for(int k = 0; k < len; k++)
              {
                  printf("%d ", arr[k]);
              }
              printf("\n");
          }
      }
  }
  printf("Sorted by bubble: ");
  for(int g = 0; g < len; g++)
  {
    printf("%d ", arr[g]);
  }
  printf("\n\n******************************\n");
}
