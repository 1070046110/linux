#include "one.h"

int* init(){
	static int a[10];

	srand((int)time(0));
	for(int i=0;i<10;i++){
	a[i]=rand()%10;
}
	return &a[0];
}

void show(int a[],int n){
	for(int i=0;i<n;i++){
	printf("%d\n",a[i]);
}
}
