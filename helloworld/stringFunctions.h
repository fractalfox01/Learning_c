#include <string.h>
void showIt(void);

void showIt(void){
  char str1[25] = "Have a nice day...";
  printf("The size of the string is: %d\n", strlen(str1));
  char str2[25] = "\nand an amazing night";
  printf("%s\n", strcat(str1, str2));
  printf("Address of str1: %d\n", &str1);
  printf("Address of str2: %d\n", &str2);
  printf("\nValue of strcat %d\n", strcat(str1, str2));
}
