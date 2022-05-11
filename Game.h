//
//  Game.h
//  CS32_Project1
//
//  Created by Rafi Moldovsky on 1/8/21.
//



#ifndef Game_h
#define Game_h

class City;
class Game
{
  public:
        // Constructor/destructor
    Game(int rows, int cols, int nFlatulans);
    ~Game();

        // Mutators
    void play();

  private:
    City* m_city;
    
};

#endif /* Game_h */
