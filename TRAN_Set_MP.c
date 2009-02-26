#include <stdio.h>
#include <math.h>
#include <string.h>

void TRAN_Set_MP(
        int job, 
        int atomnum, int *WhatSpecies, int *Spe_Total_CNO, 
        int *NUM,  /* output */
        int *MP    /* output */
)
{
  int Anum, i, wanA, tnoA;

 /* setup MP */
  Anum = 1;
  for (i=1; i<=atomnum; i++){
    if (job) MP[i]=Anum; 
    wanA = WhatSpecies[i];
    tnoA = Spe_Total_CNO[wanA];
    Anum = Anum + tnoA;
  }

  *NUM=Anum-1;
} 


