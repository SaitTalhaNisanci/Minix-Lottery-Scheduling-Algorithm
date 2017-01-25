#include <stdio.h>
#include "pm.h"
#include "mproc.h"
int do_set_torpil(void){
	register struct mproc *rmp;
	int proc_nr_n = _ENDPOINT_P(m_in.m_source);
	rmp = &mproc[proc_nr_n];
	int new_torpil= m_in.m1_i1;
	sched_torpil(rmp,new_torpil);
	return 0;


}
