#include<stdio.h>
#include<math.h>
float fun(float x){
	return (1+pow(x,3));
}
int main(){
   	int n;
		float temp=0,h,p=0,a,b,I=0;
			printf("enter the lower and upper limit:\n");
	       scanf("%f%f",&a,&b);
         printf("enter the no of strip:\n");
         scanf("%d",&n);
         h=(b-a)/n;
         int i;
        for(i=1;i<=n;i++){
        	if(i%3==0){
			
        	p=p+2*fun(a+i*h);	
}
	else{
		
        temp=temp+3*fun(a+i*h);    	
		}        
}
    I=(3*h/8)*(fun(a)+p+temp+fun(b));
 printf("root is ::%f",I);
	}
        
         	
