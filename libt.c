#include "one.h"
#include "mylib.h"

void main(){
	int *a;
 	a=init();
	int max1=0;
	int sum1=0;
	
	show(a,10);
	max1=max(a,10);
	sum1=sum(a,10);

	printf("sum=%d\n",sum1);
	printf("max=%d\n",max1);
}
