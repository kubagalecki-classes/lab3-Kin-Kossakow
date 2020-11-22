#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int t)
{
  if (t > 0)
  {
    int iter;
    iter = 0;
    int sum;
    sum =0;
    int z;
    z=0;
    int tmp;
    Stocznia stocznia{};
    Statek* s1;
   
    while ( iter <100000 && sum < t)
    {
    s1 = stocznia();
    tmp = s1->transportuj(); 
    sum = sum + tmp;
    iter = iter +1;
    s1=dynamic_cast<Zaglowiec*>(s1);
    if(s1)
    {
      z = z +1;
    }
    delete s1;
    }

   return z;
  }

  else
  {
    return 0;
  }

}
