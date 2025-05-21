///week14-3.cpp
# include <stdio.h>
int main(){
    int a,b=0;
    while(scanf("%d",&a)==1&&a!=0)
        if(a>0)
            b+=a;
    printf("%d",b);
}
