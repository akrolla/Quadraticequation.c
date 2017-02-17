/*
CMPSCI 1113-01
2/8/17
Quadratic Equation
*/

#include <stdio.h>
#include <math.h>

void solve_linear(int, int);
void solve_quad(int, int, int);
void solve_real(int, int, int);
void solve_complex(int, int, int);


// Main program

int main(int argc, char *argv[])
{
	int a, b, c;


      if(argc==4)
      {
        sscanf(argv[1],"%d" ,&a) ;
        sscanf(argv[2],"%d" ,&b) ;
        sscanf(argv[3],"%d" ,&c) ;
        
          if(a==0 && b==0)
              {
              	printf("Error. %d and %d lead to a Degenerate Equation!",a ,b);
              
                   else
                    	solve_linear(b, c);
               }
		else
       		    solve_quad(a, b, c);         
      }
            else
		printf(" Must provide 3 inputs for a, b, c.\n")             
      
return 0;
}           
                               //sub programs
      
      
                          void solve_real(int a, int b, int c)
                                     {
                                    float x1, x2;
                                    
                                    x1 = (-b + sqrt(b*b-4*a*c))/(2*a) ;
                                    
                                    x2 = (-b - sqrt(b*b-4*a*c))/(2*a);
                                    
                                           printf("%f is x1.\n",x1);
                                           printf("%f is x2.\n",x2);
                                     }
                              
                            void solve_complex(int a, int b, int c)
                                    {
                                          float x_real, x_imag;
                                    
                                    x_real = -b/(2.0*a);
                                          
                                    x_imag = (sqrt(b*b-4*a*c))/(2*a);
                                                
                                                printf("%f + %fi\n", x_real, x_imag);
                                                printf("%f - %fi\n", x_real, x_imag);
                                    }
                                          
                            void solve_linear(int b, int c)
                              {
                                    float x;
                                         x = (float)(-c)/b ;
                                          printf("%f\n", x);
                              }
                              
			   void solve_quad(int a, int b, int c)
				{

					if(b*b-4*a*c < 0)
						solve_complex(a, b, c);	
					else
						solve_real(a, b, c);
				}


