#ifndef NJU7386RB1_HPP
#define NJU7386RB1_HPP

class NJU7386RB1{

public:
    static int ch_count; //using channels count
    NJU7386RB1(int in_a, int in_b) : input_pins{in_a, in_b}{};
    void begin();
    void set_speed(int _speed);

private:
    int input_pins[2]; // input pins
    int channels[2]; // input pins
    int speed; // output_level() -255~255
};


#endif