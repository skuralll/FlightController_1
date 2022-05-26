#include <Arduino.h>
#include <NJU7386RB1.hpp>
#include <math.h>

int NJU7386RB1::ch_count = 0;

void NJU7386RB1::begin(){
    for (size_t i = 0; i < 2; i++)
    {
        ledcSetup(ch_count, 312500, 8); 
        ledcAttachPin(input_pins[i], ch_count);
        channels[i] = ch_count;
        ch_count++;
    }
}

void NJU7386RB1::set_speed(int _speed){
    int cw = _speed > 0;
    ledcWrite(channels[cw], abs(_speed));
    ledcWrite(channels[!cw], 0);
    speed = _speed;
}