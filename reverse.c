#include<stdio.h>
int main(){
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int lastDigit = 0;
    int reverse = 0;
    while(n>0){
        reverse *= 10;
        lastDigit = n%10;
        reverse += lastDigit;
        n/=10;
    }
    printf("The required value is: %d",reverse);
    return 0;
}