##########################################################
# Created by: Deshashri Kakade                           #
# Created on: Wednesday 10 dec 2022 11:07:22 AM IST      #
##########################################################


SRCDIR = ../src
INCLUDEDIR = ../include
OBJDIR = ../compile
BINDIR = ../bin
CFLAGS = -c -g -Wall -I${INCLUDEDIR}



all:

	gcc ${CFLAGS}  ${SRCDIR}/main.c -o ${OBJDIR}/main.o
	gcc ${CFLAGS}  ${SRCDIR}/utility.c -o ${OBJDIR}/utility.o
	gcc ${CFLAGS}  ${SRCDIR}/formula.c -o ${OBJDIR}/formula.o
	gcc ${OBJDIR}/main.o ${OBJDIR}/utility.o ${OBJDIR}/formula.o -o ${BINDIR}/smsh.bin

clean:

	gcc ${OBJDIR}/main.o ${OBJDIR}/utility.o ${OBJDIR}/formula.o ${BINDIR}/smsh.bin


#################### End of Makefile #####################


