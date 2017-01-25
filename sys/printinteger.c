#include <lib.h>
#include <unistd.h>

int printinteger(int value){
	message m;
	m.m1_i1 = value;
	return _syscall(PM_PROC_NR, PRINTINTEGER, &m);

}
