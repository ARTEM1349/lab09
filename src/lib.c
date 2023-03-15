#include <stdio.h>

int lab05(int a)
{
     int i =200;
     int n =1;
     int x;
     for (a = n; a<10 ; a++)
     {  
       x= i*(1+n*a);
   }
    return x;
}





int lab06(long int b[], int s, int a){
   
    long int i,j,c;
    for ( i = 0; i<s;i++)
     {
        for ( j  =0;j<s-i;j++)
         {
            if (b[j] > b[j+1])
            {
                c =b[j];
                b[j] = b[j+1];
                b[j+1] = c;
            }
       }
       
    }
    c = b[a];
    return c;
}
