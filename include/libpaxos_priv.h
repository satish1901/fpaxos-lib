#ifndef _LIBPAXOS_PRIV_H_
#define _LIBPAXOS_PRIV_H_

#include "libpaxos.h"
#include "paxos_config.h"
#include "libpaxos_messages.h"
#include <stdio.h>

typedef accept_ack acceptor_record;

/*** LOGGING MACROS ***/

#define VRB 1
#define DBG 3

#define LOG(L, S) if(VERBOSITY_LEVEL >= L) {\
	printf("[%s] ", __func__) ;\
	printf S ;\
}

#endif
