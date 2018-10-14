#include <float.h>
int makeMath(void);

int makeMath(void){
  char a = 20, b = 4;
  printf("a+b=%d \n", a+b);
  printf("a-b=%d \n", a-b);
  printf("a*b=%d \n", a*b);
  printf("a/b=%d \n", a/b);

  printf("a+b=%5.2f \n", (float)a+b);
  printf("a-b=%5.2f \n", (float)a-b);
  printf("a*b=%5.2f \n", (float)a*b);
  printf("a/b=%5.4f \n", (float)a/3);
}

