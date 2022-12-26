#include<stdio.h>
#include<math.h>
float fun(float x){
	return (1+pow(x,3));
}
int main(){
	float a,b,h,i;
		printf("enter the lower and upper limit:\n");
	scanf("%f%f",&a,&b);
	h=(b-a)/2;
	i=h/3*(fun(a)+4*fun((a+b)/2)+fun(b));
  	printf("the integrated value of functn is::%f",i);
}
