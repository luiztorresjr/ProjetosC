CPP    = g++
OBJS   = main.o \
         NovoArquivo.o \
         NovoArquivo1.o

LIBS   = -L"$(MINGW_PATH)\lib" -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32 -lconio -lconio_unicode
CFLAGS = -I"$(MINGW_PATH)\include"

all: clean-before build clean-after

clean-before:
	rm -f $(OBJS)

clean-after:
	rm -f $(OBJS)

build: $(OBJS)
	$(CPP) -Wall -s -o arco.exe $(OBJS) $(LIBS)

main.o: main.cpp
	$(CPP) -Wall -s -c main.cpp -o main.o $(CFLAGS)

NovoArquivo.o: NovoArquivo.cpp
	$(CPP) -Wall -s -c NovoArquivo.cpp -o NovoArquivo.o $(CFLAGS)

NovoArquivo1.o: NovoArquivo1.cpp
	$(CPP) -Wall -s -c NovoArquivo1.cpp -o NovoArquivo1.o $(CFLAGS)

