///week10_2.cpp
#include <stdio.h>
int main(){
    printf("請輸入一個數字(ex.379):");
    int n;
    scanf("%d",&n);
    printf("你輸入了 %d\n",n);
    ///printf("它的個位數是 %d\n",n%10);
    ///printf("它的十位數是 %d\n",n/10%10);
    ///printf("它的百位數是 %d\n",n/100%10);
    while(n>0){
        printf("現在把 %d 剝皮 %d\n",n,n%10);
        n=n/10;
    }
}
