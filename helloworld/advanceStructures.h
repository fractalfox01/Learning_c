#include <string.h>
struct Student
{
  char name[30];
  char roll_number[3];
  int age;
}stu1, stu2, stu3;

void showIt(void);
void displayStudent(struct Student stu);

void showIt(void){

  //char *arr[];

  strcpy(stu1.name, "Thomas V");
  strcpy(stu1.roll_number, "5");
  stu1.age = 33;
  displayStudent(stu1);
  strcpy(stu2.name, "Bob G");
  strcpy(stu2.roll_number, "15");
  stu2.age = 28;
  displayStudent(stu2);
  strcpy(stu3.name, "Amber S");
  strcpy(stu3.roll_number, "73");
  stu3.age = 22;
  displayStudent(stu3);
}

void displayStudent(struct Student stu)
{
  printf("\n*****************************\n");
  printf("Students Name: %s\n", stu.name);
  printf("Roll: %s\n", stu.roll_number);
  printf("Age: %d\n", stu.age);
  printf("\n*****************************\n");
}
