#include<stdio.h>
#include<time.h>

void main()
{

  int m,n;

  printf("Enter two numbers: ");
  scanf("%d %d", &m, &n);

  int i, j, isPrime;
  int factors1[100],factors2[100];
  int k=0;
  int len1,len2;

  clock_t t=clock();

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
  t=clock()-t;
  double time_taken = ((double)t)/CLOCKS_PER_SEC;
  printf("Time Taken by Successive algo is %f \n",time_taken);
  printf("GCD is %d",gcd);
}
