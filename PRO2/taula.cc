#include "taula.hh"


/*----------------CONSTRUCTORES I LLEGIR-------------------*/

taula::taula(){
    
}
taula::~taula(){
    
}
void taula::llegir(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string nom;
        int f;
        cin >> nom >> f; 
        taulaf[nom] = f; 
    }
}

/*----------------ESCRIURE-------------------*/

void taula::escriure(){
    
    for(map<string, int>::const_iterator It = taulaf.begin(); It != taulaf.end(); ++It){
        cout << (*It).first << " " << (*It).second << endl;
        
    }
}

/*----------------MODIFICA---------------------*/

void taula::suma_freq(const taula& i){
    
   for(map<string, int>::const_iterator It = i.taulaf.begin(); It != i.taulaf.end(); ++It){ 
       taulaf[(*It).first] += (*It).second;
       
   }
}

//taulaf[(*It).first] = (*It).second; reemplaza

/*----------------CONSULTORES-------------------*/

map<string,int>::iterator taula::begin(){
    return taulaf.begin();
    
}

map<string,int>::iterator taula::end(){
    return taulaf.end();
    
}
