//**********###############SWAPING THE NUMBER###############***************//




        #include<stdio.h>
        int main()
        {
                int x,y,temp;
                printf("Enter the value of x and y\n");
                 scanf("%d%d",&x,&y);
                 printf("Before swapping\nx=%d\ny=%d\n",x,y);
         temp=x;
         x=y;
         y=temp;
                printf("After Swapping\nx=%d\ny=%d\n",x,y);
        return 0;
        }    
 
 
 /**********************OUTPUT****************
 
 
dell@dell-OptiPlex-7040:~$ gedit
dell@dell-OptiPlex-7040:~$ gcc swap.c
dell@dell-OptiPlex-7040:~$ ./a.out
Enter the value of x and y
5 5
Before swapping
x=5
y=5
After Swapping
x=5
y=5
*/
