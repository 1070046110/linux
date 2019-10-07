#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int compar(const void *a,const void *b){
int *aa=(int *)a,*bb=(int *)b;
if(* aa>* bb)return 1;
if(* aa==* bb)return 0;
if(* aa<* bb)return -1;
}

