/*
2. Write a function to calculate the factorial with given integer n,
which satisfies the following:
	if n is odd, factorial = 1 * 3 * 5 * … * n
	if n is even, factorial = 2 * 4 * 6 * … * n
Ex:
______________________________________
| Input: 11                          |
| Output: 10395                      |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//testing variable, applying it to your algorithm for auto-evaluating
	//Your codes here
	int n;
    int factorial1 = 1; 
    int factorial2 = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(i%2==0)
            factorial1 *= i;
        if(i%2==1)
            factorial2 *= i;
    }
    printf("Factorial of even: %d\n", factorial1);
    printf("Factorial of odd: %d", factorial2);
    return 0;
}