//
//  History.cpp
//  CS32_Project1
//
//  Created by Rafi Moldovsky on 1/8/21.
//
#include <iostream>
#include <string>
#include <random>
#include <utility>
#include <cstdlib>
using namespace std;
#include "History.h"
#include "globals.h"
History::History(int nRows, int nCols)
{
    m_rows=nRows;
    m_cols=nCols;
    // Fill the grid2 with dots
    int r, c;
for (r = 0; r < m_rows; r++)
    for (c = 0; c < m_cols; c++)
        grid2[r][c] = '.';
};
bool History::record(int r, int c)
{
    if (r <= 0  ||  c <= 0  ||  r > m_rows  ||   c > m_cols)
       {
           return false;
       }
    if(grid2[r-1][c-1]=='.')
        grid2[r-1][c-1]='A';
    else if(grid2[r-1][c-1]=='A')
        grid2[r-1][c-1]='B';
    else if(grid2[r-1][c-1]=='B')
        grid2[r-1][c-1]='C';
    else if(grid2[r-1][c-1]=='C')
        grid2[r-1][c-1]='D';
    else if(grid2[r-1][c-1]=='D')
        grid2[r-1][c-1]='E';
    else if(grid2[r-1][c-1]=='E')
        grid2[r-1][c-1]='F';
    else if(grid2[r-1][c-1]=='F')
        grid2[r-1][c-1]='G';
    else if(grid2[r-1][c-1]=='G')
        grid2[r-1][c-1]='H';
    else if(grid2[r-1][c-1]=='H')
        grid2[r-1][c-1]='I';
    else if(grid2[r-1][c-1]=='I')
        grid2[r-1][c-1]='J';
    else if(grid2[r-1][c-1]=='J')
        grid2[r-1][c-1]='K';
    else if(grid2[r-1][c-1]=='K')
        grid2[r-1][c-1]='L';
    else if(grid2[r-1][c-1]=='L')
        grid2[r-1][c-1]='M';
    else if(grid2[r-1][c-1]=='M')
        grid2[r-1][c-1]='N';
    else if(grid2[r-1][c-1]=='N')
        grid2[r-1][c-1]='O';
    else if(grid2[r-1][c-1]=='O')
        grid2[r-1][c-1]='P';
    else if(grid2[r-1][c-1]=='P')
        grid2[r-1][c-1]='Q';
    else if(grid2[r-1][c-1]=='Q')
        grid2[r-1][c-1]='R';
    else if(grid2[r-1][c-1]=='R')
        grid2[r-1][c-1]='S';
    else if(grid2[r-1][c-1]=='S')
        grid2[r-1][c-1]='T';
    else if(grid2[r-1][c-1]=='T')
        grid2[r-1][c-1]='U';
    else if(grid2[r-1][c-1]=='U')
        grid2[r-1][c-1]='V';
    else if(grid2[r-1][c-1]=='V')
        grid2[r-1][c-1]='W';
    else if(grid2[r-1][c-1]=='W')
        grid2[r-1][c-1]='X';
    else if(grid2[r-1][c-1]=='X')
        grid2[r-1][c-1]='Y';
    else if(grid2[r-1][c-1]=='Y')
        grid2[r-1][c-1]='Z';
    return true;
   
}
void History::display() const
{
    clearScreen();
    int r,c;
    for (r = 0; r < m_rows; r++)
    {
        for (c = 0; c < m_cols; c++)
            cout << grid2[r][c];
        cout << endl;
    }
    cout << endl;
    
        
   
}

