#include "codis.hh"



/*--------------CREADORES-----------*/

codis::codis(){
    
}
        
codis::~codis(){
    
}
        
/*--------------CODIFICAR-----------*/    


bool codis::next_symbol(const string& s, int& i, string& out){
    /* Pre: i=I<s.length() es la primera posicion de un caracter de s */
    /* Post: out es el caracter que comienza en s[I]; si out es normal
    retorna true y i=I+1, si es especial retorna false y i=I+2 */
    if (s[i]>=0) {out = string(1, s[i]); ++i; return true;}
    else {out = string(s, i, 2); i+=2;; return false;}
}  



bool codis::codificar(const string& text, string& decodificado){
    
        int i = 0;
        string fin;
        string cas;
        map<string,string>::const_iterator cit;
        while(text.length() > i){
           
            next_symbol(text,i,cas);
            cit = codi.find(cas);
            if(cit == codi.end()){
                    decodificado = cas;
                    return false;
        	}
       		else fin += codi[cas];
    
            
        }
            decodificado = fin;
            return true;
        
}
    
    
    
/*--------------INSERT----------*/
    


void codis::insert(const string& b, const string& a){
    codi[b] = a;
}

/*--------------ESCRIURE-----------*/

void codis::escriure(){
    
    map<string,string>::const_iterator cit = codi.begin();
    while(cit != codi.end()){
        cout << (*cit).first << " " << (*cit).second << endl;
        ++cit;
    }
    
}

void codis::caracter(const string& cas){
    map<string,string>::const_iterator cit;
    cit = codi.find(cas);
    if(cit == codi.end()) cout << "El idioma no existe o el caracter no esta en el idioma" << endl;
    else cout << cas << " " << (*cit).second << endl;
    
}
 
