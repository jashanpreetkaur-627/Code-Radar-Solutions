#include <stdio.h>
void mult(int num);
void mult(int num){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n" , num , i , num*i);
       }
    }
        int main(){
            int num;
            
            scanf("%d",&num);
            mult(num);
            return 0;
        }
    
