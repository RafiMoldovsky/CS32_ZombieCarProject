//
//  Flatulan.h
//  CS32_Project1
//
//  Created by Rafi Moldovsky on 1/7/21.
//



#ifndef Flatulan_h
#define Flatulan_h
#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;
class City;
class Flatulan
{
  public:
        // Constructor
    Flatulan(City* cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;

        // Mutators
    void move();
    bool possiblyGetConverted();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
};


#endif /* Flatulan_h */
