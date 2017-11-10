//***********************FACTORIAL NUMBER*******************//


        #include<stdio.h>
        void main()
        {
                int fact=1,num,i; //num is any number,fact is factorial number,i is initiating index
                printf("Enter the number:");
                        scanf("%d",&num);
                for(i=1;i<=num;i++)
        {
        fact=fact*i;
        }
                printf("Factorial number %d is %d",num,fact);
        }

/****************OUTPUT*********************/


dell@dell-OptiPlex-7040:~$ gedit
dell@dell-OptiPlex-7040:~$ gcc fract.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter the number:6
Factorial number 6 is 720
