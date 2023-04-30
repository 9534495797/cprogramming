#include<stdio.h>
#include<string.h>
struct student{
	int roll;
	char name[30];
	float ca1_marks;
	float ca2_marks;
	float ca3_marks;
}s;
void create_record(){
	FILE *fp;
	fp=fopen("ca_detail.txt","a");
	printf("enter roll of student=");
	scanf("%d",&s.roll);
	printf("enter name of student=");
	scanf("%s",&s.name);
	printf("enter all ca marks of student=");
	scanf("%f \n %f \n %f",&s.ca1_marks,&s.ca2_marks,&s.ca3_marks);
	fwrite(&s,sizeof(s),1,fp);
	printf("\n record created succesfully\n");
	fclose(fp);
	
}

void search_record(){
	FILE *fp;
	int roll,found=0;
	fp=fopen("ca_detail.txt","r");
	printf("enter roll to serch=");
	scanf("%d",&roll);
	while(fread(&s,sizeof(s),1,fp)){
		if (s.roll==roll){
			printf("\nrecord found\n");
			printf("roll %d",s.roll);
			printf("name %s",s.name);
			printf("ca1 marks %f",s.ca1_marks);
			printf("ca2 marks %f",s.ca2_marks);
			printf("ca3 marks %f",s.ca3_marks);
			found=1;
			break;
		}
		
		
	}
	if(found==0){
			printf("record not found");
		}
		fclose(fp);
}

void modify_record(){
	FILE *fp;
	int roll ,found=0;
	fp=fopen("ca_detail.txt","r+");
	printf("enter roll to modify=");
	scanf("%d",&roll);
	while(fread(&s,sizeof(s),1,fp)){
		if(s.roll==roll){
			printf("\n record found\n");
			printf("roll %d",s.roll);
			printf("name %s",s.name);
			printf("ca1 marks %f",s.ca1_marks);
			printf("ca2 marks %f",s.ca2_marks);
			printf("ca3 marks %f",s.ca3_marks);
			printf("enter new student name= ");
			scanf("%s",&s.name);
			printf("new ca marks of student=");
			scanf("%f",&s.ca1_marks);
			fseek(fp,-sizeof(s),SEEK_CUR);
			fwrite(&s,sizeof(s),1,fp);
			scanf("%f",&s.ca2_marks);
			fseek(fp,-sizeof(s),SEEK_CUR);
			fwrite(&s,sizeof(s),1,fp);
			scanf("%f",&s.ca3_marks);
			fseek(fp,-sizeof(s),SEEK_CUR);
			fwrite(&s,sizeof(s),1,fp);
			printf("record modified succesfully");
			found=1;
			break;
			
		}
	}
	if(found==0){
		printf("record not found");
	}
	fclose(fp);
}



void delete_record(){
	FILE *fp,*temp;
	int roll,found=0;
	fp=fopen("ca_detail.txt","r");
	temp=fopen("temp.txt","w");
	printf("enter roll to delete=");
	scanf("%d",&roll);
	while(fread(&s,sizeof(struct student),1,fp)){
		if(s.roll!=roll){
			fwrite(&s,sizeof(struct student),1,temp);
		}
		else{
			found=1;
		}
	}
	if(found==0){
		printf("record not found\n");
		
	}
	else{
		printf("\nrecord deleted succesfully\n");
	}
	fclose(fp);
	fclose(temp);
	remove("ca_detail.txt");
	rename("temp.txt","ca_detail.txt");
}

void display_record(){
FILE *fp;
fp=fopen("ca_detail.txt","r");
if(fp==NULL){
printf("file can not be opened\n");
return;
}
printf("\n All Records are as follows\n");
printf("Roll\t Name\t CA1 Marks\t CA2 Marks\t CA3 Marks\n");
while(fread(&s,sizeof(s),1,fp)){
printf("%d\t %s\t %.2f\t\t %.2f\t\t %.2f\n",s.roll,s.name,s.ca1_marks,s.ca2_marks,s.ca3_marks);
}
fclose(fp);
}

int main(){
int choice;
while(1){
printf("\n\n");
printf("\t\t MENU\n");
printf("\t1. create record\n");
printf("\t2. search record\n");
printf("\t3. modify record\n");
printf("\t4. delete record\n");
printf("\t5. display record\n");
printf("\t6. exit\n");
printf("enter your choice=");
scanf("%d",&choice);
switch(choice){
case 1: create_record();
break;
case 2: search_record();
break;
case 3: modify_record();
break;
case 4: delete_record();
break;
case 5: display_record();
break;
case 6: exit(1);
default: printf("wrong choice,please enter correct choice\n");

