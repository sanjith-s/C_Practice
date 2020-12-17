//Program to arrange elements of an array in ascending order :p
#include<stdio.h>

void main() {

    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    int arr[size],i;

    for (i=0; i<size; i++) {
        printf("ENTER THE elements :");
        scanf("%d",&arr[i]);
    }
    int j,k,a;
    for (j=0;j<size;j++) {
        for (k=0;k<size;k++) {
            if (arr[j] != arr[k]) {
                if (arr[j]<arr[k]) {
                	a = arr[j];
                    arr[j] = arr[k];
                    arr[k] = a;     
                }
            }     
            else { 
                continue;
            }
        }
    }
    int l;
    printf("the elements of the array are :\n");
    for (l=0;l<size;l++) {
        printf("%d\n",arr[l]);
    }
}
