#include<stdio.h>
#include<math.h>
float fun(float x){
	float t;
	t=pow(x,2)-4*x-10;
   return t;
}
int main(){
 int count=1;
 float x0,x1,e,f0,f1;
 float x2;
  printf("enter e:\n");
 scanf("%f",&e);
 printf("enter two initial guess:\n");
 scanf("%f%f",&x0,&x1);
 do{
 	count++;
  f0=fun(x0);
  f1=fun(x1);
  x2=x1-((x1-x0)/(f1-f0))*f1;
  x0=x1;
  x1=x2;
}while(fabs((x1-x0)/x1)>e);
printf("the root of eqn:%f\n",x2);
printf("the count:%d",count);
return 0;

}
