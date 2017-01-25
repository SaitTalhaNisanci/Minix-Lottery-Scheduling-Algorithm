#include <stdio.h>
#define _MAIN
#include "pm.h"
#include "mproc.h"
#include "../sched/sched.h"
#include "../sched/schedproc.h"
#include <assert.h>
#include <minix/com.h>
#include <machine/archtypes.h>
#include <stdlib.h>
int do_settickets(void){
	struct mproc *rmp;
	int proc_nr_n = _ENDPOINT_P(m_in.m_source);
	rmp = &mproc[proc_nr_n];
	int new_tickets = m_in.m1_i1;
	sched_tickets(rmp,new_tickets);
	return 0;


}
