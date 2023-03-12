#include <stdio.h>

int lab05(a)
{
     int i,n;
     
     for (a = n; a>0 ; a--) 
     {
     printf ("%d-",a);   
       i= i*a*10;
       printf ("%d\n",i);
   } 
   printf ("\n");
    return 0;
}





int lab06(long int b[], int s) 
{
    
    long int i,j,c;
    for ( i = 0; i<s - 1;i++)
     {
        for ( j  =0;j<s-i-1;j++)
         {
            if (b[j] > b[j+1])
            {
                c =b[j];
                b[j] = b[j+1];
                b[j+1] = c;
            }
       }
       
    } 
    for(i = 0; i < s; i++)
        printf ("%ld\n",b[i]);
        
    return 0;
}


