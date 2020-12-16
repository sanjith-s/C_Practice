
// C program to generate random numbers
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
 
int main(void)
{
    int randmax;
    printf("Welcome to Number guess game\n\nEnter the max number:\n");
    scanf("%d",&randmax);
	srand(time(0));
    int value, guess;
    value = (rand() % randmax + 1);
    printf("Enter your guess :\n");
    scanf("%d",&guess);
	while (guess != value) {
		if (guess > value) {
			printf("Your guess is too high \n");
		}
		else {
			printf("Your guess is too low \n");
		}
		printf("Enter your guess : \n");
		scanf("%d",&guess);
	}
	printf("You have guessed the correct number !!!\n");
	printf("%d",value);
 
    return 0;
}
