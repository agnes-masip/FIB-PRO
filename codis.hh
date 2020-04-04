/** @file codis.hh
    @brief Especificacio de la classe taula
*/

#ifndef CODIS_HH
#define CODIS_HH



#ifndef NO_DIAGRAM 
#include<iostream>

#include<map>

#include<string>
#endif

/** @class codis
    @brief Es la classe de codis
*/

using namespace std;

class codis{
    
    private:
        /** @brief Atribut privat que guarda la taula de codis
        * 
        * */
        map<string,string> codi;
        
        
        /** @brief metode privat que estudia els caracters per evitar problemes en els caracters especials.
        * 
        * */
        static bool next_symbol(const string& s, int& i, string& out);
        
        
        
    public:
        
        /*--------------------CONSTRUCTORA---------------------*/
        
         /** @brief Creadora per defecte. 
          
            \pre <em>cert</em>
            \post El resultat es els codis buits
        */  
        
        codis();
        
         /** @brief Destructura per defecte. 
          
                \pre <em>cert</em>
                \post Destrueix els codis
         */  
        ~codis();
        
       
       
       
      /*------------------CODIFICA-------------------------*/
      
        /** @brief Codifica una lletra
            \pre <em>cert</em>
            \post El resultat es cert si el codi si es pot codificar. Si no es pot, es fals.
        */  
       
        bool codificar(const string& text, string& decodificado);
        
        
         /*------------------------INSERT-------------------------*/
        
        
         
        
        /** @brief Insereix els codis dins la taula de codis (parametre implicit)
                \pre <em>cert</em>
                \post codis afegits al parametre implicit
        */  
        
        void insert(const string& b, const string& a);
        
        
        /*-----------------------ESCRIURE---------------------*/
        
         /** @brief Escriure tots els codis
          
            \pre <em>cert</em>
            \post Tota la taula de codis escrita.
        */  
        
        void escriure();
        
        
        /** @brief Escriure solament el codi del caracter indicat.
            \pre <em>cert</em>
            \post Els codis del caracter indicat.
         */  
         
        void caracter(const string& cas);
        
 
        
};
#endif
