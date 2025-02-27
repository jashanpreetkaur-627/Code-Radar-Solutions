#include <stdio.h>
int main(){
    int n1 , n2;
    scanf("%d", &n1);
    scanf("%d" , &n2);
    int result = num^(1<<n1);
    printf("%d\n",result);
    return 0;
}