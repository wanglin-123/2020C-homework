#include<stdio.h>   
int fun(int a, int b){
    if(b==0) 
	return a;
    else return fun(b, a%b);
}
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    while((a&&b)!=0){
        int tmp=fun(a, b);
        printf("%d/%d\n", a/tmp, b/tmp);
    }
    return 0;
}
