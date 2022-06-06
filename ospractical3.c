#include<stdio.h>
#include<unistd.h>

int main()
{
	int id;
	printf("this is practical 3 \n");
	id=fork();
	if(id>0)
	{
		printf("this is the parent  section [process id = %d] \n",getpid());
		
	}
	else if(id==0)
	{
		printf("fork creation [chiled id = %d] \n",getppid());
		printf("fork parent process id %d \n",getpid());
		}
		else{
			printf("fork is note created !!!");
		}
		return 0;
}
