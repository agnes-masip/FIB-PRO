/** @file treecode.hh
    @brief Especificació de la clase taula
*/

#ifndef _TREECODE_HH_
#define _TREECODE_HH_


#ifndef NO_DIAGRAM 
#include <iostream>
#include <map>
#include "BinTree.hh"
#include <string>
#endif

/** @class treecode
    @brief Es la classe de treecode
*/
using namespace std;

class treecode{
    
private:
    /** @brief Atribut privat que te l'arbre binari treecode
        * 
        * */
    BinTree<pair<string,int>> tree;
    
    /** @brief Metode privat recursiu que decodifica el treecode segons el codi donat.
        * 
        * */

    void decodificar_tree(const string& codi, BinTree<pair<string,int>> arbre, string& resultat, int& numfinal, bool& pot_deco, int& i);
    
    /** @brief Metode privat recursiu que imprimeix el treecode en preordre.
        * 
        * */
    
    void i_escriure_pre(const BinTree<pair<string,int>>& t);
    
    /** @brief Metode privat recursiu que imprimeix el treecode en inordre.
        * 
        * */
    void i_escriure_in(const BinTree<pair<string,int>>& t);
     


    
   
        
    
public:
    
    //--------------CONSTRUCTORAS---------------
    
    /** @brief Creadora per defecte. 
          
      \pre <em>cert</em>
      \post El resultat es un treecode buit
     
  */  
    treecode(); 
    
      
    /** @brief Creadora amb un treecode de paràmetre 
          
      \pre <em>cert</em>
      \post El resultat es un treecode no buit
     
  */  
    treecode(BinTree<pair<string,int>> treec); 
    
    
    
    /** @brief Funció per ficar un treecode dins de l'atribut privat on es guarda el treecode.
          
      \pre <em>cert</em>
      \post El resultat és el treecode dins de l'atribut.
  */  
    
    void igualar(const treecode& treecod);
  
     
    
    /** @brief Destructora per defecte. 
          
      \pre <em>cert</em>
      \post Destrueix el treecode
      
  */  
    
    
    ~treecode();
    

 
    
     
 
     /*-----------------CODIFICA I DECODIFICA----------------------*/
     
           
    /** @brief Decodifica el codi donat en l'idioma indicat. 
          
      \pre <em>cert</em>
      \post El codi decodificat, o en aquest que no pugues ser decodificat, un avis sobre l'error amb la posició on falla. 
    */  
     
     bool decodificar(const string& codi, string& resultat, int& numfinal);
     
     /*-----------------ESCRIURE----------------------*/
     
     /** @brief Escriure el treecode
      * 
      \pre <em>cert</em>
      \post El treecode escrit
      
  */  

    void escriure();
     
};
    
#endif
