//C Program to delete a character in a string

#include<stdio.h>

void main() {
    char array[256], temp;
    int counter1;
    printf("Enter the string : ");
    for (counter1 = 0; (counter1 < 256-1) && ((temp = getchar()) != '\n'); counter1++) {
        array[counter1] = temp;
    }
    array[counter1] = '\0';
    char chk;
    printf("Enter the character to remove : ");
    scanf("%c",&chk);
    int i;
    for ( i = 0; array[i] != '\0'; i++) {
        if (array[i] == chk) {
        	int j;
            for (j = i; j < counter1; j++ ) {
                array[j] = array[j+1];
            }
            i--;
        }
    }
    array[i] = '\0';
    int k;
    for (k=0; array[k] != '\0'; k++) {
        printf("%c",array[k]);
    }
}
