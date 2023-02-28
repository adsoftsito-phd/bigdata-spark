#include <iostream>
#include <cmath>
using namespace std;

int H(double *w, double *x, int n)
{
  double sum = 0.0;
  for (int i=0; i <=n ; i++)
  {
    sum += w[i] * x[i];
  }

  cout << sum << endl;
  if ( sum >= 0.0 )  
    return 1;
  else
    return 0; 
}

int sign(double *w, double *x, int n)
{
  double sum = 0.0;
  for (int i=0; i <=n ; i++)
  {
    sum += w[i] * x[i];
  }

  cout << sum << endl;
  if ( sum > 0.0 )  
    return 1;
  else
    return 0; 
}


int main(void)
{
   int n=5;   // length
   double theta = 0.5;  // threshold

   // memory allocation w
   double *w = new double[n];
   w[0] = -theta;
   w[1] = 0.7;
   w[2] = -1.1;
   w[3] = 4.5;
   w[4] = 1.5;
   
   // memory allocation x

   double *x = new double[n];
   x[0] = 0.0;   // bias
   x[1] = 0.0;
   x[2] = 0.0;
   x[3] = 0.0;
   x[4] = 0.0;

   int r1 = H(w, x, n);
   cout << "H = " << r1  << endl;

   int r2 = sign(w, x, n);
   cout << "sign = " << r2  << endl;


  return 0;
}



