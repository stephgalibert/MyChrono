//
// Chrono.hpp for nibbler in /home/galibe_s/github/nibbler/tmp
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Mon Jul 13 22:53:27 2015 stephane galibert
// Last update Mon Jul 13 23:07:52 2015 stephane galibert
//

#ifndef _CHRONO_HPP_
# define _CHRONO_HPP_

# include <chrono>

namespace Tools
{
  class Chronometer
  {
  public:
    Chronometer(void);
    ~Chronometer(void);
    
    double restart(void);
    
    void toggle(void);
    void start(void);
    void pause(void);
    
    double getElapsedTime(void);
  private:
    std::chrono::steady_clock::time_point _begin;
    std::chrono::steady_clock::time_point _current;
    bool _running;
    double _value;
  };
}

#endif /* !_CHRONO_HPP_ */
