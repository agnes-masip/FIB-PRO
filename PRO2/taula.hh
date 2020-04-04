/** @file taula.hh
    @brief Especificació de la classe taula
*/

#ifndef _TAULA_HH_
#define _TAULA_HH_


#ifndef NO_DIAGRAM 
#include<iostream>
#include<map>
#include<string>
#endif

/** @class taula
    @brief És la classe de la taula de freqüències
*/
using namespace std;

class taula{
    
private:
    
        /** @brief Atribut privat que te la taula de frecuencies
        * 
        * */
    map<string,int> taulaf;
    
    
    

    
    
public:
    
    /*----------------CONSTRUCTORES I LLEGIR-------------------*/
    /** @brief Creadora per defecte
          
      \pre <em>cert</em>
      \post El resultat és una taula de freqüències buida.
      
  */  
    taula(); 
    
    
    /** @brief Destructora per defecte. 
          
      \pre <em>cert</em>
      \post Destrueix la taula de frecuencies.
      
  */  
    
    ~taula();
    
    

    
     /** @brief Llegeix una taula de frequencies.
          
      \pre <em>cert</em>
      \post El parametre implicit esta no buit.
      
  */  
     
   void llegir();
   
   
   
   
   /*----------------MODIFICA---------------------*/
   
  /** @brief Modifica l'idioma. Si aquest existia, suma les taules de frecuencies. En cas contrari, afegeix l'idioma al parametre implicit.
            \pre <em>cert</em>
            \post L'idioma s'ha afegit o modificat segons la taula de frequencies.
      
     */ 
   
     void suma_freq(const taula& i);
     
     
     
     /*----------------CONSULTORES-------------------*/
     
     /** @brief Consulta el iterador del map en la posició begin
          
      \pre <em>cert</em>
      \post l'iterador begin del map
      
  */  
     map<string,int>::iterator begin();
     
      /** @brief Consulta el iterador del map en la posició end
          
      \pre <em>cert</em>
      \post l'iterador end del map
      
  */  
    
     map<string,int>::iterator end();
     
   
   
   
    
   /*----------------ESCRIURE-------------------*/
   
    /** @brief Escriure la taula de frequencies 
          
      \pre <em>cert</em>
      \post la taula de frequencies escrita.
    
  */  
    
  
    void escriure();
    

};
#endif
