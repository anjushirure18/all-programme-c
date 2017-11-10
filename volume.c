//**************VOLUME OF SPHERE*********************//





#include<stdio.h>
int main()
{
	int r;
	float volume,pi=3.142;
	//where pi=3.142
	printf("Enter the radius:");
	scanf("%d",&r);

	volume=4/(float)3*pi*r*r*r;
  printf("volume of sphere=%f",volume);
  return 0;
}

/********************OUTPUT*********************


dell@dell-OptiPlex-7040:~$ gedit volume.c
dell@dell-OptiPlex-7040:~$ gcc volume.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter the radius:5
volume of sphere=523.666687
*/
