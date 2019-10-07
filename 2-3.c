#include "one.h"
#include "2-1.c"
#include "2-2.c"
#include "2-4.c"

void main(){
int i;
int c[100];
int b[100];
int avg,sum;
sum=0;
avg=0;

clock_t start,finish;
double m,p;

srand((int)time(0));
for(i=0;i<100;i++){
c[i]=rand()%100;
b[i]=rand()%100;
}

start=clock();
mp(c);
finish=clock();
m=(double)(finish-start)/CLOCKS_PER_SEC;

printf("\n");
printf("冒泡排序:\n");
for(int j=0;j<100;j++){
printf("\t%d",c[j]);
}
printf("\n");
printf("用时：%f seconds\n",m);
printf("\n");

sum=sum1(c);
avg=avg1(sum);
printf("Sum:%d\n",sum);
printf("Avg:%d\n",avg);
printf("\n");

start=clock();
qsort(b,100,sizeof(int),compar);
finish=clock();
p=(double)(finish-start)/CLOCKS_PER_SEC;
printf("快速排序:\n");
for(int j=0;j<100;j++){
printf("\t%d",b[j]);
}
printf("\n");
printf("用时：%f seconds\n",p);
printf("\n");

sum=sum1(b);
avg=avg1(sum);
printf("Sum:%d\n",sum);
printf("Avg:%d\n",avg);
printf("\n");

}
