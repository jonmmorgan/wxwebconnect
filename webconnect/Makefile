#/*!
# *
# * Copyright (c) 2006-2013, Kirix Research, LLC.  All rights reserved.
# *
# * Project:  wxWebConnect Embedded Web Browser Control Library
# * Author:   Benjamin I. Williams
# * Created:  2006-10-10
# *
# */


#include ../top.mak


INCLUDES = 
DEFINES = ${LARGEFILE_DEFINES}
CFLAGS = ${WX_CFLAGS} -g -ggdb -fno-rtti
LIBS = ${WX_LIBS} 
#XPIDL = ../../../../../webconnect_testapp/xr/xpidl
XPIDL = /cygdrive/d/devel/xr-1.8/xpidl


OBJECTS = \
	dom.o \
	nsimpl.o \
	promptservice.o \
	webcontrol.o \
	webframe.o \
	webprefs.o 

all: nsall.h

#all: libwebconnect.a

libwebconnect.a: $(OBJECTS)
	ar rc libwebconnect.a $(OBJECTS)
	ranlib libwebconnect.a

clean:
	rm -f *.o libwebconnect.a

$(OBJECTS): %.o : %.cpp
	@echo $<
	@$(CPP) $(CFLAGS) $(INCLUDES) $(DEFINES) -c $<


nsall.h: nsall.idl
	$(XPIDL) -m header nsall.idl
