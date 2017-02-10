/*

CMPSCI 1113-01
2/8/17
Quadratic Equation
*/

#include <stdio.h>
#include <math.h>

void solve_linear();
void solve_quad();
void solve_real();
void solve_complex();
int a; int b; int c;

// Main program

int main(int argc, char*argv[])
{
      if (argc==4)
      {
        sscanf("%d" , a) ;
        sscanf("%d" , b) ;
        sscanf("%d" , c) ;
        
          if (a==0 && b==0)
              {
              printf("Error. Degenerate Equation! \n");
              }
           else
              {
              solve_linear(a,b,c);
              }
      }
      else
      {
            solve_quad(a,b,c);
      }
            
            
     
       
}




