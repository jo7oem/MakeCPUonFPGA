CC      = gcc
BINDIR = ./bin/
.c .o:
	$(CC) $(LDFLAGS) -o $(BINDIR)$@  $@.c $(LIBS)
	chmod +x $(BINDIR)$@
