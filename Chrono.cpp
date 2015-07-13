//
// Chrono.cpp for nibbler in /home/galibe_s/github/nibbler/tmp
// 
// Made by stephane galibert
// Login   <galibe_s@epitech.net>
// 
// Started on  Mon Jul 13 22:54:20 2015 stephane galibert
// Last update Mon Jul 13 22:54:52 2015 stephane galibert
//

#include "Chrono.hpp"

Chronometer::Chronometer(void)
{
  this->_running = false;
  this->_value = 0;
}

Chronometer::~Chronometer(void)
{

}

double Chronometer::restart(void)
{
  double elapsed = 0.;

  elapsed = getElapsedTime();
  this->_value = 0.;
  start();
  return (elapsed);
}

void Chronometer::toggle(void)
{
  if (!this->_running)
    start();
  else
    pause();
}

void Chronometer::start(void)
{
  this->_current = std::chrono::steady_clock::now();
  if (!this->_running)
    this->_running = true;
}

void Chronometer::pause(void)
{
  if (this->_running)
    {
      this->_value += getElapsedTime();
      this->_running = false;
    }
}

double Chronometer::getElapsedTime(void)
{
  if (this->_running)
    {
      this->_begin = std::chrono::steady_clock::now();
      std::chrono::duration<double> time_span = std::chrono::duration_cast<std::chrono::duration<double> >(this->_begin - this->_current);
      return (time_span.count() + this->_value);
    }
  return (this->_value);
}
