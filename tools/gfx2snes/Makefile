#export PATH	:=	/c/msys/bin:$(PATH)

export PATH := /c/MinGW32/bin/:/c/msys/bin:$(PATH)

VERSION = "2.4.0"

#---------------------------------------------------------------------------------
# options for code generation
#---------------------------------------------------------------------------------
CC=gcc
CFLAGS=-g -O2 -Wall -Wno-unused-result -Wno-incompatible-pointer-types -D__BUILD_DATE="\"`date +'%Y%m%d'`\"" -D__BUILD_VERSION="\"$(VERSION)\""

SOURCES=gfx2snes.c lzss.c lodepng.c loadimg.c imgtools.c
OBJS=gfx2snes.o  lzss.o lodepng.o loadimg.o imgtools.o
EXE=gfx2snes
DEFINES =
LIBS =

ifeq ($(OS),Windows_NT)
        EXT=.exe
else
        EXT=
endif


#---------------------------------------------------------------------------------
all: $(EXE)$(EXT)

#---------------------------------------------------------------------------------
$(EXE)$(EXT) : $(OBJS)
	@echo make exe $(notdir $<)
	$(CC) $(CFLAGS) $(OBJS) -o $@

gfx2snes.o : gfx2snes.c
	@echo make obj $(notdir $<)
	$(CC) $(CFLAGS) -c $<

lzss.o : lzss.c
	@echo make obj $(notdir $<)
	$(CC) $(CFLAGS) -c $<

lodepng.o : lodepng.c
	@echo make obj $(notdir $<)
	$(CC) $(CFLAGS) -c $<

loadimg.o : loadimg.c
	@echo make obj $(notdir $<)
	$(CC) $(CFLAGS) -c $<

imgtools.o : imgtools.c
	@echo make obj $(notdir $<)
	$(CC) $(CFLAGS) -c $<
	
#---------------------------------------------------------------------------------
clean:
	rm -f $(EXE)$(EXT) $(OBJS) *.tds


