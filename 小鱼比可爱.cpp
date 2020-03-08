#include<stdio.h>
int main(){ 
    int n;
    int fishs[105];
    int i,j;
    int eyes[105] = {0};
    scanf("%d",&n);
    for(i = 0;i < n;i ++)
        scanf("%d",&fishs[i]);
    for(i = 0;i < n;i ++){ 
        for(j = 0;j < i; j++){ 
            if(fishs[i] > fishs[j])
                eyes[i]++;
        }
        printf("%d ",eyes[i]);
    }
    printf("\n");
    return 0;
}
