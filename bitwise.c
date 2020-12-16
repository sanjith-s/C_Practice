#include <stdio.h>

void main() {
	int num,place,shift,result;
	
	printf("Enter the number:");
	scanf("%d",&num);
	printf("Enter the position(Take First position as zero):");
	scanf("%d",&place);
	
	shift = 1 << place;
	result = num & shift;
	
	if (result != 0) {
		printf("The position %d of %d is set\n",place,num);
	}
	else {
		printf("The position %d of %d is not set\n",place,num);
		int c;
		printf("Enter '1' to set the position %d or press '2' to change position or 'other number' to exit :",num);
		scanf("%d",&c);
		
		if (c == 1) {
			int setbit;
			setbit = (1 << place) | num;
			printf("The bit has been successfully set and the result is %d\n",setbit);
		}
		else if (c==2){
			int setbit1,place1;
			printf("Enter the position: ");
			scanf("%d",&place1);
			setbit1 = (1 << place1) | num;
			printf("The bit has been successfully set and the result is %d\n",setbit1);
		}
		else {
		}
	}
}
