#include<stdio.h>
#include<math.h>

float fun(float x){
	float t;
	t=sin(x)+3*x-2;
   return t;
}
float gval(float x){
	float t;
	t=(2-sin(x))/3;
	return t;
}
int main(){
	int N,count;
	float e,x0,x1;
	printf("enter e:\n");
 scanf("%f",&e);
 printf("enter one initial guess:\n");
 scanf("%f",&x0);
 printf("enter maximum iteration:");
 scanf("%d",&N);
 count=1;
 do{
 	x1=gval(x0);
 	count=count+1;
 	if(count>N){
 		printf("non convergent\n");
 		break;
	 }
	 x0=x1;
	 }while(fabs(fun(x1))>e);
	 printf("the root of eqn:%f\n",x1);
printf("the count:%d",count);
 
 }
 
