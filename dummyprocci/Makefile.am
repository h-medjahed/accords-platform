#
# DUMMYPROCCI Makefile.am
#
# Copyright 2013, Prologue, All rights reserved
#
# Authors:
#   mE
#

bin_PROGRAMS = dummyprocci
EXTRA_DIST = 

dummyprocci_SOURCES = dummyprocci.c

dummyprocci_CFLAGS = $(AM_CFLAGS) $(CFLAGS_COREST) $(CFLAGS_BROKER) $(CFLAGS_OCCI) $(CFLAGS_COXML) $(CFLAGS_CORDS) $(CFLAGS_COCCI) $(CFLAGS_COCARRIER) $(CFLAGS_PUBOCCI) $(CFLAGS_PROCCI) $(CFLAGS_COSACS) $(CFLAGS_COPABR) $(CFLAGS_COMONS)
dummyprocci_LDFLAGS = $(LD_COCARRIER) $(LD_COPABR) $(LD_PUBOCCI) $(LD_COCCI) $(LD_OCCI) $(LD_CORDS) $(LD_COREST) $(LD_COXML) $(LDFLAGS_UUID) $(LDFLAGS_SSL) $(LDFLAGS_THREADS)

# Create auto-generated model files
model_h_files = dummy.h dummyconfig.h
include $(top_srcdir)/tools/Makefile_generate_model.am
dummyprocci.c: $(model_c_files)
