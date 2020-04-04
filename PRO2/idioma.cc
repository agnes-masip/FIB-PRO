#include "idioma.hh"
#include<set>

using namespace std;

/*-------------PRIVADES----------*/

void idioma::i_crear_codis(const BinTree<pair<string,int>>& t, string a){
    
	if(not t.left().empty()){
		i_crear_codis(t.left(), a +"0");
	}
	if(not t.right().empty()){
        
		i_crear_codis(t.right(), a +"1");
	}else if(t.left().empty()){
        codi.insert(t.value().first, a);
        
	}
}

void idioma::crear_treecode(){
    
    
    struct comp{
        bool operator() (const BinTree<pair<string,int>>& a, const BinTree<pair<string,int>>& b) const {
            if (a.value().second == b.value().second) return a.value().first < b.value().first;
            else return a.value().second < b.value().second;
        }
    };
    
    //CREACIO DEL SET AMB TOTES LES ARRELS
     set<BinTree<pair<string,int>>, comp> forest;
    
     map<string,int>::const_iterator it = taulaf.begin();
     while (it != taulaf.end()){
         BinTree<pair<string,int>> root (*it);
         forest.insert(root);
            ++it;
    }
    
   
    while (forest.size() > 1){
        
        BinTree<pair<string,int>> lef = *(forest.begin());
        forest.erase(forest.begin());
        BinTree<pair<string,int>> rig = *(forest.begin());
        forest.erase(forest.begin());
        pair<string,int> node;
        
            if (lef.value().first < rig.value().first){
                node.first = lef.value().first + rig.value().first;
                
            }
            else{
            node.first = rig.value().first + lef.value().first; 
            }
            node.second = lef.value().second + rig.value().second;
       
            
        BinTree<pair<string,int>> nou (node, lef, rig);
        
        forest.insert(nou);
    }
    

    BinTree<pair<string,int>> ttt = *(forest.begin());

    tree.igualar(ttt);
    string a;
    i_crear_codis(ttt,a);
}

/*---------------CONSTRUCTORES--------------------*/


idioma::idioma(){
	
    
}

idioma::~idioma(){
	
    
}

/*--------------LLEGIR I MODIFICAR--------------*/

void idioma::llegir(){
	taulaf.llegir();
    crear_treecode();
    
}
    

void idioma::suma_freq(const taula& i){
   taulaf.suma_freq(i);
    
}


void idioma::modificar(taula& nova){
    taulaf.suma_freq(nova);
    crear_treecode();
    
}


/*---------------CODIFICA I DECODIFICA--------------------------*/

void idioma::codifica(const string& text){
    
        string decodificado;
         if (codi.codificar(text,decodificado)) cout << decodificado << endl;
         else cout << "El texto no pertenece al idioma; primer caracter que falla: " << decodificado << endl;
}


void idioma::decodifica(const string& codi){
   
    int numfinal = 0;
    string resultat;
    
    if(tree.decodificar(codi,resultat,numfinal)){
        cout << resultat << endl;
    }else{
        cout << "El texto no procede de una codificacion del idioma; ultima posicion del codigo correspondiente al ultimo caracter que se podria decodificar: " << numfinal << endl;
    }
    
        
        
}


/*---------------CONSULTORES-------------*/

void idioma::consultar_freq(){
    taulaf.escriure(); 
}
void idioma::consultar_treecode(){
    tree.escriure();
}
void idioma::consultar_codis(){
    codi.escriure();
}
void idioma::consultar_codisol(const string& cas){
    codi.caracter(cas);
}



