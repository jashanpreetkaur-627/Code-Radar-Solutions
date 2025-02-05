#include <stdio.h>

int main(){
    int number , bitposition;
    scanf("%d %d",&number , &bitposition);
    int nthbit=(number >> nitposition);
    printf("%d\n",nthbit)
    return 0;
}