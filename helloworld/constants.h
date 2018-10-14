void showIt(void);

void showIt(void){
  #define PI 3.14
  #define RADIUS 10

  printf("Constants - Part 1\n");
  printf("Blahhhhhhhhh\n");
  int area;

  area = PI * RADIUS * RADIUS;

  printf("The area of the circle is: %d\n", area);

  printf("\n********************************\n");

  printf("Constants - Part 2\n");

  const int SIDE = 10;
  int area2;
  area2 = SIDE*SIDE;

  printf("The area of square with side %d is: %d sq.\n", SIDE, area);

}
