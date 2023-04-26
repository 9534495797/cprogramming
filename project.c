#include<stdio.h>
// structure to hold student ca record
struct carecord
{
int roll;
char name[50];
float ca1;
float ca2;
float ca3;
float finalca;
};
int count=0;
// function to compute final ca by taking top 2 ca and converting to 25 marks using bubble sort
void computeca(struct carecord c[], int count)
{
float a[]={c[count].ca1,c[count].ca2,c[count].ca3};
int i,j;
float temp,t1,t2;
for(i=0;i<2;i++)
{
for(j=0;j<2-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
t1=a[2];
t2=a[1];
c[count].finalca=(t1+t2)/3.0;
}
//function to create record and compute ca
void createrecord(struct carecord c[],int a)
{
printf("enter roll no: \n");
scanf("%d",&c[a].roll);
printf("enter name: \n");
scanf("%s",&c[a].name);
printf("enter CA 1 marks: \n");
scanf("%f",&c[a].ca1);
printf("enter CA 2 marks: \n");
scanf("%f",&c[a].ca2);
printf("enter CA 3 marks \n");
scanf("%f",&c[a].ca3);
computeca(c,count);
count++;
printf("record added successfully \n");
}
// function to search for record
void searchrecord(struct carecord c[],int count)
{
int i;
int search_num;
printf("Enter roll to search ca record: ");
scanf("%d",&search_num);
for (i = 0; i <count; i++)
{
if (c[i].roll == search_num)
{
printf("Record found!\n");
printf("RollNo\tName\tCa1\tCa2\tCa3\tfinalCA marks");
printf("---------------------------------------------------------\n");
printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", c[i].roll, c[i].name, c[i].ca1, c[i].ca2, c[i].ca3, c[i].finalca);
return;
}
}
printf("record not found!\n");
}
// function to update record of given roll no
void modify(struct carecord c[],int count)
{
int search_num;
int i;
printf("Enter Roll number whose record to be updated: \n");
scanf("%d",&search_num);
for (i = 0; i <count; i++)
{
if(c[i].roll==search_num)
{
printf("enter new name: \n");
scanf("%s",&c[i].name);
printf("enter CA 1 marks: \n");
scanf("%f",&c[i].ca1);
printf("enter CA 2 marks: \n");
scanf("%f",&c[i].ca2);
printf("enter CA 3 marks \n");
scanf("%f",&c[i].ca3);
computeca(c,count);
printf("record update successfully \n");
return;
}
}
printf("record not found");
}
//function to delete a given record
void delete(struct carecord c[],int *count)
{
int i,j;
int search_num;
printf("Enter roll number whose record is to deleted: \n");
scanf("%d",&search_num);
for (i = 0; i <*count; i++)
{
if (search_num==c[i].roll)
{
printf("Record found!\n");
for (j = i; j <=(*count) - 1; j++)
{
c[j] = c[j+1];
}
(*count)--;
printf("Record deleted successfully!\n");
return;
}
}
printf("record not found ");
}
//function to display record
void display(struct carecord c[],int count)
{
int i;
if(count==0)
{
printf("No Record To Show \n");
return;
}
printf("RollNo\tName\tCa1\tCa2\tCa3\tfinalCA marks\n");
printf("---------------------------------------------------------\n");
for (i = 0; i <count; i++)
{
printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", c[i].roll, c[i].name, c[i].ca1, c[i].ca2, c[i].ca3, c[i].finalca);
}
}
//main function
int main()
{
struct carecord c[100];
int choice;
do {
printf("\nCA EVALUATOR SYSTEM \n");
printf("--------------------------\n");
printf("1. Create new record\n");
printf("2. Search for a record\n");
printf("3. Modify/Update record\n");
printf("4. Delete a record\n");
printf("5. Display record\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
createrecord(c,count);
break;
case 2:
searchrecord(c,count);
break;
case 3:
modify(c,count);
break;
case 4:
delete(c,&count);
break;
case 5:
display(c,count);
break;
case 6:
printf("THANK YOU\n");
break;
default:
printf("Invalid choice! Please try again.\n");
}
}while(choice!=6);
return 0;
}
