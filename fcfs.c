#include<stdio.h>
int main()
{
	int bt[10],n,i,wt[10],tat[10],ttat;
	printf("Enter the no of processors");
	scanf("%d",&n);
	printf("Enter burst times for processors");
	for(i=0;i<n,i++)
	{
		scanf("%d",&bt[i]);
}
wt[0]=0;
for(i=0;i<n;i++);
{
	wt[i]=bt[i-1]+wt[i-1]
}
printf("waiting time of each process\n");
for(i=0;i<n;i++)
{
	printf("%d\n",wt[i]);
}


for(i=0;i<n;i++)


{
	tat[i]=wt[i]+bt[i];
	
	printf("Turn around time of each process\n");
}
for(i=0;i<n;i++)
{
print("%d\n",tat[i]);
}
for(i=0;i<n;i++)
{
	twt+=wt[i];
	ttat+=tat[i];
}
printf("Average waiting time=%f\n",twt/(float)n);
printf("Average Turn around time =%f",ttat/(float)n);
return 0;
}
