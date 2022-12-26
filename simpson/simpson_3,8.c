#include<stdio.h>
#include<math.h>
float fun(float x){
	return (1+pow(x,3));
}
int main(){
   	int n;
		float temp=0,h,p=0,a,b,I;
			printf("enter the lower and upper limit:\n");
	       scanf("%f%f",&a,&b);
       
         h=(b-a)/3;
	
I=(3*h/8)*(fun(a)+3*fun(a+h)+3*fun(a+2*h)+fun(b));
 printf("root is ::%f",I);
	}
        
/*output::enter the lower and upper limit:
1 2
root is ::4.750000
--------------------------------*\
