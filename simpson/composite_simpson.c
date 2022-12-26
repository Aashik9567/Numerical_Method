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
         printf("enter the no of strip:\n");
         scanf("%d",&n);
         h=(b-a)/n;
         int i;
        for(i=1;i<=n-1;i+=2){
        	p=p+fun(a+i*h);	
			}
		for(i=2;i<=n-1;i+=2){
		
        temp=temp+fun(a+i*h);    	
		}        

    I=(h/3)*(fun(a)+4*p+2*temp+fun(b));
 printf("root is ::%f",I);
	}
        
 /*output::
enter the lower and upper limit:
1 5
enter the no of strip:
4
root is ::160.000000
--------------------------------*\
