#include <lib.h>
#include <unistd.h>
int settickets(int numtickets){
	message m;
	m.m1_i1 = numtickets;
	return _syscall(PM_PROC_NR, PM_SET_TICKET, &m);

}
