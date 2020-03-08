#include<stdio.h>
int main(){ 
    int a[10];
    int num = 0;
    int high;
    int i;
    for(i = 0; i < 10;i ++){ 
        scanf("%d",&a[i]);
        a[i] -= 30;
    }
    scanf("%d",&high);
    for(i = 0;i < 10;i ++){ 
        if(high >= a[i])
            num ++;
    }
    printf("%d",num);
    return 0;
}
