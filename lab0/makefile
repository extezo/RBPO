CC=gcc

MAIN_SOURCES=Main.c
MAIN_OBJECTS=$(MAIN_SOURCES:.c=.o)

LIB=funcs.a
LIB_SOURCES=CompareStrings.c CreatePersons.c PrintPersons.c Sort.c
LIB_OBJECTS=$(LIB_SOURCES:.c=.o)

DEPS=SomeHeader.h

all: app 
	
app: $(LIB) $(MAIN_OBJECTS)
	$(CC) -lm -o $@ $(MAIN_OBJECTS) $<
funcs.a: $(LIB_OBJECTS) 
	ar rcs $@ $^
libs: $(LIB) 

clean:
	del *.o, *.a
