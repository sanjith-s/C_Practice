#include <stdio.h>
#include <stdlib.h>
 
void main() {
	int num,place,shift,result;
	
	printf("************************////BITWISE OPERATIONS////**************************\n\n\n");
	int option;
	printf("Select the appropriate action number : \n\n1. Check Bit position\n2. Toggle Bit position\n3. Complement of a number\n4. Exit\n\nOption : ");
	scanf("%d",&option);

	if (option == 1 || option == 2) {
		printf("Enter the number:");
		scanf("%d",&num);
		printf("Enter the position(Take First position as zero):");
		scanf("%d",&place);
		
		if (option == 1) {
			shift = 1 << place;
			result = num & shift;
			
			if (result != 0) {
				printf("The position %d of %d is set\n",place,num);
			}
			else {
				printf("The position %d of %d is not set\n",place,num);
				int c;
				printf("Enter '1' to set the position %d or press '2' to change position or 'other number' to exit :",place);
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
					exit(0);
				}
			}
		}
		else {
			shift = 1 << place;
			result = num ^ shift;
			printf("The %d place of %d is toggled and the resulting number is : %d\n",place, num, result);
		}
	}
	else if (option == 3) {
		printf("Enter the number : ");
		scanf("%d",&num);
		
		int result = ~num;
		printf("The complement pf %d is : %d\n",num,result);
	}
	else if (option == 4) {
		exit(0);
	}
	else {
		printf("Invalid Input\n");
	}	
}
