
OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11


program.exe: program.o Cjt_idiomas.o idioma.o taula.o treecode.o codis.o
	g++ -o program.exe program.o Cjt_idiomas.o idioma.o taula.o treecode.o codis.o $(OPCIONS)
	rm -f *.o
	
program.o: program.cc
	g++ -c program.cc $(OPCIONS)
	
Cjt_idiomas.o: Cjt_idiomas.cc Cjt_idiomas.hh
	g++ -c Cjt_idiomas.cc $(OPCIONS)

idioma.o: idioma.cc idioma.hh
	g++ -c idioma.cc $(OPCIONS)
	
taula.o: taula.cc taula.hh
	g++ -c taula.cc $(OPCIONS)
	
treecode.o: treecode.cc treecode.hh BinTree.hh
	g++ -c treecode.cc $(OPCIONS)
	
codis.o: codis.cc codis.hh
	g++ -c codis.cc $(OPCIONS)
	
	
practica.tar: program.cc Cjt_idiomas.cc Cjt_idiomas.hh idioma.cc idioma.hh taula.cc taula.hh codis.cc codis.hh treecode.cc treecode.hh
	tar -cvf practica.tar program.cc Cjt_idiomas.cc Cjt_idiomas.hh idioma.cc idioma.hh taula.cc taula.hh codis.cc codis.hh treecode.cc treecode.hh Makefile html.zip jp_agnes.masip.zip
	

clean:
	rm -f *.o
	rm -f *.exe
