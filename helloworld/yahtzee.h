#include <ctype.h>
bool yahtzeeIsValid(int arr[]);

bool yahtzeeIsValid(int arr[]){
  bool isGood = true;
  for(int i = 0; i < 5; i++)
  {
    if(isdigit(arr[i]) == 0)
    {
      printf("Looks good! %d\n", arr[i]);

    }
    else
    {
      printf("Warning, invalid integer type.\nStopping Program.\n");
      break;
    }
  }
  return isGood;
}
