
void printChar(void);

void printChar(void){
  char x = 'A';
  for(int i = 0; i < 26; i++)
  {
    printf("%c(%d) ", x, x);
    x++;
  }
  x = 0;
}
