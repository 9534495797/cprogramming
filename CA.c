#include<stdio.h>
//#include<string.h>

//structure to hold student details
struct student{
    int roll_number;
    char name[50];
    int marks;
}s;

//function to insert a student record into the file
void insert_student(){
    FILE *fp;
    fp=fopen("students.txt","ab");
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll_number);
    printf("Enter Name: ");
    scanf("%s",&s.name);
    printf("Enter Marks: ");
    scanf("%d",&s.marks);
    fwrite(&s,sizeof(s),1,fp);
    printf("Record Inserted Successfully\n\n");
    fclose(fp);
}

//function to display all student records
void display_students(){
    FILE *fp;
    fp=fopen("students.txt","rb");
    printf("Roll Number\tName\t\tMarks\n");
    while(fread(&s,sizeof(s),1,fp)==1){
        printf("%d\t\t%s\t\t%d\n",s.roll_number,s.name,s.marks);
    }
    printf("\n");
    fclose(fp);
}

//function to search for a student record by roll number
int find_student(int roll_number){
    FILE *fp;
    fp=fopen("students.txt","rb");
    while(fread(&s,sizeof(s),1,fp)==1){
        if(s.roll_number==roll_number){
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}


//function to update a student record by roll number
void update_student(){
    int roll_number,found=0;
    FILE *fp;
    fp=fopen("students.txt","rb+");
    printf("Enter Roll Number to Update: ");
    scanf("%d",&roll_number);
    while(fread(&s,sizeof(s),1,fp)==1 && found==0){
        if(s.roll_number==roll_number){
            printf("Enter New Name: ");
            scanf("%s",s.name);
            printf("Enter New Marks: ");
            scanf("%d",&s.marks);
            fseek(fp,-sizeof(s),SEEK_CUR);//function used to set hte file indicator position to specific take 3 arg seek_set,seek_cur,seek_end
            fwrite(&s,sizeof(s),1,fp);
            found=1;
            printf("Record Updated Successfully\n\n");
        }
    }
    fclose(fp);
    if(found==0)
        printf("Record Not Found\n\n");
}

//function to delete a student record by roll number
void delete_student(){
    int roll_number,found=0;
    FILE *fp,*temp;
    fp=fopen("students.txt","rb");
    temp=fopen("temp.txt","wb");
    printf("Enter Roll Number to Delete: ");
    scanf("%d",&roll_number);
    while(fread(&s,sizeof(s),1,fp)==1){
        if(s.roll_number!=roll_number)
            fwrite(&s,sizeof(s),1,temp);
        else
            found=1;
    }
    fclose(fp);
    fclose(temp);
    remove("students.txt");
    rename("temp.txt","students.txt");
    if(found==1)
        printf("Record Deleted Successfully\n\n");
    else
        printf("Record Not Found\n\n");
}

int main(){
    int choice,roll_number;
    do{
        printf("Class Assessment Evaluator\n");
        printf("1. Insert Student Record\n");
        printf("2. Display All Student Records\n");
        printf("3. Update Student Record\n");
    printf("4. Delete Student Record\n");
    printf("5. Exit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            insert_student();
            break;
        case 2:
            display_students();
            break;
        case 3:
            update_student();
            break;
        case 4:
            delete_student();
            break;
        case 5:
            printf("Exiting...\n\n");
            break;
        default:
            printf("Invalid Choice\n\n");
            break;
    }
}while(choice!=5);
//return 0;

}

