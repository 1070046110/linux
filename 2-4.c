#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int sum1(int a[]){
int sum=0;
for(int i=0;i<100;i++){
sum=sum+a[i];
}
return sum;
}

int avg1(int sum){
int avg=0;
avg=sum/100;
return avg;
}
