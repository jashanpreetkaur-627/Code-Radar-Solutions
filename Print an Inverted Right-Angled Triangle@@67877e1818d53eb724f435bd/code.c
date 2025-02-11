#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);           //rows start from N input row not less than 1 means +ve i-- decrement 
    for(int i=N;i>=1;i--){     //columns starts from 1 , less than i j++ increment
        for(int j=1;j<=i;j++){   
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}