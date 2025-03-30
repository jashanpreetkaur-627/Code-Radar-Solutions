#include <stdiio.h>
int main(){
    int n , i ,sum=0;
    scanf("%d",&n);
    printf("%d\n",n);
    for(i=0;i<n+1;i++){
        sum = i + [i+1];
        printf("%d\n",sum);
        return 0;
    }
}