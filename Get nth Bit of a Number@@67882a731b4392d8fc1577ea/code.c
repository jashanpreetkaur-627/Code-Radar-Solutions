#include <stdio.h>

int main(){
    int number , bitposition;
    scanf("%d %d",&number , &bitposition);
    int nthbit=(number >> bitposition) & 1;
    printf("%d\n",nthbit);
    return 0;
}