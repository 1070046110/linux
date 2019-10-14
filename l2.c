#include "one.h"

int max(int a[],int n){
int max=0;
for(int i=0;i<n;i++){
if(max<a[i])
max=a[i];
}

return max;
}

int sum(int a[],int n){
int sum;
for(int i=0;i<n;i++){
sum+=a[i];
}

return sum;
}
