#include<stdio.h>
#define max 36
int main(){
	int n, i,qt, count = 0, temp, sq=0, bt[max], wt[max], tat[max], rem_bt[10];
	float awt=0, atat=0;
	printf("Enter the number of process: ");
	scanf("%d",&n);
	
	printf("Enter the CPU burst time: ");
	for(i=0; i<n; i++){
		scanf("%d",&bt[i]);
		rem_bt[i] = bt[i];
	}
	printf("Enter quantum time: ");
	scanf("%d",&qt);
	while(1){
		for(i=0, count=0; i<n; i++){
			temp = qt;
			if(rem_bt[i]==0){
				count++;
				continue;
			}
			if(rem_bt[i]>qt){
				rem_bt[i] = rem_bt[i] - qt;
			}
			else if(rem_bt[i] >= 0) {
				temp = rem_bt[i];
				rem_bt[i] = 0;
			}
			sq = sq + temp;
			tat[i] = sq;
		}
		if(n== count){
			break;
		}
		
	}
	printf("\nProcess\tBurst time\tWaiting time\tTurnaround time\n");
	for(i=0; i<n; i++)
	{
		wt[i] = tat[i] - bt[i];
		awt += wt[i], atat += tat[i];
		printf("P%d\t%d\t\t%d\t\t%d\n",i+1, bt[i], wt[i], tat[i]);
	}
awt /= n, atat /= n;
printf("\nAverage waiting time = %.2f\nAverage turnaround time = %.2f",awt,atat);
	return 0;
}
