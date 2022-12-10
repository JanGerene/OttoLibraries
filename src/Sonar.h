#ifndef Sonar_h
#define Sonar_h

#include <Arduino.h>

class Sonar
{
public:
    void init(int trigger_pin, int echo_pin);
    long ping();

private:
    int trigger;
    int echo;
    long duration;
};

#endif