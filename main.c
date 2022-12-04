/*
 * @file	PerfectNumberFinder.c
 * @Author: 	Batuhan ARSLAN
 * @Purpose: 	Algorithm finds the perfect numbers. 
 * @Date:	04/12/2022
 */
/* Includes *******************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(){

	int n = 0, sum = 0, i;
	printf("Enter a number : ");
	scanf("%d", &n);

	for (i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum = sum + i;
		}
	}
	printf("Sum  = %d \n", sum);
	if (sum == n)
	{
		printf("It's a Perfect Number.");
	}
	else {
		printf("It is not a Perfect Number.");
	}
	
	return 0;
}
