#include<stdio.h>//ÂíÀ¹×ä 
void walk()
{	int i=0,j=0;
	if(R[i][j+1]!=0)
	  R[i]	
}
int main()
{
	int R[22][22]={1};
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	for(i=0;i<=y1;i++)
		for(j=0,j<=x1;j++)
		R[i][j]=0;
	R[x2-1][y2-2]=R[x2-2][y2-1]=R[x2-1][y2+2]=R[x2-2][y2+1]=1;
	R[x2+1][y2-2]=R[x2+2][y2-1=R[x2+1][y2+2]]=R[x2+2][y2+1]=1;
	
	
	return 0;
}
