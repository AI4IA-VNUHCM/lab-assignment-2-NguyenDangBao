/*
3. Write a function to represent a given integer as product of prime numbers
Ex:
______________________________________
| Input: 24                          |
| Output: 2 * 2 * 2 * 3              |
|____________________________________|
*/
#include<stdio.h>  
  
void primefactors(int num)  
{  
    int count;  
  
    printf("\nPrime Factors of %d are ..\n", num);  
    for(count = 2; num > 1; count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d ", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive integer\n");  
    scanf("%d", &num);  
  
    primefactors(num);  
  
    return 0;  
}  
