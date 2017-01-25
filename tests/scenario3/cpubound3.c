#include <unistd.h>
#include <stdlib.h> /* for atoi which converts to integer*/
#include <lib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, char **argv){
	int counter = 0;
	int counter2 = 0;
	settickets(27);
	time_t start= time(NULL);
	FILE *log;
	log = fopen("CPUTestLog.txt","a");
	pid_t pid = getpid();
	time_t current_time = time(NULL);
	fprintf(log,"Number 3 with 27 tickets %d has started at %s\n",pid,ctime(&current_time));


	//	clock_t begin = clock();
	while(counter2<4){
	counter =0;
	
	while(counter <1111111111){
	int x =10;
	int y =20;
	x = y*x;
	counter++;
	}
	counter2++;}
	//time_t end= time(NULL);
	clock_t end= clock();
	double runningTime =  difftime(start,end)/10000000;
	current_time = time(NULL);
	printf("Number 3 with 27 tickets: %d has finished... \n",pid);
	fprintf(log,"Number 3 with 27 tickets:%d has finished at %s\n",pid,ctime(&current_time));
}

