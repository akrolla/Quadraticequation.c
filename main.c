/*
CMPSCI 1113-01
2/8/17
Quadratic Equation
*/

#include <stdio.h>
#include "linear.h"
#include "quad.h"








// Main program

int main(int argc, char *argv[])
{
	int a, b, c;


      if(argc==4)
      {
        sscanf(argv[1],"%d" ,&a) ;
        sscanf(argv[2],"%d" ,&b) ;
        sscanf(argv[3],"%d" ,&c) ;
        
          if(a==0)
              {
              	if(b==0)	
			printf("Error. %d and %d lead to a Degenerate Equation!",a ,b);
              
                   else
                    	solve_linear(b, c);
              } 
		else
       		    solve_quad(a, b, c);         
      }
            else
		printf(" Must provide 3 inputs for a, b, c.\n");             
      
return 0;
}           
                              
      
      
                          
                                          
                          
			   



