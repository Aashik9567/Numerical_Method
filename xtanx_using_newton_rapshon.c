#include<stdio.h>
#include<math.h>
float fun(float x){
	float t;
	t=x*tan(x)-1;
   return t;
}
float derivative(float x){
	float t;
	t=x*(1/cos(x))*(1/cos(x))+tan(x);
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
1
the root of eqn is:0.860334
 the count:5
