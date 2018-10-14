
void checkUpper(char a);
void checkLower(char a);

void checkUpper(char a){
  for(int x = 65; x < 91; x++){
    if(x == a){
      printf("Upper case found: %c\n", a);
      break;
    }
  }
}
void checkLower(char a){
  for(int x = 97; x < 124; x++){
    if(x == a){
      printf("Lower case found: %c\n", a);
      break;
    }
  }
}
