#include<stdio.h>
#include<conio.h>
#include<math.h>
float fun(float x){
 return pow(x,2)-4*x-10;
}
int main(){
	float x0,x1,x2;
	int cou=0;
	float f1,f0,f2,e;
	printf("enter the stopping criteria:\n");
	scanf("%f",&e);
	renter:
	printf("enter the range of guess::");
	scanf("%f%f",&x1,&x2);
	f1=fun(x1);
	f2=fun(x2);
	if(f1*f2>0){
		goto renter;
	}
    
	else{ 
	do{
	
	x0=(x1*f2-x2*f1)/(f2-f1);
	f0=fun(x0);
	 if(f1*f0<0){
		x2=x0;
	}
	else{
		x1=x0;
	}
	cou++;
	}while(fabs(f0)>e);

 printf("the root of eqn is::%f\n\n",x0);
   printf("count::%d",cou);
}
   return 0;
}
	
	
	
	
