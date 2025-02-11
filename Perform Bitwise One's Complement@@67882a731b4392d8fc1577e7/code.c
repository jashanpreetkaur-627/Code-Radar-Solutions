#include <stdio.h>

int main(){
    int a , onescomplement;
    scanf("%d",&a);
    onescomplement = ~a;
    printf("%d\n",a,onescomplement);
    return 0;
}