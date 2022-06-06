#include<stdio.h>
int main(){
	int bt[10]={0},at[10]={0},ct[10]={0},tat[10]={0},wt[10]={0};
	int n,p[10],temp;
	float totalTAT,totalWT;
	printf("enter the number of process:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("enter process name ,arrival time and brust time ");
		scanf("%d %d %d",&p[i],&at[i],&bt[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(bt[i]<bt[j])
			{
			temp=p[j];
			p[j]=p[i];
			p[i]=temp;
			
			temp=at[j];
			at[j]=at[i];
			at[i]=temp;
			 
			 temp=bt[j];
			 bt[j]=bt[i];
			 bt[i]=temp;
			 	
			}
		}
	}
	
ct[0]=at[0]+bt[0];
for(int i=1;i<n;i++)
{
	ct[i]=ct[i-1]+bt[i];
	}	
	printf("\n\nsolution\n\n");
	for(int i=0;i<n;i++)
	{
		tat[i]=ct[i]-at[i];
		totalTAT +=tat[i];
		wt[i]=tat[i]-bt[i];
		totalWT+=wt[i];
	}
	printf("\nProc_name\t AT\t BT\t CT\t TAT\t WT\t\n");
	for(int i=0;i<n;i++)
	{
		printf("\nP%d\t\t%d\t%d\t%d\t%d\t%d\t\t\n\n",p[i],at[i],bt[i],ct[i],tat[i],wt[i]);
	}
	printf("\n\nAverage tat:%f",(float)totalTAT/n);
	printf("\n\nAverage wt:%f",(float)totalWT/n);
	
	return 0;
}
