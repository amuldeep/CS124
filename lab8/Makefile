OBJS = main.o

CXXFLAGES = -g -std=c++11 'fltk-config --cxxflags'
LDFLAGS = 'fltk-config --ldflags'

lab: lab.h heap.hpp ${OBJS}
	g++ ${OBJS} ${CXXFLAGS} ${LDFLAGS} -o lab
	
run:
	./lab

doc:
	latex lab.tex
	dvips lab.dvi
	ps2pdf lab.ps
	
clean:
	rm *.o lab
