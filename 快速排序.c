#include<stdio.h>
int a[100]={0},n;
void  fastsort(int left,int right){
	int i,j,t,temp;//±ê±øi£¬±ê±øj£¬Ã½½ét&temp
	temp=a[left];
	if(left>right)
	return ;
	i=left;
	j=right;
	while(i!=j){
	while(i<j&&a[j]>=temp){
			j--;
		}
		while(i<j&&a[i]<=temp){
			i++;
		}
		
		if(i<j){
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
	a[left]=a[i];
	a[i]=a[temp];
	fastsort(left,i);
	fastsort(i+1,right);
}
int main(){
	int i;
	scanf("%d",&n);
	for(i=1;i<n;i++)
		scanf("%d",&a[i]);
		fastsort(1,n);
		for(i=1;i<=n;i++){
			printf("%d",a[i]);
		}
	return 0;
}

