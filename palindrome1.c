#include<stdio.h>
int main(void) {

    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size],i;

    for (i=0; i<size; i++) {
        printf("ENTER THE elements :");
        scanf("%d",&arr[i]);
    }

    int j,k;

    for (i=0,j=size-1;i<size && j>0;i++,j--) {
        if (arr[i]==arr[j]) {
           continue;
        }
        else {
            return 1;
            break;
        }
    }
    printf("Palindome exist\n");
    }