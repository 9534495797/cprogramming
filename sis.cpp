#include<stdio.h>
int main(){
	FILE *fp;
	fp=fopen("nb.txt","w");
	fp=fwrite("hello world");
	fscanf(fp);
}
