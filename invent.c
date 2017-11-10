//********&&&&&&&&&&&%%%%%%%$""""SUM SUBTRACTION MULTIPLICATION DIVISION""""$%%%%%%%%%%%%&&&&&&&&&&&&&&***********//




        #include<stdio.h>
        int main()
        {
                int a,b,sum,subtract,multiply,divide;
                printf("enter two numbers:");
                scanf("%d%d",&a,&b);
        sum=a+b;
        subtract=a-b;
        multiply=a*b;
        divide=a/b;
                printf("sum of two numbers=%d",sum);
                printf("subtraction of two numbers=%d",subtract);
                printf("multiplication of two numbers=%d",multiply);
                printf("division of two numbers=%d",divide);
        return 0;
        }


/***************************OUTPUT*********************
dell@dell-OptiPlex-7040:~$ gedit
dell@dell-OptiPlex-7040:~$ gcc sum.c
dell@dell-OptiPlex-7040:~$ ./a.out
enter two numbers:5 5 
sum of two numbers=10subtraction of two numbers=0multiplication of two numbers=25division of two numbers=1
*/
