Makefile for Writing Make Files Example

#***************
#Variables to control Makefile operation
# **************

CC = g++
CFLAGS = - Wall -g

# **************
# Targets needed to bring the executable up to date

# **************

population : population .o
$( CC ) $( CFLAGS ) -o population population .o

# The population  .o target can be written more simply

population  .o: population  . cc
     $(CC) $(CFLAGS) -c population .cc