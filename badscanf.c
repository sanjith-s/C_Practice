#include<stdio.h>
 
int main(void)
{
	char ch;
	printf("Enter one char");
	scanf("%c", &ch);
	printf("%c\n",ch);
	
    char c;
     
    printf("Input No.1\n");
    scanf("%c", &c);
    printf("c = %c\n", c);
     
    printf("Input No.2\n");
    scanf(" %c", &c);
    printf("c = %c\n", c);
     
    printf("Input No.3\n");
    scanf(" %c", &c);
    printf("c = %c\n", c);
    
    int a;
    printf("enter number:");
    scanf("%d",&a);
    printf("%d\n",a);
    
    char name[2];
    printf("enter yor name:\n");
    scanf(" %c",&name);
    printf("your name is: %s",name);
     
    return 0;
}
