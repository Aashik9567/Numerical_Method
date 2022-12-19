#include<stdio.h>
#include<math.h>
float fun(float x){
	float t;
	t=pow(x,2)-4*x-10;
   return t;
}
float derivative(float x){
	float t;
	t=2*x-4;
	return t;
}
int main(){
 int count=1;
 float x0,x1,e,g,f;
 
  printf("enter e:\n");
 scanf("%f",&e);
 printf("enter one initial guess:\n");
 scanf("%f",&x0);
 while(1){
 	count++;
 f=fun(x0);
 
 g=derivative(x0);
 x1=x0-(f/g);
 if((fabs(x1-x0)/x1)<e){
 	break;
 }
 else{
 x0=x1;
}
}
printf("the root of eqn is:%f\n ",x1);
printf("the count:%d",count);
return 0;

}
//output:
enter e:
0.0001
enter one initial guess:
3
the root of eqn is:5.741657
 the count:7
//thank you by aashiq mahato
