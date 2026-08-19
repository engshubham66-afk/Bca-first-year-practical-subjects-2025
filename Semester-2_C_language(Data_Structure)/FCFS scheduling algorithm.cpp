#include<stdio.h>
#define max 100
 main()
{
int n, i, bt[max], wt[max], tat[max];
float awt = 0, atat = 0; // awt = average waiting time, atat = average turnaround time
printf("Enter the number of processes: ");
scanf("%d",&n);
printf("\nEnter the CPU burst time: ");
for (i = 0; i<n; i++){
	scanf("%d",&bt[i]); // i = maximum burst time
}
printf("\n process\t burst time\t waiting time\t turnaround time \n");
for(i = 0; i<n; i++) {
	wt[i] = 0, tat[i] = 0;
	
	for(int j = 0; j<i; j++){   // j = burst time
		wt[i] += bt[j];
	}
	tat[i] = wt[i] + bt[i];
	awt += wt[i];
	atat += tat[i];
	printf("P%d\t\t%d\t\t%d\t\t%d\n",i+1, bt[i], wt[i],tat[i]);
}
awt /= n; atat /= n;
printf("\nAverage waiting time = %.2f \n average turn around time = %.2f",awt, atat);
return 0;
}
