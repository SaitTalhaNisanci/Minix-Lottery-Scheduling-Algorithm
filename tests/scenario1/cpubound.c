#include <unistd.h>
#include <stdlib.h> /* for atoi which converts to integer*/
#include <lib.h>
#include <stdio.h>
#include <time.h>
int main(int argc, char **argv){
	int counter = 0;
	int counter2 = 0;
	FILE *log;
	log = fopen("CPUTestLog.txt","a");
	pid_t pid = getpid();
	clock_t begin = clock();
	while(counter2<2){
	counter =0;
	
	while(counter <1111111111){
	int x =10;
	int y =20;
	x = y*x;
	counter++;
	}
	counter2++;}
	clock_t end= clock();
	double runningTime =  (double) (end-begin)/ CLOCKS_PER_SEC;
	printf("Number 1: %d has finished... \n",pid);
	fprintf(log,"Number 1:%d has finished ; Running time: %f\n",pid,runningTime);
}

