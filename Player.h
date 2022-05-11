//
//  Player.h
//  CS32_Project1
//
//  Created by Rafi Moldovsky on 1/8/21.
//


#ifndef Player_h
#define Player_h
class City;  // This is needed to let the compiler know that City is a
             // type name, since it's mentioned in the Flatulan declaration.


class Player
{
  public:
        // Constructor
    Player(City *cp, int r, int c);

        // Accessors
    int  row() const;
    int  col() const;
    int  age() const;
    int  health() const;
    bool isPassedOut() const;

        // Mutators
    void  preach();
    void  move(int dir);
    void  getGassed();

  private:
    City* m_city;
    int   m_row;
    int   m_col;
    int   m_health;
    int   m_age;
};

#endif /* Player_h */
