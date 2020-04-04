/** @file Cjt_idiomas.hh
    @brief Especificacio de la clases Cjt_idiomas
*/


#ifndef _CJT_IDIOMAS_HH_
#define _CJT_IDIOMAS_HH_

#include "idioma.hh"

#ifndef NO_DIAGRAM 
#include<iostream>
#include<map>
#include<string>
#endif

/** @class Cjt_idiomas
    @brief Es un conjunt d'idiomes.
*/


class Cjt_idiomas{
    
    private:
        /** @brief Atribut privat que te tot un conjunt d'idiomes.
        * 
        * */
        map<string,idioma> conjunt;
        
        
    public:
        
 /*------------------CONSTRUCTORES--------------------*/
       
        
        /** @brief Creadora per defecte. 
         * 
            \pre <em>cert</em>
            \post El resultat es un conjunt d'idiomes buit.
        */  
        
        Cjt_idiomas();
        
        
        
        /** @brief Destructora per defecte. 
          
            \pre <em>cert</em>
            \post Destrueix el conjunt.
        */  
         ~Cjt_idiomas();
         
         
         
    /*------------------AFEGIR I MODIFICAR--------------------*/
         
         /** @brief Afegeix un idioma a un conjunt d'idiomes.
          
            \pre No pot haver un idioma amb el mateix nom dins del parametre implicit. Si aquest fos el cas, es reemplacaria.
            \post El parametre implicit te un idioma mes.
        */  
         void afegir_idioma(string& nom, idioma idiom);
         
         
         
        /** @brief Modifica el conjunt i, si hi ha l'idioma, suma les taules de frecuencies. En cas contrari, afegeix l'idioma al parametre implicit.
            \pre <em>cert</em>
            \post L'idioma s'ha afegit o modificat segons la taula de frequencies.
      
        */  
          void modificar(const string& nom, taula& nova);
        
  
        
    /*------------------CONSULTORES--------------------*/
         
         /** @brief Comprova si dins del parametre implicit hi ha l'idioma amb el nom donat.
          
                \pre <em>cert</em>
                \post  Cert quan existeix l'idioma dins del parametre implicit, fals en cas contrari.
        */  
          bool te_idioma(const string& nom);
          
          
        /** @brief Consulta (imprimir) tota la taula de codis.
          
            \pre Existeix l'idioma dins del parametre implicit
            \post S'escriu la taula de codis
        */ 
        
       void consultar_codis(const string& nom);
       
    
        /** @brief Consulta (imprimir) solament el caracter indicat.
            \pre Existeix l'idioma dins del parametre implicit
            \post S'escriu el codi de sol un caracter.

        */  
    
       void consultar_codisol(const string& nom, string cas);
    
        /** @brief Consultar (imprimir) el treecode 
          
            \pre Existeix l'idioma dins del parametre implicit
            \post El treecode escrit.
        */  
  
        
    void consultar_treecode(const string& nom);
    
    
        /** @brief Consulta (escriure) la taula de frequencies
          
            \pre Existeix l'idioma dins del parametre implicit
            \post La taula de frequencies escrita
        */  
  
    void consultar_freq(const string& nom);
          

               
          /*------------CODIFICA I DECODIFICA---------*/
    
           
    /** @brief Decodifica el codi donat en l'idioma indicat. 
          
      \pre Existeix l'idioma dins del parametre implicit
      \post El codi decodificat, o en aquest que no pugues ser decodificat, un avis sobre l'error amb la posició on falla. 
    */  
    void decodifica(const string& nom, string codi);

    
     /** @brief Codifica el text donat en l'idioma indicat.
          
          
      \pre Existeix l'idioma dins del parametre implicit
      \post El text codificat, o en cas que no pugues ser codificat, un avis sobre l'error i el caracter el qual falla.
      
  */  
    
    void codifica(const string& nom,string& text);
  
};
#endif
