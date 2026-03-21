#include <stdio.h>
#include <string.h>
typedef struct{
    char name[30];
    int student_id;
    float gpa;
}student;

void updatestudentinfo(student *s,char name[],int id, float gpa);
void displaystudentinfo(student s);
int main(){
    student student_01;
    student student_02;
    student student_03;

    updatestudentinfo(&student_01,"Nicolas Anderson",825250004, 4);
    displaystudentinfo(student_01);

    printf("\nRunning update program\n\n");
    updatestudentinfo(&student_01,"Michael",701,1.1);
    displaystudentinfo(student_01);
    return 0;
}
void updatestudentinfo(student *s,char name[],int id, float gpa){
    strcpy(s->name, name);
    s->student_id = id;
    s->gpa = gpa ;
}
void displaystudentinfo(student s){
    printf("Nama : %s\n", s.name);
    printf("ID : %d\n",s.student_id);
    printf("GPA : %.2f\n",s.gpa);
}