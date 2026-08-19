 #include<stdio.h>
#define max 100
int main()
{
	int i,j,n, p[max], bt[max], wt[max], tat[max], temp;
	float awt =0, atat = 0;
	printf("Enter the number of processes: ");
	scanf("%d",&n);
	printf("Enter the process number: ");
	for(i= 0; i<n; i++){
		scanf("%d",&p[i]);
	}

	printf("Enter the CPU burst time: ");
	for(i=0; i<n; i++)
	{
		scanf("%d",&bt[i]);
	}
	// Applying bubble sort technique to burst time
	for(i=0; i<n-1; i++){
		for(j=0; j<n-1-i; j++)
		{
			if(bt[j] > bt[j+1]){
				temp = bt[j];
				bt[j] = bt[j+1];
				bt[j+1] = temp;
				
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
	printf("\nProcess\tBurst time\tWaiting time\t Turnaround time\n");
	for(i=0; i<n; i++)
	{
		wt[i] = 0, tat[i]=0;
			
		for(j=0; j<i; j++){
			wt[i] += bt[j];
		}
		tat[i] = wt[i] + bt[j];
		awt += wt[i];
		atat += tat[i];
			printf("P%d\t%d\t\t%d\t\t%d\n",p[i], bt[i], wt[i], tat[i]);
	}
awt /= n;
atat /= n;
printf("\nAverage waiting time = %.2f\n Average turnaround time = %.2f",awt, atat);	
}
