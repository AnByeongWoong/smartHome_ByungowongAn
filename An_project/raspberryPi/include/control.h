#ifndef CONTROL_H
#define CONTROL_H

#include<iostream>
#include "LED.h"
#include "Motor.h"
#include "Hum.h"
#include "RIP.h"
#include <new>
#include <string.h>
using namespace std;

class Control
{
    public:
        void start();
        int decode(char* buff_rcv);
        void decodeLED(char* order, int num);
        void decodeMotor(char* order, int num);
        void decodeHum(char* order);
    private:
        LED _LEDItems[3];
        Motor _MotorItems[2];
        Hum _humiditySensor;
        RIP _ripSensor;

};

#endif