#include<stdio.h>
#include<math.h>
float fun(float x){
	return (1+pow(x,3));
}
int main(){
   	int n;
		float temp=0,h,p=0,a,b;
			printf("enter the lower and upper limit:\n");
	       scanf("%f%f",&a,&b);
         printf("enter the no of strip:\n");
         scanf("%d",&n);
         h=(b-a)/n;
         int i;
         
         for(i=1;i<=n-1;i++){
         	
         	temp=temp+fun(a+i*h);
         
		 }
		 p=(h/2)*((fun(a)+fun(b))+2*temp);
		 printf("the value is::%f",p);
		 return 0;
         
}

//output::
enter the lower and upper limit:
1 2
enter the no of strip:
4
the value is::4.796875
