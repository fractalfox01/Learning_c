void showIt(void);
void showIt(void){
  int a = 10;
  for(int i = 1;i<a;i++)
  {
    if(i == 5)
    {
      continue;
    }
    else{
      printf("i is: %d\n",i);
    }
  }
}
