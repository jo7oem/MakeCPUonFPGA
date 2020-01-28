CC      = gcc
BINDIR = ./bin/
.c .o:
	$(CC) $(LDFLAGS) $(CFLAGS) -o $(BINDIR)$@  $@.c $(LIBS)
	chmod +x $(BINDIR)$@
