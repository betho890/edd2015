#include <stdio.h>

int main() {
 int m,n,p,q,c,d,k,sum=0;
int primer [10][10],seg[10][10], multiplicar[10][10];

   printf("ingrese el numero de renglones y columnas de lka primer matriz\n");
   scanf("%d%d", &m,&n);
   prinf("ingrese los elementos de la primera matriz \n");

   for ( c=0; c<m; c++)
   for ( d=0; d<n; d++)
   scanf("%d",&primer[c][d]);
   
     printf("inserte el numero de columnas y filas de la segunda matriz\n");
     scanf("%d%d",&p,&q);


        if(n !=p) 
          printf("las matrices no se pueden multiplicar por no tener el mismo parametro\n");
           else{
       printf ("ingrese los elementos de la segunda matrix \n");

            for(c=0;c<p; c++)
            for(d=0; d<q; d++)
            scanf("%d",&seg[c][d]);

               for(c=0; c<m; c++)
                 {
               for(d=0;d<q; d++)
                 {
               for( k=0; k<p; k++)
                 {
                sum=sum + primer[c][k]*seg[k][d];
             }
           
          multiplicar[c][d]=sum;
          sum=0;
         }
        }

    printf ("resultados\n");
      for(c=0; c<m; c++)
      {
      for (d=0; d<q; d++)
        printf("%d\t", multiplicar[c][d]);

      printf("\n");
}
}
 return 0;
 }  
