//C Program to add a character after a reference character in a string

#include<stdio.h>

void main(){
    char array[256], temp;
    int counter1;
    printf("Enter the string : ");
    for (counter1 = 0; (counter1 < 256-1) && ((temp = getchar()) != '\n'); counter1++) {
        array[counter1] = temp;
    }
    array[counter1] = '\0';
    char chk, add;
    printf("Enter the reference character : ");
    scanf("%c",&chk);
    getchar();
    printf("Enter the character to add : ");
    scanf("%c",&add);
    int i, j, null = counter1;
    for ( i = 0; array[i] != '\0'; i++) {
        if (array[i] == chk) {
            for ( j = counter1; j > i; j-- ) {
                array[j] = array[j-1];
            }
            counter1++;
            null = counter1;
            array[null] = '\0';
            array[i+1] = add;
        }
    }
    int k;
    for (k=0; array[k] != '\0'; k++) {
        printf("%c",array[k]);
    }
}
