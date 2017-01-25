#include <lib.h>
#include <unistd.h>

int settorpil(int torpil){
	message m;
	m.m1_i1 = torpil;
	return _syscall(PM_PROC_NR, PM_SET_TORPIL, &m);

}
