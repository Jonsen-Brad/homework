#include<stdio.h>

	int n,s;//��ƻ����n��������s 
    int chair=0,height=0;//���Ӹ�chair�����ָ߶�height 
    int x[5005]={0};//��i��ƻ���߶�  
    int y[5005]={0};//ժ��i��ƻ�������� 
    int B[5005][1005]={0};


int main(){ 
    int ver1,ver2;
    int i,j=1,k=1;
    
    int W[5002]={0};
    int ne[5002]={0};
    int sum=0;//���߶�sum
	//****************�������ֵ ********************/ 
    scanf("%d",&n);
    scanf("%d",&s);
    scanf("%d",&chair);
    scanf("%d",&height);
    for(i=1;i<=n;i++){ 
        scanf("%d",&x[i]);
        scanf("%d",&y[i]);
    }
    /***********************************************/ 
    //��������
    sum = chair+height;//�������߶�sum 
    
	for(i=1;i<=n;i++){
		if(sum>=x[i]){
			
			W[k]=y[i];	
			k++;
		}
		
	} 
    //�����������Ʊ������⣩
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
