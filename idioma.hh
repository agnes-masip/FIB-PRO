/** @file idioma.hh
    @brief Especificació de la classe Idioma
*/

#ifndef _IDIOMA_HH_
#define _IDIOMA_HH_

#include "taula.hh"
#include "treecode.hh"
#include "codis.hh"



#ifndef NO_DIAGRAM 
#include<iostream>
#include<map>
#include<string>
#endif

/** @class idioma
    @brief És la classe de idioma
*/
using namespace std;

class idioma{
    
private:
    
        /** @brief Atribut privat que te la taula de frecuencies
        * 
        * */
        taula taulaf;
        
        /** @brief Atribut privat que te el treecode
        * 
        * */
        treecode tree;
        /** @brief Atribut privat que te la taula de codis
        * 
        * */
        codis codi;
        
        /** @brief Responsable de crear el treecode
        * 
            \pre <em>cert</em>
            \post El treecode creat i guardat a l'atribut privat anomenat tree.
      
        */  
        void crear_treecode();
        
            
        /** @brief funció d'immersió que crea els codis
        * 
            \pre <em>cert</em>
            \post Els codis creats i guardats en l'atribut privat codi.
      
        */  
        void i_crear_codis(const BinTree<pair<string,int>>& t, string a);
       
   
    
    
public:

    /** @brief Creadora per defecte. 
      \pre <em>cert</em>
      \post El resultat és un idioma buit
    */  
    idioma(); 
    
    
    /** @brief Destructora per defecte. 
      \pre <em>cert</em>
      \post Destrueix l'idioma
    */  
    
    ~idioma();

    /** @brief Llegeix un idioma
      \pre <em>cert</em>
      \post Un idioma ple
    */  
     void llegir();
   
    
    
 
     /** @brief Modifica l'idioma. Si aquest existia, suma les taules de frecuencies. En cas contrari, afegeix l'idioma al parametre implicit.
            \pre <em>cert</em>
            \post L'idioma s'ha afegit o modificat segons la taula de frequencies.
      
     */   

    void modificar(taula& nova);
        
       
    /** @brief Decodifica el codi donat en l'idioma indicat. 
          
      \pre <em>cert</em>
      \post El codi decodificat, o en aquest que no pugues ser decodificat, un avis sobre l'error amb la posició on falla. 
    */  

     void decodifica(const string& codi); 
 
     /** @brief Codifica el text donat en l'idioma indicat.
          
          
      \pre <em>cert</em>
      \post El text codificat, o en cas que no pugues ser codificat, un avis sobre l'error i el caracter el qual falla.
      
  */  
     
    void codifica(const string& text);
    
   
     
 
     
     /** @brief Funció responsable de fer la suma de les dues taules de freqüències. 
        \pre <em>cert</em>
        \post L'idioma s'ha afegit o modificat segons la taula de frequencies.
     */  

    void suma_freq(const taula& i);
    
    
        /*-------------CONSULTORES------------------*/
   
     
     /** @brief Consulta (imprimir) tota la taula de codis.
          
            \pre <em>cert</em>
            \post S'escriu la taula de codis.
        */ 
 
     void consultar_codis();
    
    /** @brief Consulta (imprimir) solament el caracter indicat.
        
        \pre <em>cert</em>
        \post S'escriu el codi de sol un caracter.

    */  
    
    void consultar_codisol(const string& cas);
 	
    
      /** @brief Consultar (imprimir) el treecode 
          
            \pre <em>cert</em>
            \post El treecode escrit.
        */  
   
    void consultar_treecode();
    
    
  /** @brief Consulta (escriure) la taula de frequencies
          
        \pre <em>cert</em>
        \post La taula de frequencies escrita
    */  
    void consultar_freq();
    
   
    
};
#endif
