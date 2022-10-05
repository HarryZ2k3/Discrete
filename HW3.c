//ITITWE21039_HUYNH PHUONG DAI
#include <stdio.h>
//Fibonacci without the use of recursion (Use of loops instead)
int non_recursive(int index)
{
    if (index <=1)
        return index;
    int t1=0;
    int t2=1;
    int t3=t1+t2;
    while(t3<=index)
    {
        printf("%d ",t3);
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }    
}
//Recursion processing block
//The idea is for the fibonacci number to run up to the max of the index then print out
//individual number according to the number of terms in between
int recursive(int index)        
{
    if(index==0 || index==1)
        return index;
    else 
        return(recursive(index-1) + recursive(index-2));
}

int get_number_of_terms(int index)
{
    int terms = 2;
    int t1=0;
    int t2=1;
    int t3=t1+t2;
    while(t3<=index)
    {
        terms++;
        t1=t2;
        t2=t3;
        t3=t1+t2;
    }
    return terms;
}
//
int main()
{
    int mode=0;
    int index;
    printf("Enter the number you want your fibonacci sequence to print up to:\n");
    scanf("%d",&index);
    //index number to go up to
    printf("What mode would you like your Fibonacci sequence to be processed it \n 1 to run it non-recursively \t 2 to run it recursively\n ");
    scanf("%d",&mode);
    //User entered mode for processing
    //Non-recursive mode
    if (mode==1)
    {
        if (index>=2)
        {
        printf("The Fibonacci Sequence: 0 1 ");
        non_recursive(index);
        printf("\nDone!");
        }
        else if(index==1)
        {
        printf("The Fibonacci Sequence: 1 ");
        }
    }

    //Recursive mode
    else if (mode==2)
    {
            int m=0;
            int terms = get_number_of_terms(index);
            printf("The Fibonacci Sequence: ");
            for(int i=1; i<=terms;i++)
            {
                printf("%d ",recursive(m));
                m++;
            }
    }

    return 0;
}