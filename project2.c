#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll;
    char name[30];
    float ca1_marks;
    float ca2_marks;
    float ca3_marks;
};

void create_record() {
    FILE *fp;
    struct student s;
    fp = fopen("student.txt", "a");
    printf("Enter roll of student: ");
    scanf("%d", &s.roll);
    printf("Enter name of student: ");
    scanf("%s", s.name);
    printf("Enter all CA marks of student: ");
    scanf("%f%f%f", &s.ca1_marks, &s.ca2_marks, &s.ca3_marks);
    fwrite(&s, sizeof(s), 1, fp);
    printf("\nRecord created successfully.\n");
    fclose(fp);
}

void search_record() {
    FILE *fp;
    struct student s;
    int roll, found = 0;
    fp = fopen("student.txt", "r");
    printf("Enter roll to search: ");
    scanf("%d", &roll);
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("\nRecord found.\n");
            printf("Roll: %d\n", s.roll);
            printf("Name: %s\n", s.name);
            printf("CA1 Marks: %.2f\n", s.ca1_marks);
            printf("CA2 Marks: %.2f\n", s.ca2_marks);
            printf("CA3 Marks: %.2f\n", s.ca3_marks);
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Record not found.\n");
    }
    fclose(fp);
}

void modify_record() {
    FILE *fp;
    struct student s;
    int roll, found = 0;
    fp = fopen("student.txt", "r+");
    printf("Enter roll to modify: ");
    scanf("%d", &roll);
    while (fread(&s, sizeof(s), 1, fp)) {
        if (s.roll == roll) {
            printf("\nRecord found.\n");
            printf("Roll: %d\n", s.roll);
            printf("Name: %s\n", s.name);
            printf("CA1 Marks: %.2f\n", s.ca1_marks);
            printf("CA2 Marks: %.2f\n", s.ca2_marks);
            printf("CA3 Marks: %.2f\n", s.ca3_marks);
            printf("Enter new name of student: ");
            scanf("%s", s.name);
            printf("Enter new CA marks of student: ");
            scanf("%f%f%f", &s.ca1_marks, &s.ca2_marks, &s.ca3_marks);
            fseek(fp, -sizeof(s), SEEK_CUR);
            fwrite(&s, sizeof(s), 1, fp);
            printf("Record modified successfully.\n");
            found = 1;
            break;
        }
    }
    if (found == 0) {
        printf("Record not found.\n");
    }
    fclose(fp);
}

void delete_record() {
    FILE *fp, *temp;
    struct student s;
    int roll, found = 0;
    fp = fopen("student.txt", "r");
    temp = fopen("temp.txt", "w");
    printf("Enter roll to delete: ");
    scanf("%%d", &roll);
while (fread(&s, sizeof(s), 1, fp)) {
if (s.roll == roll) {
printf("\nRecord deleted.\n");
found = 1;
} else {
fwrite(&s, sizeof(s), 1, temp);
}
}
if (found == 0) {
printf("Record not found.\n");
}
fclose(fp);
fclose(temp);
remove("student.txt");
rename("temp.txt", "student.txt");
}

void display_records() {
FILE *fp;
struct student s;
fp = fopen("student.txt", "r");
printf("\nAll Records:\n");
while (fread(&s, sizeof(s), 1, fp)) {
printf("Roll: %d\n", s.roll);
printf("Name: %s\n", s.name);
printf("CA1 Marks: %.2f\n", s.ca1_marks);
printf("CA2 Marks: %.2f\n", s.ca2_marks);
printf("CA3 Marks: %.2f\n\n", s.ca3_marks);
}
fclose(fp);
}

int main() {
int choice;
while (1) {
printf("\nMenu:\n");
printf("1. Create Record\n");
printf("2. Search Record\n");
printf("3. Modify Record\n");
printf("4. Delete Record\n");
printf("5. Display All Records\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
create_record();
break;
case 2:
search_record();
break;
case 3:
modify_record();
break;
case 4:
delete_record();
break;
case 5:
display_records();
break;
case 6:
exit(0);
default:
printf("Invalid choice.\n");
}
}
return 0;
}

