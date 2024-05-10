#include<stdio.h>
#include<string.h>
//int main(){
//	//In C, a string is an array of characters, terminated by a null character '\0'. Here's an example of a string:
//	char str[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//printf("%s",str);
//}

//2
//String Input and Output
//You can use the scanf() function to input a string from the user, and the printf() function to output a string to the console. Here's an example:
//scss
//int main(){
//	char str[50];
//printf("Enter a string: ");
//scanf("%s", str);
//printf("You entered: %s", str);
//}


//3
//You can use the strcat() function to concatenate two strings. Here's an example:
//int main(){
//	char str1[50] = "Hello";
//char str2[50] = "World";
//strcat(str1, str2);
//printf("Concatenated string: %s+%s", str1);
//	
//}



//4
//String Comparison
//You can use the strcmp() function to compare two strings. It returns 0 if the strings are equal, a negative value if the first string is less than the second, and a positive value if the first string is greater than the second. Here's an example:
//arduino
int main(){
	char str1[50] = "vorld";
char str2[50] = "world";
int result = strcmp(str1, str2);
if (result == 0) { 
  printf("The strings are equal");
} else if (result < 0) {
  printf("The first string is less than the second");
} else {
  printf("The first string is greater than the second");
}
	
}




