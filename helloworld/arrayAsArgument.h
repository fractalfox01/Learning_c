#include <math.h>

void funk(int arr[], int val);
/**
*        The following gets pasted into main.
* int arr[5] = {2, 4, 6, 8, 10};
* int power;
* printf("Enter power value: ");
* scanf("%d", &power);
* funk(arr, power);
**/

void funk(int arr[], int v)
{
  for(int i = 0; i < 5; i++)
  {
    printf("Value %d: %f\n",(i+1), pow(arr[i], v));
  }
}
