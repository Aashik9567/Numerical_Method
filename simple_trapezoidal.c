#include<stdio.h>
#include<math.h>
float fun(float x){
	return (1+pow(x,3));
}
int main(){
	float i,h,a,b;
	printf("enter the lower and upper limit:\n");
	scanf("%f%f",&a,&b);
	h=b-a;
	i=h/2*(fun(a)+fun(b));
	printf("the integrated value of functn is::%f",i);
	return 0;
}
//output:
enter the lower and upper limit:
1 2
the integrated value of functn is::5.500000
