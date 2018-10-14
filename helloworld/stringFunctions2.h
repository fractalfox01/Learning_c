#include <string.h>
void showIt(void);

void showIt(void){
  char str1[] = "Hello World";
  char str2[] = "World";

  if(strstr(str1, str2) && strchr(str1, 'H'))
  {
    printf("Address of str1: %d\nValue of str2: %d\n", &str1, &str2);
    printf("value returned: %d\n", strstr(str1, str2));
    printf("str2 exists in str1.\n");
    printf("And,\n the character exists in str1\n");
  }
  else
  {
    printf("str2 is not present in str1.\n");
    printf("And,\n the character is not present in str1.\n");
  }
}
