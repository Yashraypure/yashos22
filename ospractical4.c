#include<stdio.h>
int main()
{
	int bt[10],at[10]={0},ct[10],tat[10],wt[10];
	int n;
	float totalTAT,totalWT;
	
	printf("enter the number of process\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter the burst time of process %d ",i);
		scanf("%d",&bt[i]);
	}
	//calculate completion time
	ct[0]=at[0]+bt[0];
	for(int i=1;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i];
	}
	for(int i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
		totalTAT +=tat[i];
		wt[i] = tat[i] - bt[i];
		totalWT += wt[i];
	}
	printf("------Solution--------\n\n");
	printf("\n\nProcess\t\t AT\t\t BT \t\t CT  \t\tTT\t\t WT\n\n");
	for(int i =0;i<n;i++)
	{
		
		printf("\n\n P%d \t\t %d \t\t %d \t\t %d \t\t %d \t\t %d\n\n",i,at[i],bt[i],ct[i],tat[i],wt[i]);
	}
	printf("\n\n Avrage Turn around time %f\n",totalTAT/n);
	printf("\n\n Average Waiting Time %f\n",totalWT/n);
	
return 0;
	
}
