#ifndef ATL_dGetNB_geqrf

/*
 * NB selection for GEQRF: Side='RIGHT', Uplo='UPPER'
 * M : 25,80,120,160,320,640
 * N : 25,80,120,160,320,640
 * NB : 4,12,40,40,40,40
 */
#define ATL_dGetNB_geqrf(n_, nb_) \
{ \
   if ((n_) < 52) (nb_) = 4; \
   else if ((n_) < 100) (nb_) = 12; \
   else (nb_) = 40; \
}


#endif    /* end ifndef ATL_dGetNB_geqrf */
