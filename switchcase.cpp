#include<stdio.h>
int main(){
	char (ch);
	scanf("%c",&ch);
	switch(ch){
		case 'm':
			printf("monday");
			break;
		case 't':
			printf("tuesday");
			break;
		case 'w':
			printf("wednesday");
			break;
		case 'T':
			printf("thursday");
			break;
		case 'f':
			printf("friday");
			break;
		case 's':
			printf("saturday");
			break;
		case 'S':
			printf("sunday");
			break;
		default:
			printf("invalid");
	}
	
}
