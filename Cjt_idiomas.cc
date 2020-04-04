#include "Cjt_idiomas.hh"

using namespace std;

/*--------------------CONSTRUCTORES----------------*/
Cjt_idiomas::Cjt_idiomas(){
 
	
}

Cjt_idiomas::~Cjt_idiomas(){
 
	
}

/*-------------MODIFICAR I AFEGIR --------------------*/

void Cjt_idiomas::afegir_idioma(string& nom, idioma idiom) {
    
    conjunt[nom] = idiom;
}

void Cjt_idiomas::modificar(const string& nom, taula& nova){
    
    conjunt[nom].modificar(nova);
  
}


/*--------------------CONSULTORES--------------------------*/

bool Cjt_idiomas::te_idioma(const string& nom) {
    
        if (conjunt.find(nom)==conjunt.end()) return false;
        return true;
}

void Cjt_idiomas::consultar_codis(const string& nom){
    
    conjunt[nom].consultar_codis();
}
void Cjt_idiomas::consultar_codisol(const string& nom, string cas){
    
    conjunt[nom].consultar_codisol(cas);
}

void Cjt_idiomas::consultar_freq(const string& nom){
    
    conjunt[nom].consultar_freq();
    
}

void Cjt_idiomas::consultar_treecode(const string& nom){
    
    conjunt[nom].consultar_treecode();
}

  /*----------CODIFICA I DECODIFICA----------*/
     



    void Cjt_idiomas::decodifica(const string& nom, string codi){
        
            conjunt[nom].decodifica(codi);
       
    }

    
    void Cjt_idiomas::codifica(const string& nom, string& text){
        conjunt[nom].codifica(text);
    }
    
