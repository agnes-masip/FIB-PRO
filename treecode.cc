#include "treecode.hh"


/*-----------------PRIVADES----------------------*/



void treecode::decodificar_tree(const string& codi, BinTree<pair<string,int>> arbre, string& resultat, int& numfinal, bool& pot_deco, int& i){
    
        if(arbre.left().empty()){
            resultat += arbre.value().first;
            numfinal = i;
            --i; //marxa del bucle i el for fa ++i.
        }
        else if(codi[i] == '0'){
            decodificar_tree(codi,arbre.left(),resultat,numfinal,pot_deco,++i);
        }
        else if(codi[i] == '1') {
            decodificar_tree(codi,arbre.right(),resultat,numfinal,pot_deco,++i);
        }
        else{
            pot_deco = false;
        }
         /* NO FA FALTA. PERO ES MES INTUITIU.
          * 
          * if(i == codi.length()){
            pot_deco = false;
            
        }*/

}

void treecode::i_escriure_pre(const BinTree<pair<string,int>>& t){
    cout << t.value().first << " " << t.value().second << endl;
    if(not t.left().empty()) i_escriure_pre(t.left());
    if(not t.right().empty()) i_escriure_pre(t.right());
}

void treecode::i_escriure_in(const BinTree<pair<string,int>>& t){
    
    if(not t.left().empty()) i_escriure_in(t.left());
    cout << t.value().first << " " << t.value().second << endl;
    if(not t.right().empty()) i_escriure_in(t.right());
}


/*-----------------CONSTRUCTORES----------------------*/
treecode::treecode(){
    
}

void treecode::igualar(const treecode& treecod) {
    tree = treecod.tree;
}

treecode::~treecode(){
    
}


treecode::treecode(BinTree<pair<string,int>> treec) {
    tree = treec;
}




/*-----------------DECODIFICA---------------------*/


bool treecode::decodificar(const string& codi, string& resultat, int& numfinal){
        bool pot_deco = true;
        for (int i = 0; i < codi.length() and pot_deco; ++i) {
            decodificar_tree(codi,tree,resultat,numfinal, pot_deco, i);
        }
        return pot_deco;
}


/*-----------------ESCRIURE----------------------*/


void treecode::escriure(){

   cout << "recorrido en preorden:" << endl;
   i_escriure_pre(tree);
   cout << "recorrido en inorden:" << endl;
   i_escriure_in(tree);
    
}

