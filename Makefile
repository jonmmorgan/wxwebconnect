# ---------------------------------------------------------------------------
#
#   Filename: webconnect Makefile
#   Project:  Kirix Web Kit
#   (C) Copyright 2006, Kirix Corporation, All Rights Reserved.
#
#   Developer(s):	Benjamin I. Williams
#
#   Changes:
#
#       10 Oct 2006 - Created
#
# ---------------------------------------------------------------------------

include ../top.mak


INCLUDES = 
DEFINES = ${LARGEFILE_DEFINES}
CFLAGS = ${WX_CFLAGS} -g -ggdb -fno-rtti
LIBS = ${WX_LIBS} 


OBJECTS = \
	dom.o \
	nsimpl.o \
	promptservice.o \
	webcontrol.o \
	webframe.o \
	webprefs.o 

all: libwebconnect.a

libwebconnect.a: $(OBJECTS)
	ar rc libwebconnect.a $(OBJECTS)
	ranlib libwebconnect.a

clean:
	rm -f *.o libwebconnect.a

$(OBJECTS): %.o : %.cpp
	@echo $<
	$(CPP) $(CFLAGS) $(INCLUDES) $(DEFINES) -c $<


