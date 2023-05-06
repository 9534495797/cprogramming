#include<stdio.h>
struct student {
    int roll;
    char name[30];
    float ca_marks;

}s;
int main() {
    FILE *fp;
    fp = fopen("student_detail.txt", "a");
    printf("Enter roll of student: ");
    scanf("%d", &s.roll);
    printf("Enter name of student: ");
    scanf("%s", s.name);
    printf("Enter all CA marks of student: ");
    scanf("%f", &s.ca_marks);
    fwrite(&s, sizeof(s), 1, fp);
    printf("\nRecord created successfully.\n");
    fclose(fp);
}
