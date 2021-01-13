#include<stdio.h>
#include<time.h>

void main(){
    int big,m,n;

    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);

    clock_t t=clock();
    while(m != n){
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
    }
    t=clock()-t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time Taken by Successive algo is %f \n",time_taken);
    printf("GCD is %d",m);
}
