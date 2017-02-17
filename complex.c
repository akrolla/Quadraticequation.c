#include<stdio.h>
#include<math.h>  
#include "complex.h"



			void solve_complex(int a, int b, int c)
                                    {
                                          float x_real, x_imag;
                                    
                                    x_real = -b/(2.0*a);
                                          
                                    x_imag = (sqrt(abs((b*b-4*a*c))))/(2*a);
                                                
                                                printf( " %f i \n",  x_imag);
						
                                              
                                    }
