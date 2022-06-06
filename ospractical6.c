
#include<stdio.h>
int main(){
	int at[10]={0},bt[10]={0},ct[10],tat[10],wt[10],pp[10],p[10];
	int i,j,n,temp;
	float totaltat,totalwt;
	printf("enter the number of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter process name brust time and priority:");
		scanf("%d %d %d",&p[i],&bt[i],&pp[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pp[j]<pp[i])
			{
			temp=p[j];
			p[j]=p[i];
			p[i]=temp;
			
			temp=bt[j];
			bt[j]=bt[i];
			bt[i]=temp;
			
			temp=pp[j];
			pp[j]=pp[i];
			pp[i]=temp;	
			}
		}
	}
	ct[0]=at[0]+bt[0];
	for(i=1;i<n;i++)
	{
		ct[i]=ct[i-1]+bt[i];
	}
	printf("\n\nSolution");
	for(i=0;i<n;i++){
		tat[i]=ct[i]-at[i];
		totaltat +=tat[i];
		wt[i]=tat[i]-bt[i];
		totalwt +=wt[i];
	}
	printf("\n\n proc_name\t  AT \t  BT \t  CT \t TAT \t WT \t priority ");
	for(i=0;i<n;i++)
	{
		printf("\n P%d \t\t%d\t%d\t%d\t%d\t%d\t\t%d",p[i],at[i],bt[i],ct[i],tat[i],wt[i],pp[i]);
		
	}
	printf("\nAverage tat:%f",(float)totaltat/n);
	printf("\n Average wt:%f",(float)totalwt/n);
	}
