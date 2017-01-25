#include <unistd.h>
#include <stdlib.h> /* for atoi which converts to integer*/
#include <lib.h>
#include <time.h>
#include <stdio.h>
int main(int argc, char **argv){
	int f[1000000];
	FILE *out,*log;
	out = fopen("output1.txt","w");
	log = fopen("DynamicLog.txt","a");
	f[0] = 1;
	f[1] = 2;
	clock_t begin = clock();
	time_t current_time  = time(NULL);
	pid_t pid = getpid();
	fprintf(log,"IO BOUND with initially 10 tickets pid %d: started at %s\n",pid,ctime(&current_time));
	int counter = 200;
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
	printf("IO BOUND with initially 10 tickets :pid %d: finished \n",pid);
	fprintf(log,"IO BOUND with initially 10 tickets pid %d: finished at : %s\n",pid,ctime(&current_time));
}

