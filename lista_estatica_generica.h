#ifndef LISTA_ESTATICA_GEN_H_INCLUDED
#define LISTA_ESTATICA_GEN_H_INCLUDED

template <typename T, int MAX>
struct TlistaEstG{
    T elementos[MAX];
    int qtd;
};

template <typename T, int MAX>
void inicializaLEstG(TlistaEstG<T,MAX> & L){
    L.qtd =0;
}

//INSERE INICIO
template <typename T, int MAX>
bool TinsereLEstG(TlistaEstG<T,MAX> &L , T dado){
     if(L.qtd == MAX){
        return false;
     }
     for (int i=L.qtd-1;i>=0;i--){
        L.elementos[i+1] = L.elementos[i];
     }
     L.elementos[0] = dado;
     L.qtd++;
     return true;
}
//INSERE FIM
template <typename T,int MAX>
bool TinsereFimLEstG(TlistaEstG<T,MAX> &L, T dado){
    if(L.qtd == MAX){
        return false;
    }
    L.elementos[L.qtd]= dado;
    L.qtd++;
    return true;
}
//INSERE MEIO
template <typename T,int MAX>
bool TinsereMeioLEstG(TlistaEstG<T,MAX> &L, T dado, int pos){
    if(L.qtd == MAX){
        return false;
    }
    for(int i=L.qtd; i>=pos;i--){
        L.elementos[i+1]=L.elementos[i];
    }
    L.elementos[pos]= dado;
    L.qtd++;
    return true;
}

//REMOVE INICIO
template <typename T,int MAX>
bool TremoveLEstG(TlistaEstG<T,MAX> &L){
    if(L.qtd == MAX){
        return false;
    }
    for(int i=0; i<L.qtd; i++){
        L.elementos[i]=L.elementos[i+1];
    }
    L.qtd--;
    return true;
}
//REMOVE FIM
template <typename T,int MAX>
bool TremoveFimLEstG(TlistaEstG<T,MAX> &L){
    if(L.qtd == MAX){
        return false;
    }
    L.qtd--;
}

//REMOVE MEIO
template <typename T,int MAX>
bool TremoveMeioLEstG(TlistaEstG<T,MAX> &L, int pos){
    if(L.qtd == MAX){
        return false;
    }
    for(int i=pos;i<=L.qtd;i++){
        L.elementos[i]=L.elementos[i+1];
    }
    L.qtd--;
}

#endif // LISTA_ESTATICA_GEN_H_INCLUDED


