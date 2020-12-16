#include<stdio.h>

void main() {
	char a; int n;
	printf("enter the characters (including 'n'):");
	n = -1;
	do {
		scanf("%c",&a);
		printf("%d\n",n);
		printf("%c\n",a);
		n++;
		printf("%d\n",n);
		printf("%c\n",a);
	}while (a != 'n');
	printf("the number of characters before 'n' is %d\n",n);
	printf("%c",a);
}
