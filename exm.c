//***********************PROGRAM USING CONDITIONAL OPERATER*****************************//




#include<stdio.h>
void main()
{
		int n;//n is a any number
		printf("Enter the numbers:");
		scanf("%d",&n);
	n%2==0?printf("n %d a is  even number",n):printf("n  %d is a odd number",n);
//using conditional operater
} 
//n divisible by 2 is a even number





/*****************OUTPUT************************




dell@dell-OptiPlex-7040:~$ gcc exm.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter the numbers:9
n  9 is a odd number

*/
