#include <iostream>
#include "lista_estatica_generica.h"
#include "poker.h"

using namespace std;

int main()
{
    TlistaEstG<TCarta,52> crupie;
    inicializaLEstG(crupie);
    TCarta a,b,c,d;
    a.valor=1;a.naipe='p';
    b.valor=12;b.naipe='c';
    c.valor=10;c.naipe='p';
    d.valor=8;d.naipe='c';
    TinsereLEstG(crupie,a);
    TinsereLEstG(crupie,b);
    TinsereFimLEstG(crupie,c);
    TinsereMeioLEstG(crupie,d,1);
    imprimirBaralho(crupie);
    //cout<<"\n-----------------"<<endl;
    //TremoveFimLEstG(crupie);
    //TremoveMeioLEstG(crupie,2);
    //TremoveLEstG(crupie);
    //imprimirBaralho(crupie);
    TBubbleSort(crupie);
    TMergeSort(crupie);
    cout<<"\n-----------------"<<endl;
    imprimirBaralho(crupie);


    return 0;

}
