#include<stdio.h>

int main()
{
	int a[7][2]={0};
	int i,j,hour,day;
	int b[7]={0};
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<=6;i++)	
	b[i]=a[i][0]+a[i][1];
	for(day=0,j=1;j<=6;j++)
	{
		if(b[j]>b[day])
		day=j;	 
	}
	
	if(b[day]<=8)
	printf("0");
	else	
	printf("%d",day+1);
	return 0;
}
