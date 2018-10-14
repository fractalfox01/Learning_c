void showIt(void);

void showIt(void){
  float miles;
  printf("Input distance in miles: ");
  scanf("%f", &miles);
  printf("\nValue in kilometers is %f\n", miles*1.609344);
  printf("Value in feet is %f\n", miles*5280);
  printf("Value in inches is %f\n", miles*5280*12);
}
