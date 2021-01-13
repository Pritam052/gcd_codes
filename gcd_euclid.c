#include<time.h>
#include<stdio.h>

void main()
{
    int r,m,n;

    printf("Enter two numbers: ");
    scanf("%d %d",&m,&n);

    clock_t t=clock();

        while(n!=0){
           r= m%n;
           m=n;
           n=r;
        }

        t=clock()-t;
        double time_taken = ((double)t)/CLOCKS_PER_SEC;
        printf("Time Taken by Consecutive algo is %f \n",time_taken);
        printf("GCD is %d",m);
}
