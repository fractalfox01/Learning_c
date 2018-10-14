void showIt(void);

void showIt(void){
  int prin, time;
  float rate, si;

  printf("Enter value of principle, duration and rate of intrest\n");
  scanf("%d%d%f", &prin, &time, &rate);
  si=prin*time*rate/100;
  printf("\nSimple intrest is: %f\n", si);
}
