#include < stdio.h >

int main ()
{
  int  c, d, k, sum=0;
  int paramet=3;
  int primer_matriz[paramet][paramet], seg_matriz[paramet][paramet],
 multiplicar[paramet][paramet];

  printf("introduzca los elementos de la primera matriz\n");

  for(c =0; c < paramet; c++ )
  for(d =0; d< paramet; d++ )
  scanf("%d", &primer_matriz[c][d]);
  

  printf("introduzca los numeros de la segunda matriz\n");
  
  for(c =0; c<paramet; c++)
  for(d =0; d<paramet; d++)
  scanf ("%d", &seg_matriz[c][d]);

 for(c =0; c<paramet; c++)
 {
  for(d =0; d<paramet; d++)
 {
  for(k =0; k<paramet; k++)
 { 
  sum=sum + primer_matriz[c][k]*seg_matriz[k][d];
 }
  multiplicar[c][d]=sum;
  sum=0;
 }
  } 

  printf("producto de matrices:-\n");
   for(c=0; c<paramet; c++)
 {
 for (d=0; d<paramet; d++)
 printf("%d\+", multiplicar[c][d]);
  printf("\n");
}
return 0;
}

   
