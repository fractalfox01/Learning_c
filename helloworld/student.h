
struct Student{
  char name[35];
  char degree_type[35];
  char enrollment_year[5];
};

void displayAll(struct Student stu[], int len);
void displayStudent(struct Student stu);

void displayStudent(struct Student stu){
  printf("Name: %s\n", stu.name);
  printf("Degree Type: %s\n", stu.degree_type);
  printf("Enrollment Year: %s\n", stu.enrollment_year);
}
void displayAll(struct Student stu[], int len){
  for(int i = 0; i < len; i++)
  {
    printf("******************************************\n");
    printf("Name: %s\n", stu[i].name);
    printf("Degree Type: %s\n", stu[i].degree_type);
    printf("Enrollment Year: %s\n", stu[i].enrollment_year);
    printf("******************************************\n");
    printf("\n");
  }
}
