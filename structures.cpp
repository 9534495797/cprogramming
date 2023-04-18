//#include<stdio.h>
//
//struct number{
//		int x;
//		float y;
//		
//	};// this portion is declare
//	int main(){//this portion is intilize
//		struct number n;
//		n.x=23;
//		n.y=32.4;
//	 //n is variable and struct nmber is data type, x is memeber
//	 printf("%d %f",n.x,n.y);
//	}

//question
#include<stdio.h>
//struct car{
//	char *name;
//	int year;
//	int price;
//};
//int main(){
//	struct car n1;
//	struct car n2;
//	n1.price=4500000;
//	n1.year=2028;
//	n1.name="fortuner";
//	n2.price=4500000;
//	n2.year=2028;
//	n2.name="fortuner";
//	
//	printf("%d %d %s\n",n1.price,n1.year,n1.name);
//		printf("%d %d %s\n",n2.price,n2.year,n2.name);
//	
//}
// same question by taking input from the user
//struct car{
//	char name[20];
//	int year;
//	int price;
//};
//int main(){
//	struct car n1;
//	struct car n2;
//	printf("enter the values");
//	scanf("%s",&n1.name);
//	scanf("%d",&n1.year);
//	scanf("%d",&n1.price);
//	
//	
//	
//	printf("%d %d %s\n",n1.year,n1.price,n1.name);
//		//printf("%d %d %s\n",n2.price,n2.year,n2.name);
//	
//}




//one student info
//struct student{
//	char name[20];
//	int reg;
//	int marks1;
//	int marks2;
//	int marks3;
//      
//};
//int main(){
//	struct student n;
//	
//	printf("enter the values");
//	scanf("%s",&n.name);
//	scanf("%d",&n.reg);
//	scanf("%d",&n.marks1);
//	scanf("%d",&n.marks2);
//	scanf("%d",&n.marks3);
//	
//	
//	
//	printf("%d  %d %d %d %s\n",n.marks1,n.marks2,n.marks3,n.reg,n.name);
//		//printf("%d %d %s\n",n2.price,n2.year,n2.name);
//	
//}



//student detail chart  this is sort form of last question by concept of array
//we can store multiple students records by using this
//#include<stdio.h>
//struct student{
//	char name[25];
//	int regno;
//	float marks[3];
//	
//}s[3];
//int main()
//{
//	int i,j;
//	for(j=0;j<3;j++){
//	
//	printf("enter the values\n");
//	scanf("%s",&s[j].name);
//	scanf("%d",&s[j].regno);
//	for(i=0;i<3;i++){
//		scanf("%f",&s[j].marks[i]);
//	}
//}
//    for(j=0;j<3;j++){
//	
//	printf("%s  %d",s[j].name,s[j].regno);
//	for(i=0;i<3;i++){
//		printf("%f ",s[j].marks[i]);
//	}
//	printf("\n");
//}
//}
//practice basic of structure
//#include<stdio.h>
//struct bike{
//	char *name;
//	float price;
//	int model;
//}n;
//int main(){
//	n.model=2019;
//	n.name="apache";
//	n.price=137000;
//	printf("%d %s %f\n",n.model,n.name,n.price);
//}
//struct bike{
//	char name[20];
//	int model;
//	float price;
//}n;
//int main(){
//	printf("your input= ");
//	scanf("%s",&n.name);
//	scanf("%d",&n.model);
//	scanf("%f",&n.price);
//	printf("%s %d %f",n.name,n.model,n.price);
//}
//struct student{
//	char name1[15];
//	char name2[15];
//	char name3[15];
//	int reg1;
//	int reg2;
//	int reg3;
//	float marks1;
//	float marks2;
//	float marks3;
//	
//	
//}n;
//int main(){
//	scanf("%s",&n.name1);
//	scanf("%s",&n.name2);
//	scanf("%s",&n.name3);
//	scanf("%d",&n.reg1);
//	scanf("%d",&n.reg2);
//	scanf("%d",&n.reg3);
//	scanf("%f",&n.marks1);
//	scanf("%f",&n.marks2);
//	scanf("%f",&n.marks3);
//	printf("%s  %d  %f \n ",n.name1,n.reg1,n.marks1);
//	printf("%s  %d  %f \n ",n.name2,n.reg2,n.marks2);
//	printf("%s  %d  %f \n ",n.name3,n.reg3,n.marks3);
//	
//}


struct students{
	char name1[25];
	char name2[25];
	int reg1;
	int reg2;
	int marks1;
	int marks2;
	int marks3;
	int marks4;
	int marks5;
	int marks6;
	int marks7;
	int marks8;
	int marks9;
	int marks10;
	int marks11;
	int marks12;
	
}n;
int main(){
	scanf("%s",&n.name1);
	scanf("%d",&n.reg1);
	scanf("%d",&n.marks1);
	scanf("%d",&n.marks2);
	scanf("%d",&n.marks3);
	scanf("%d",&n.marks4);
	scanf("%d",&n.marks5);
	scanf("%d",&n.marks6);
	scanf("%s",&n.name2);
	scanf("%d",&n.reg2);
	scanf("%d",&n.marks7);
	scanf("%d",&n.marks8);
	scanf("%d",&n.marks9);
	scanf("%d",&n.marks10);
	scanf("%d",&n.marks11);
	scanf("%d",&n.marks12);
	printf("%s %d %d %d %d %d %d %d\n",n.name1,n.reg1,n.marks1,n.marks2,n.marks3,n.marks4,n.marks5,n.marks6);
	printf("%s %d %d %d %d %d %d %d\n",n.name2,n.reg2,n.marks7,n.marks8,n.marks9,n.marks10,n.marks11,n.marks12);
	
}




