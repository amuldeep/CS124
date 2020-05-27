OBJS = main.o loginCB.o readCB.o sendCB.o
CXXFLAGS = `fltk-config --cxxflags`
LDFLAGS = `fltk-config --ldflags`

lab: labgui.h eMail.h queue.hpp ${OBJS}
	g++ ${OBJS} ${CXXFLAGS} ${LDFLAGS} -o lab

doc:
	latex lab.tex
	dvips lab.dvi
	ps2pdf lab.ps
clean:
	rm *.o lab
