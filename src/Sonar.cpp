#include "Sonar.h"

void Sonar::init(int trigger_pin, int echo_pin)
{
    trigger = trigger_pin;
    echo = echo_pin;
    pinMode(trigger, OUTPUT);
    pinMode(echo, INPUT);
}

long Sonar::ping()
{
    digitalWrite(trigger, LOW);
    delayMicroseconds(2);
    digitalWrite(trigger, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigger, LOW);
    duration = pulseIn(echo, HIGH);
    return (duration / 58);
}