#include<stdio.h>
#include<time.h>

void gcd_consecutive(int m, int n)
{
    int t;
    if(m>n)
            t=m;
        else
            t=n;
    while(1!=0)
    {
        if(m%t==0){
            if(n%t==0)
                printf("GCD is %d \n",t);
                return;
        }
        t=t-1;
    }
}

void main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    clock_t t=clock();
    gcd_consecutive(a,b);
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken by Consecutive integer is %f \n",time_taken);
}
