#include<stdio.h>
#define N 5
int main()
{
	int i,j,t,n,a[N]={9,5,6,4,1};
	for(i=0;i<N-1;i++)
	    for(j=0;j<N-i-1;j++)
	    {
	    	if(a[j]>a[j+1])
	    	{
	    		t=a[j];
	    		a[j]=a[j+1];
	    		a[j+1]=t;
			}
		}/*冒泡排序实现排序*/ 
	printf("input:\n");
	scanf("%d",&n);
	t=0;
	for(i=0;i<N-1;i++)
	{
		if(a[i]>n)
			break;
	}
		t=i;
		/*逆序向后移动每一个元素，然后插入新元素*/ 
		for(i=N-1;i>=t;i--)
		{
			a[i+1]=a[i];
		}
		a[t]=n;
		/*输出新数组个元素*/ 
    for(i=0;i<N+1;i++)
    {
    	printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
