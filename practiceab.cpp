struct student{
	char name;
	int marks;
}s;
int main(){
	printf("enter name=",&s.name);
	scanf("%s",&s.name);
	printf("enter marks= ",&s.marks);
	scanf("%d",&s.marks);
	printf("%s %d",s.name,s.marks);
	
	
	
}
