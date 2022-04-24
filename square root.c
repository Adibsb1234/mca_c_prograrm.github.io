#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
  
int main ()  
{  
 
    int x, res;  
    float y, res1;  
    double z, res2;  
      
    x = 289;  
    
    res = sqrt(x);   
    printf (" The square root of %d is: %d", x, res);  
  
   
    y = 12.25;  
      
    res1 = sqrt(y);   
    printf (" \n The square root of %.2f is: %.2f", y, res1);  
          
           
    z = 144.00;  
    
    res2 = sqrt(z);   
    printf (" \n The square root of %.2lf is: %.2lf", z, res2);  
      
    return 0;     
} 
