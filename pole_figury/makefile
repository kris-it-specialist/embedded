CFLAGS = -Wall -g
LDFLAGS = -Lpole
LIBS = -lfigure
SOURCES = main.c
OBJECTS = $(SOURCES:.c=.o)
NAME = obliczpole

all: libfigure $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) $(LDFLAGS) -o $(NAME) $(LIBS)

libfigure:
	make -C pole

$(OBJECTS):
	$(CC) -c $(CFLAGS) $(SOURCES)

clean:
	make clean -C pole
	rm -f $(OBJECTS)
	rm -f $(NAME)
