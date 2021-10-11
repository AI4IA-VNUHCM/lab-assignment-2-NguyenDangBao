/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float d;
	
	printf("Input the travel distance (in km) : ");
	
	scanf("%f", &d);
	
	float ans= 15000;
	
	if (d > 2 && d <30) ans+= (d-2)*4*2000;
	
	if (d>30) ans+= 28*4*2000 +(d-30)*5000;
	
	printf("cost: %.2f VND", ans);
	
	return 0;
}
