#include<stdio.h>
//write
//int main(){
//	FILE  *fp;// file is keword here so in capital *fp is pointer
//	fp=fopen("zero123.txt","w");//create file part
//	fprintf(fp,"computer programming");  // write part
//	fclose(fp); // permanent storage  close the file
//	
//}



//int main(){
//	FILE *fp;
//	fp=fopen("pra.txt","w");
//	fprintf(fp,"hello world");
//	fclose(fp);
//}
//int main(){
//	FILE *fp;
//	fp=fopen("pra.txt","a");
//	fprintf(fp,"hello java");
//	fclose(fp);
//}

//
//int main(){
//	FILE  *fp;// file is keword here so in capital *fp is pointer
//	fp=fopen("zero123.txt","w");//create file part
//	fprintf(fp,"hello world");  //it will replace old text in same file
//	fclose(fp); // permanent storage  close the file
//	
//}

//read
//int main(){
//	FILE  *fp;// file is keword here so in capital *fp is pointer
//	char buff[300];// array of size 300
//	fp=fopen("zero123.txt","r");//create file part  it will read
//	fscanf(fp,"%s",buff);  // read part
//	printf("%s",buff);
//	fclose(fp); // permanent storage  close the file
//	
//}  it will not read full data
//int main(){
//	FILE *fp;
//	fp=fopen("ab.txt","w");
//	fprintf(fp,"jay ho");
//	fclose(fp);
//}

//int main(){
//	FILE *fp;
//	char buff[300];
//	fp=fopen("ab.txt","r");
//	while(fscanf(fp,"%s",buff)!=EOF){
//		printf("%s",buff);
//	}
//	fclose(fp);
//	
//}
//int main(){
//	FILE *fp;
//	fp=fopen("abc.txt","w");
//	fprintf(fp,"hello world");
//	fclose(fp);
//}
//int main(){
//	FILE *fp;
//	fp=fopen("abc.txt","a");
//	fprintf(fp,"\ni am ankit chaubey\n");
//	fclose(fp);
//}
int main(){
	FILE *fp;
	char buff[300];
	fp=fopen("abc.txt","r");
	while(fscanf(fp,"%s",buff)!=EOF){
		printf("%s",buff);
		
	}
	fclose(fp);
}
//int main(){
//	FILE *fp;
//	fp=fopen("abc.txt","w");
//	fprintf(fp,"hello boy");
//	fclose(fp);
//}
//int main(){
//	FILE *fp;
//	fp=fopen("abc.txt","a");
//	fprintf(fp,"hello girls");
//	fclose(fp);
//}
//int main(){
//	FILE *fp;
//	char buff[300];
//	fp=fopen("abc.txt","r");
//	while(fscanf(fp,"%s",buff)!=EOF){
//		printf("%s",buff);
//	}
//	fclose(fp);
//}
//int main(){
//	FILE *fp;
//	char buff[300];
//	fp=fopen("abc.txt","r");
//	while(fscanf(fp,"%s",buff)!=EOF){
//		printf("%s",buff);
//	}
//	fclose(fp);
//}

//int main(){
//	FILE  *fp;// file is keword here so in capital *fp is pointer
//	char buff[300];// array of size 300
//	fp=fopen("zero123.txt","r");//create file part  it will read
//	while(fscanf(fp,"%s",buff)!=EOF){  // read part eof means end of the file
//	printf("%s ",buff);}
//	fclose(fp); // permanent storage  close the file
//	
//}  it will read the full data in the file 

//append

//int main(){
//	FILE  *fp;// file is keword here so in capital *fp is pointer
//	fp=fopen("zero123.txt","a");//create file part
//	fprintf(fp," python programming");  // write part
//	fclose(fp); // permanent storage  close the file
//	
//}

//example for student record  like name reg mo and percentage
//int main(){
//	char name[25];
//	int reg;
//	float percent;
//	FILE  *fp;// file is keword here so in capital *fp is pointer
//	fp=fopen("zstudent1.txt","w");//create file part
//	printf("your data=\n");
//	scanf("%d",&reg);
//	fprintf(fp,"reg =%d\n",reg);  // write part
//	scanf("%s",&name);
//	fprintf(fp,"name =%s\n",name);
//	scanf("%f",&percent);
//	fprintf(fp,"percent =%f\n",percent);
//	fclose(fp); // permanent storage  close the file
//	
//}
//int main(){
//	
//	char name[20];
//	int reg;
//	int marks;
//	FILE *fp;
//	fp=fopen("abd.txt","w");
//	printf("your input\n");
//	scanf("%s",&name);
//	fprintf(fp,"%s\n",name);
//	printf("your input\n");
//	scanf("%d",&reg);
//	fprintf(fp,"%d\n",reg);
//	printf("your input\n");
//	scanf("%d",&marks);
//	fprintf(fp,"%d\n",marks);
//	fclose(fp);
//}



// file handling for structure  write
//struct student{
//	int reg;
//	char name[20];
//}s;
//int main(){
//	FILE *fp;
//	printf("enter the data\n");
//	scanf("%s",&s.name);
//	printf("enter the data\n");
//	scanf("%d",&s.reg);
//	fp=fopen("zkocaz.dat1","wb");//this is binary file because it is structure
//	fwrite(&s,sizeof(s),1,fp);// 1 is record here which is one here means variable only s, these all are parameter here
//	
//}


//struct student{
//	char name[20];
//	int age;
//}s;
//int main(){
//	FILE *fp;
//	fp=fopen("abe.txt","wb");
//	printf("your input\n");
//	scanf("%s",&s.name);
//	printf("your input\n");
//	scanf("%d",&s.age);
//	fwrite(&s,sizeof(s),1,fp);
//}


//struct car{
//	char name[30];
//	float price;
//}c;
//int main(){
//	printf("your input\n");
//	scanf("%s",&c.name);
//	printf("your input\n");
//	scanf("%f",&c.price);
//	FILE *fp;
//	fp=fopen("abe.txt","wb");
//	fwrite(&c,sizeof(c),1,fp);
//	fclose(fp);
//	
//}


//read



//struct student{
//	int reg;
//	char name[20];
//}s;
//int main(){
//	FILE *fp;
//	printf("enter the data\n");
//	scanf("%s",&s.name);
//	printf("enter the data\n");
//	scanf("%d",&s.reg);
//	fp=fopen("zkocaz.dat1","wb");//this is binary file because it is structure
//	fwrite(&s,sizeof(s),1,fp);// 1 is record here which is one here means variable only s, these all are parameter here
//	fclose(fp);
//	FILE *fp1;
//	fp1=fopen("zkocaz.dat1","rb");
//	if(fp1==NULL){
//		printf("file not exist");
//	}
//	else{
//		fread(&s,sizeof(s),1,fp1);
//		printf("%s %d",s.name,s.reg);
//		fclose(fp1);
//	}
//	}




//struct car{
//	char name[20];
//	float price;
//}c;
//int main(){
//	printf("your input\n");
//	scanf("%s",&c.name);
//	printf("your input\n");
//	scanf("%f",&c.price);
//	FILE *fp;
//	fp=fopen("abf.txt","wb");
//	fwrite(&c,sizeof(c),1,fp);
//	fclose(fp);
//	FILE *fp1;
//	fp1=fopen("abf.txt","rb");
//	if(fp1==NULL){
//		printf("file not exist");
//	}
//	else{
//		fread(&c,sizeof(c),1,fp1);
//		printf("%s %f",c.name,c.price);
//		fclose(fp1);
//	}
//}



	
//question for 5 records
//#include<stdio.h>
//struct student{
//int regno;
//char name[20];
//}s[5];
//int main(){
//FILE *fp;
//int i;
//for(i=0;i<5;i++){
//printf("enter the value for name\n");
//scanf("%s",&s[i].name);
//printf("enter the register number\n");
//scanf("%d",&s[i].regno);}
//fp=fopen("zkcoaz.dat","wb");
//fwrite(&s,sizeof(s),5,fp);
//fclose(fp);
//FILE *fp1;
//fp1=fopen("zkcoaz.dat","rb");
//if(fp1==NULL){
//printf("file not created");
//}
//else{
//fread(&s,sizeof(s),5,fp1);
//for(i=0;i<5;i++){
//printf("%s %d",s[i].name,s[i].regno);
//}
//}
//fclose(fp1);
//}
 //reading text file in sructure which not possible in str it read in binary format
 



/*20/04
idea for ca
using structures and files do insert display delete and update	
in insert use mode append
in display use mode read
in delete use read and write delete according to roll no. as user choice 
in update use read and write
 make different function for all 4 modes
use loops and swich cases
name roll marks
*/
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define FILENAME "ca_evaluations.txt"
//#define MAX_SIZE 100
//
//// Structure for CA evaluation
//struct ca_evaluation {
//    char name[MAX_SIZE];
//    int roll;
//    int ca_marks;
//};
//
//// Function to display menu and get user choice
//int menu() {
//    int choice;
//    printf("\nMENU:\n");
//    printf("1. Insert a CA evaluation\n");
//    printf("2. Update a CA evaluation\n");
//    printf("3. Display all CA evaluations\n");
//    printf("4. Delete a CA evaluation\n");
//    printf("5. Exit\n");
//    printf("Enter your choice: ");
//    scanf("%d", &choice);
//    return choice;
//}
//
//// Function to insert a CA evaluation
//void insert() {
//    struct ca_evaluation eval;
//    printf("\nEnter student name: ");
//    scanf("%s", eval.name);
//    printf("Enter student roll: ");
//    scanf("%d", &eval.roll);
//    printf("Enter CA marks: ");
//    scanf("%d", &eval.ca_marks);
//    FILE *fp = fopen(FILENAME, "a");
//    fprintf(fp, "%s %d %d\n", eval.name, eval.roll, eval.ca_marks);
//    fclose(fp);
//    printf("CA evaluation added successfully!\n");
//}
//
//// Function to update a CA evaluation
//void update() {
//    int roll, found = 0;
//    struct ca_evaluation eval;
//    printf("\nEnter student roll to update: ");
//    scanf("%d", &roll);
//    FILE *fp = fopen(FILENAME, "r");
//    FILE *temp = fopen("temp.txt", "w");
//    while (fscanf(fp, "%s %d %d", eval.name, &eval.roll, &eval.ca_marks) != EOF) {
//        if (eval.roll == roll) {
//            found = 1;
//            printf("Enter updated CA marks: ");
//            scanf("%d", &eval.ca_marks);
//            fprintf(temp, "%s %d %d\n", eval.name, eval.roll, eval.ca_marks);
//            printf("CA evaluation updated successfully!\n");
//        }
//        else {
//            fprintf(temp, "%s %d %d\n", eval.name, eval.roll, eval.ca_marks);
//        }
//    }
//    fclose(fp);
//    fclose(temp);
//    remove(FILENAME);
//    rename("temp.txt", FILENAME);
//    if (!found) {
//        printf("CA evaluation not found!\n");
//    }
//}
//
//// Function to display all CA evaluations
//void display() {
//    struct ca_evaluation eval;
//    printf("\nAll CA evaluations:\n");
//    FILE *fp = fopen(FILENAME, "r");
//    while (fscanf(fp, "%s %d %d", eval.name, &eval.roll, &eval.ca_marks) != EOF) {
//        printf("%s %d %d\n", eval.name, eval.roll, eval.ca_marks);
//    }
//    fclose(fp);
//    
//    
//}

//#include<stdio.h>
//int main();
//
//{
//char ch,h;
//FILE *ptr;
//scanf("%c",&Ch);
//ptr=fopen("zch.txt","w+");
//fputc(ch,ptr);
//h=fgetc(ptr);
//printf("%c",h);
//fclose(ptr);
//}  it is for get char and put char


   

