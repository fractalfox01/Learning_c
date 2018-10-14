#include <string.h>
void showIt(void);

union university
{
  int s_age;
  char s_name[30];
};
struct highschool
{
  int age;
  char name[30];
};

void showIt(void){
  union university student;
  struct highschool stu;
  stu.age = 16;
  strcpy(stu.name, "Beth");
  printf("Struct example: (age) %d\n", stu.age);
  printf("Struct example: (name) %s\n", stu.name);
  printf("Size of struct: %d\n", sizeof(stu));

  student.s_age = 22;
  printf("Students Age: %d\n", student.s_age);
  strcpy(student.s_name, "Thomas");
  printf("Students Name: %s\n", student.s_name);
  printf("Size of student: %d\n", sizeof(student));

  printf("Address of union student age and name: %d, %d\n", &student.s_age, &student.s_name);
  printf("Address of struct student age and name: %d, %d\n", &stu.age, &stu.name);
}
