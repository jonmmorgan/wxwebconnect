#ifndef __WXWEBCONNECT_NSALL_H
#define __WXWEBCONNECT_NSALL_H

#include "ns_generic.h"

#ifdef XULRUNNER_192
    #include "ns_xulrunner_192.h"

#else
    #error "You need to define which version of XULRunner you wish to use."
#endif

#endif
