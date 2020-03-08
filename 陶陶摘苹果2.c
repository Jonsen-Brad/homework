#include<stdio.h>

	int n,s;//总苹果数n，总体力s 
    int chair=0,height=0;//凳子高chair，伸手高度height 
    int x[5005]={0};//第i个苹果高度  
    int y[5005]={0};//摘第i个苹果的体力 
    int B[5005][1005]={0};


int main(){ 
    int ver1,ver2;
    int i,j=1,k=1;
    
    int W[5002]={0};
    int ne[5002]={0};
    int sum=0;//最大高度sum
	//****************输入各个值 ********************/ 
    scanf("%d",&n);
    scanf("%d",&s);
    scanf("%d",&chair);
    scanf("%d",&height);
    for(i=1;i<=n;i++){ 
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }
    /***********************************************/ 
    //处理数据
    sum = chair+height;//计算最大高度sum 
    
	for(i=1;i<=n;i++){
		if(sum>=x[i]){
			
			W[k]=y[i];	
			k++;
		}
		
	} 
    //处理函数（类似背包问题）
    for(i=1;i<k;i++)
    	for(j=1;j<=s;j++){
    		if(W[i]>j)
				B[i][j]=B[i-1][j];
			else{
				ver1=B[i-1][j-W[i]]+1;
				ver2=B[i-1][j];
				if(ver1>ver2)
					B[i][j]=ver1;
				else
					B[i][j]=ver2;
			}	
		}
		
	
    	
    printf("%d",B[k-1][s]);
    
    return 0;
}
