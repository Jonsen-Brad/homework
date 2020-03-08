#include<stdio.h>
int main(){
    int n;
    int i;
    int ans=0 ;
    int temp=0;
    int rec[1000000]={0};
    scanf("%d",&n);
    for(i = 0; i < n; i ++){
        scanf("%d",&rec[i]);
    }
    for( i = 0;i <n;i++){
        if(rec[i]<rec[i+1])
            temp++;
        else{
            if(ans<temp)
                ans =temp;
            temp = 0;
        }
    }
    printf("%d\n",ans+1);
    return 0;
}
