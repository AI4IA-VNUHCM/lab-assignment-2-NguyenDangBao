/*
4.	Receive an array of n integers, n is even. 
Sort the first half in increasing order and second half decreasing order
Ex:
 ____________________________________
| Input:  8 7 9 2 1 5 2 0            |
| Output: 2 7 8 9 5 2 1 0            |
|____________________________________|
*/

#include <stdio.h>

void DecreaseArray(int arr[100], int n){
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
}
 void IncreaseArray(int arr[100], int n){
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j]= temp;
            }
        }
    }
}
int main(){
    int n, arr[100];
    printf("Enter the number n: ");
    scanf("%d", &n);
    printf("Enter numbers in an array: ");
    if(n%2 == 0){
        for(int i=0; i < n; i++){
            scanf("%d", &arr[i]);
        }
        DecreaseArray(arr, n);
        printf("Decreasing order:\n");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
        IncreaseArray(arr, n);
        printf("\nIncreasing order:\n");
        for(int i=0; i<n; i++){
            printf("%d ", arr[i]);
        }
    }
    else printf("Try again");
    return 0;
}