#include <stdio.h>
void fun(int a,int b,int c){
    printf("%d = ",a);
    for(int i=b;i<=c;i++){
        printf("%d ",i);
        if(i!=c){
            printf("+");
        }
    }
    printf("\n");
}
int main() {

    int a;
    int d = 0;
    scanf("%d",&a);
    for(int i=1;i<=a/2;i++){
        for(int j=i+1;j<=a;j++){
            if(i+j > a){
                break;
            }
            else if( (i+j)*(j-i+1)/2 == a ){
                d++;
                fun(a,i,j);
            }
        }
    }
    if(d == 0){
        printf("NONE");
    }
    return 0;
}
