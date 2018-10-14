void selectSort(int *unsorted[], int a);
void testSelect(void);

int arr1[5] = {2, 7, 4, 1, 5};
int arr2[7] = {2, 7, 3, 5, 4, 1, 5};
int arr3[10] = {2, 7, 4, 1, 5, 3, 9, 6, 8, 11};
int testArr1[5] = {64, 25, 12, 22, 11};
int testArr2[5] = {-10, 10, 10, 1, 5};
int testArr3[7] = {-10, -1, -2, -3, -4, -5, 100};

void testSorter(void){
    selectSort(testArr1, 5);
    selectSort(testArr2, 5);
    selectSort(testArr3, 7);
}

void selectSort(int *unsorted[], int a){
  int temp;
  for(int i = 0; i < a-1; i++)
  {
    int min_ = i;
    for(int j = min_+1; j < a; j++)
    {
      if(unsorted[j] < unsorted[i])
      {
        temp = unsorted[i];
        unsorted[i] = unsorted[j];
        unsorted[j] = temp;
      }
    }
  }
  printf("\n************************\n");
  printf("sorted: [");
  for(int v = 0; v < a-1; v++)
  {
    printf("%d, ", unsorted[v]);
  }
  printf("%d]", unsorted[a-1]);
  printf("\n************************\n");
}
