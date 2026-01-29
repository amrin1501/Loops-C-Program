#include<stdio.h>
int main(){
    int n, a = 1, b = 1, sum = 0;
    scanf("%d",&n);
    for(int i = 1; i <= n ; i++){
        printf("%d ",a);
        sum = a + b;
        a = b;
        b = sum;
    }
    return 0;
}