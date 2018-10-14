void showIt(void);

void showIt(void){
  int arr[4][4] = {{10,15,20,25},{2,4,6,8},{9,12,15,18},{6,36,216,1296}};
  for(int i = 0;i < 4;i++)
  {
    for(int j = 0; j < 4; j++)
    {
      printf("arr[%d][%d] is %d\n", i, j, arr[i][j]);
    }
  }
}
