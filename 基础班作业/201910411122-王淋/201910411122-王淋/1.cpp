#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
double fun(int x)
{
    double sum = 1;
    for(int i=1;i<=x;i++){
        sum *= i;
    }
    return sum;
}
 
double cos(int x){
    double sum = 1;
    double temp;
    int i = 2;
    int a = -1;
    do{
        temp=a*pow(x,i)/fun(i);
        sum += temp;
        i = i+2;
        a=-a;
    }
	while(abs(temp)>1e-6);
    return sum;
}
 
int main()
{
    int x;
    double sum=0;
    scanf("%d",&x);
    sum = cos(x);
    printf("cos(%d)=%f\n",x,sum);
    return 0;
}
