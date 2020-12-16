#include<stdio.h>

void main() {
	int i;
	 printf("size = ");
	 scanf("%d",&i);
	int a[i];
	
	int b;
	for (b=0;b < i;b++) {
		printf("element :");
		scanf("%d",&a[b]);
	}
	
	int c;
	for (c=0;c < i;c++) {
		printf("%d\n",a[c]);
	}
}
