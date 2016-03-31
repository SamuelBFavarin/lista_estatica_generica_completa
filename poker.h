#ifndef POKER_H_INCLUDED
#define POKER_H_INCLUDED

#include "lista_estatica_generica.h"

using namespace std;

struct TCarta{
    int valor;
    char naipe;
};

void imprimirBaralho(TlistaEstG<TCarta, 52> L){
    for(int i=0;i<L.qtd;i++){
        cout<<"\n"<<L.elementos[i].valor<<","<<L.elementos[i].naipe;
    }
}

//ORDENAÇÃO BUBLE SORT CARTAS POR VALOR

template <typename T,int MAX>
bool TBubbleSort(TlistaEstG<T,MAX> &l){
    TCarta aux;
    for(int i=0; i < l.qtd; i++){
        for( int j=i; j < l.qtd; j++){
            if(l.elementos[i].valor > l.elementos[j].valor){
                aux = l.elementos[i];
                l.elementos[i]= l.elementos[j];
                l.elementos[j] = aux;
            }
        }
    }
}

//ORDENAÇÃO MERGE SORT CARTAS POR VALOR

template<typename T,int MAX>
bool TMergeSort (TlistaEstG<T,MAX> &l){
    int n = l.qtd;
    if(n<2){
        return false;
    }
    TCarta aux;
    if(n == 2){
        if(l.elementos[0].valor > l.elementos[1].valor){
            aux = l.elementos[0];
            l.elementos[0]= l.elementos[1];
            l.elementos[1] = aux;
        }
    }else{
        int m = n/2;
        TlistaEstG<T,52> A,B;
        inicializaLEstG(A);
        inicializaLEstG(B);

        for (int i=0; i<m; i++){
            TinsereLEstG(A,l.elementos[i]);
        }
        for (int i=m; i<n;i++){
            TinsereLEstG(B,l.elementos[i]);
        }
        TMergeSort(A);
        TMergeSort(B);
        int i=0, j=0;
        for (int k=0; k<n; k++){
            if(A.elementos[i].valor <= B.elementos[j].valor){
                l.elementos[k] = A.elementos[i];
                i++;
            }else{
                l.elementos[k] = B.elementos[j];
                j++;
            }
        }
    }
    return true;
}

#endif // POKER_H_INCLUDED
