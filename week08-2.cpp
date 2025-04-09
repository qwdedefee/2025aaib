///week08-2.cpp
///bubble sort
#include <stdio.h>
int main(){
    int a[10]={3,0,1,8,7,2,5,4,6,9};
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    for(int j=0;j<9;j++){
        for(int i=0;i<9;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    for(int i=0;i<10;i++)
        printf("%d ",a[i]);
    printf("\n");
    }
}
