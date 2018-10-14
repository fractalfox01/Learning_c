#include <float.h>
void showIt(void);

void showIt(void){
  int prin = 10000, time = 3;
  float rate = 10.5;
  float si;
  si=prin*rate*time/100;

  printf("Simple Intrest is %5.1f \n", si);
}
