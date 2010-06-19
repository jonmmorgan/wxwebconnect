# ---------------------------------------------------------------------------
#
#   Filename: webconnect Makefile
#   Project:  Kirix Web Kit
#   (C) Copyright 2006, Kirix Corporation, All Rights Reserved.
#
#   Developer(s):       Benjamin I. Williams
#
#   Changes:
#
#       10 Oct 2006 - Created
#
# ---------------------------------------------------------------------------

# These two settings need to be adjusted to your build environment
WX_DIR := ../wxWidgets
WX_CONFIG := ${WX_DIR}/wx-config

#WX_CFLAGS := $(shell ${WX_CONFIG} --prefix=${WX_DIR} --cppflags)
#WX_LIBS := $(shell ${WX_CONFIG} --prefix=${WX_DIR} --libs)


INCLUDE =
DEFINES =
CFLAGS = ${WX_CFLAGS} -g -ggdb -fno-rtti
LIBS = ${WX_LIBS}
CPP = g++
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
	$(CPP) $(CFLAGS) $(INCLUDES) $(DEFINES) -c $<

nsall.h: nsall.idl
	$(XPIDL) -m header nsall.idl
