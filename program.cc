/** @mainpage PRACTICA 2019
 Aquesta és la meva pràctica. La qual tracta en construir un programa modular per codificar i decodificar texts escrits en diversos idiomes. Les classes que he fet servir són <em>Cjt_idiomas</em>, <em>idioma</em>, <em>codis</em>, <em>taula</em> i <em>treecode</em>.

*/

/** @file main.cc
    @brief Programa principal pel exercici <em>Practica</em>.
*/



#include "Cjt_idiomas.hh"
#include "idioma.hh"


/** @brief Programa principal per a la pràctica <em>Practica</em>.
*/

using namespace std;  

int main(){
    int n; //numero d'diomes
    cin >> n;
    
    //Llegir idiomes
    Cjt_idiomas conjunt;
    
    for(int j=0;j<n;j++){ 
        string nom;
        cin >> nom;
        idioma idi;
        idi.llegir();
        conjunt.afegir_idioma(nom,idi);
    }
    
    string opcio;
    while (cin >> opcio and opcio != "fin"){
        if (opcio == "anadir/modificar"){
        	string nom;
        	cin >> nom;
            taula t;
            t.llegir();
            if(conjunt.te_idioma(nom)) cout << "Modificado " << nom << endl;
            else cout << "Anadido " << nom << endl;
            conjunt.modificar(nom,t);
                
           cout << endl;
            
        }else if (opcio == "codifica"){
            string nom;
            cin >> nom;
            string text;
            cin >> text;
            
           
            cout << "Codifica en " << nom << " el texto:" << endl << text << endl;
          
            if(conjunt.te_idioma(nom)){
                 
                conjunt.codifica(nom,text);
   
            }else{
                cout << "El idioma no existe" << endl;
            }
            
            cout << endl;
            
        }else if (opcio == "decodifica"){
            string nom;
            cin >> nom;
            string codi;
            cin >> codi;
            
            cout << "Decodifica en " << nom << " el texto:" << endl << codi << endl;
            if(conjunt.te_idioma(nom)){
       
                conjunt.decodifica(nom,codi);
            }
            else{
                cout << "El idioma no existe" << endl;
            }
            
            cout << endl;
            
        }else if (opcio == "tabla_frec"){
            string nom;
            cin >> nom;
            cout << "Tabla de frecuencias de " << nom << ":" << endl;
            if(conjunt.te_idioma(nom)){
                conjunt.consultar_freq(nom);
            }else{
                cout << "El idioma no existe" << endl;
            }
            
            cout << endl;
  
        }else if (opcio == "treecode"){
            string nom;
            cin >> nom;
            cout << "Treecode de " << nom <<":" << endl;
            if(conjunt.te_idioma(nom)){
                conjunt.consultar_treecode(nom);
            }
            else{
                cout << "El idioma no existe" << endl;
            }
           
			cout << endl;
            
        }else if(opcio == "codigos"){
            string nom;
            cin >> nom;
            string cas;
            cin >> cas;
			
            
            if(cas == "todos"){
                    cout << "Codigos de " << nom << ":" << endl;
                    if(conjunt.te_idioma(nom)){
                    conjunt.consultar_codis(nom);
                    }
                    else{
                    cout << "El idioma no existe" << endl;
                    }
            }
            
            if (cas != "todos"){
                    cout << "Codigo de " << cas << " en "<<nom <<":" << endl;
                    if(conjunt.te_idioma(nom)){
                        conjunt.consultar_codisol(nom,cas);
                    }
                    else{
                    cout << "El idioma no existe o el caracter no esta en el idioma" << endl;
                    }
            }
            
            cout << endl;
                        
        }  
    }
    
}

