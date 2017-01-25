#include <unistd.h>
#include <stdlib.h> /* for atoi which converts to integer*/
#include <lib.h>
#include <time.h>
#include <stdio.h>
int main(int argc, char **argv){
	int f[1000000];
	FILE *out,*log;
	settorpil(1);
	settickets(3);
	out = fopen("output1.txt","w");
	log = fopen("IOTestLog.txt","a");
	f[0] = 1;
	f[1] = 2;
	time_t current_time = time(NULL);
	clock_t begin = clock();
	pid_t pid = getpid();
	fprintf(log,"Number 1 with 3 tickets WITH TORPIL has started %d pid at %s\n",pid,ctime(&current_time));
	int counter = 50;
//	printf("pid %d: started ",pid);
	while(counter--){
		int counter2 = 0;
		for( ; counter2< 1000000;counter2++){
		int current = f[0]+f[1];
		fprintf(out,"%d\n",current);
		}
	close(0);	
	out = fopen("output1.txt","w");
	}
	clock_t end = clock();	
	double time_spent = (double)(end-begin)/CLOCKS_PER_SEC;
	current_time = time(NULL);
	printf("Number 1 with 3 tickets :WITH TORPIL pid %d: finished \n",pid);
	fprintf(log,"Number 1 with 3 tickets WITH TORPIL pid %d: finished %s\n",pid,ctime(&current_time));
}

