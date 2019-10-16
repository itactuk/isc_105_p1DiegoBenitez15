//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto1Lib.h"

/**
 * Invierte una cadena.
 * Dado: "Hola" debe de convertila en "aloH"
 * @param cadena
 */
void invierte(char cadena[],int ni,int nf)
{
   char aux;

   if(ni >= nf)
   {
       return;
   }
   else if(ni < nf)
   {
       aux = cadena[ni];
       cadena[ni] = cadena[nf -1];
       cadena[nf- 1] = aux;

       invierte(cadena,ni+1,nf-1);
   }
}