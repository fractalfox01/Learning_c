void showIt(void);

void showIt(void){
  float temp;
  printf("Input the temp in degree celsius: ");
  scanf("%f", &temp);

  printf("\nEquivalent temp in degree fahrenheit: %f\n", temp*1.8+32);
}
