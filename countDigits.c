#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count = 0;
    int a = n;
    while(n>0){
        n/=10;
        count++;
    }
    if(a==0) printf("1");
    else printf("%d",count);
    return 0;
}