#include<time.h>
#include<stdio.h>

void gcd_successive(int m, int n){
    int big;
    while(m != n){
        if(m>n)
        {
            m= m-n;
        }
        else
        {
            n=n-m;
        }
    }
    printf("GCD is %d \n",m);
    return;
}
void gcd_euclid(int m, int n)
{
    int r;
        while(n!=0){
           r= m%n;
           m=n;
           n=r;
        }
        printf("GCD is %d \n",m);
        return;
}

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

void gcd_middle_school(int m, int n){
    int i, j, isPrime;
    int factors1[100],factors2[100];
    int k=0;
    int len1,len2;
    for(i=2; i<=m; i++)
    {
        if(m%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                factors1[k]=i;
                k=k+1;
                len1=len1+1;
            }
        }
    }
    k=0;
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            isPrime = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1)
            {
                factors2[k]=i;
                k=k+1;
                len2 =len2+1;
            }
        }
    }
    i=0;
    j=0;
    int gcd=1;
    while(len1 > i && len2 > j){

      if (factors1[i] < factors2[j]) {
          i++;

       }else if(factors2[j] < factors1[i]){
         j++;

       } else {
        gcd=gcd*factors1[i];
        i++;
        j++;
      }
   }
   printf("GCD is %d \n",gcd);
   return;
}

void main(){

int b,a;
char c;
clock_t t;
double time_taken;
int temp=1;
while(temp==1){
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1 for Successive subtraction \n2 for Euclid's algorithm\n3 for Consecutive integer\n4 Middle school procedure \n");
    scanf(" %c",&c);
    switch(c)
    {
            case '1':
                    t=clock();
                    gcd_successive(a,b);
                    t=clock()-t;
                    time_taken = ((double)t)/CLOCKS_PER_SEC;
                    printf("Time Taken by Successive algo is %f \n\n",time_taken);
                    break;
            case '2':
                    t=clock();
                    gcd_euclid(a,b);
                    t=clock()-t;
                    time_taken = ((double)t)/CLOCKS_PER_SEC;
                    printf("Time Taken by Euclid's algo is %f \n\n",time_taken);
                    break;
            case '3':
                    t=clock();
                    gcd_consecutive(a,b);
                    time_taken = ((double)t)/CLOCKS_PER_SEC;
                    printf("Time taken by Consecutive integer is %f \n]n",time_taken);
                    break;
            case '4':
                    t=clock();

                    gcd_middle_school(a,b);
                    time_taken = ((double)t)/CLOCKS_PER_SEC;
                    printf("Time taken by Middle School is %f \n \n",time_taken);
                    break;
            default:
                    printf("You provided the wrong input");
                    temp=0;
                    break;

      }
    }
}
