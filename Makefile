CC = g++
RM = rm -rf

CFLAGS = -c -Wall
LDFLAGS =

DESTDIR =
BINDIR = /usr/bin

SOURCES = main.cpp animal.cpp dog.cpp
OBJECTS = $(SOURCES:.cpp=.o)

EXECUTABLE = animalapp

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	$(RM) $(EXECUTABLE) *.o

install: $(EXECUTABLE)
	mkdir -p $(DESTDIR)/$(BINDIR)
	install -m 0755 $< $(DESTDIR)/$(BINDIR)