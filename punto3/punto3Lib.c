//
// Created by Ivan's PC on 10/13/2019.
//

#include "punto3Lib.h"

/**
 * Retorna una estructura que contiene un arreglo de indices(x,y) y la cantidad total de puntos de sillas encontrados.
 * Se dice que una matriz tiene un punto de silla si alguna posición de la matriz es
 * el menor valor de su fila
 * y a la vez el mayor de su columna
 * @param m
 * @param n
 * @param matriz
 * @return
 */
RESULTADOS puntos_de_silla(int m, int n, float x[m][n])
{
    int i,j,k,l,contx,conty;
    struct resultados res;
    l = 0;

    for(i = 0; i < m;i++)
    {
        for(j = 0;j < n;j++)
        {
            contx = 0;
            conty = 0;
            for(k = 0;k < m; k++)
            {
                if(x[i][j] <= x[k][j])
                {
                    contx++;
                }
            }

            for(k = 0;k < n; k++)
            {
                if( x[i][j] >= x[i][k])
                {
                    conty++;

                }
            }

            if(contx == m && conty == n)
            {
               res.indices[l].x = i;
               res.indices[l].y = j;

               l++;

            }
        }
    }

    res.cantidad_resultados_indices = l;
    return  res;
}