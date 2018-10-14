#include <math.h>
#include <limits.h>

void showIt(void){
  int x;
  x = pow(5, 3);

  printf("Calculating 5^3\n%d\n", x);

  int a;
  printf("Enter a number within (1-9): ");
  scanf("%d", &a);
  if((a <= 0) || (a > 9))
  {
    printf("Try again: %d\n", a);
  }
  else
  {
    int f = 1;
    int g;
    for(g = 1;g < a; g++)
    {
      f = (f * a);
      printf("%d ^ %d: %d\n",a, g, f);
    }
    printf("%d ^ %d = %d\n", a, a, (f*a));
  }
}
