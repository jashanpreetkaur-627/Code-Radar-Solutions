#include <stdio.h>
int main(){
    int n1 , n2;
    scanf("%d", &n1);
    scanf("%d" , &n2);
    int result = n1^(1<<n2);
    printf("%d\n",result);
    return 0;
}