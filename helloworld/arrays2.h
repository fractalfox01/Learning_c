
int makeArray2(void){
  int a;
  float total = 0;
  float average;
  int score[5];

  for(int i = 0; i < 5; i++)
  {
    printf("Enter score on screen: ");
    scanf("%d", &score[i]);
  }

  for(int j = 0; j < 5; j++)
  {
    total=total+score[j];
  }
  average=total/5;

  printf("the average is: %f\n", average);
}
