#ifndef HUM_H
#define HUM_H

#include <wiringPi.h>
#include <iostream>

using namespace std;

class Hum
{
    public:
        Hum() = default;
        Hum(int pin){ this->_pin = pin; }
        int* get_hum_data() const {return this->hum_data ;}
        void read_hum();
    private:
        int _pin;
        int hum_data[5] = {0, };
};

#endif