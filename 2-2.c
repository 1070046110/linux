#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

void mp(int a[]){
int i,j;
int t;
for(i=0;i<100;i++){
for(j=0;j<100-i;j++){
if(a[j]<a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
}
