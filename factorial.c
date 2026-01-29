#include<stdio.h>
int main(){
    int n,fact;
    fact = 1;
    printf("Enter the value of which you want the factorial: ");
    scanf("%d",&n);
    //factorial
    for(int i = 1 ; i <= n ; i++){
        fact *= i;
    }
    printf("Your factorial is : %d", fact);
    return 0;
}