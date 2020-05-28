#include "../include/Hum.h"

#define MAXTIMINGS 83

void Hum::read_hum()
{
    uint8_t laststate = HIGH ;
    uint8_t counter = 0 ;
    uint8_t j = 0, i ;
    uint8_t flag = HIGH ;
    uint8_t state = 0 ;
    float f ;
    this->hum_data[0] = this->hum_data[1] = this->hum_data[2] = this->hum_data[3] this->hum_data[4] = 0;

    pinMode(this->_pin, OUTPUT);
    digitalWrite(this->_pin, LOW);
    delay(18);
    digitalWrite(this->_pin, HIGH);
    delayMicrosecondes(30);
    pinMode(this->_pin, INPUT);
        
    for (i = 0; i < MAXTIMINGS; i++) {
        counter = 0 ;

        while ( digitalRead(DHTPIN) == laststate) { 
        
            counter++ ;
            delayMicroseconds(1) ;

            if (counter == 200) break ;
        }

        laststate = digitalRead(DHTPIN) ;

        if (counter == 200) break ; // if while breaked by timer, break for

        if ((i >= 4) && (i % 2 == 0)) {

            this->_pin[j / 8] <<= 1 ;

            if (counter > 20) 
                this->_pin[j / 8] |= 1 ;
            j++ ;
        }

  }

  if ((j >= 40) && (this->_pin[4] == ((this->_pin[0] + this->_pin[1] + this->_pin[2] + this->_pin[3]) & 0xff))) {

    printf("humidity = %d.%d %% Temperature = %d.%d *C \n", dht11_dat[0], dht11_dat[1], dht11_dat[2], dht11_dat[3]) ;

  }

  else {
      // error일 경우 한번 더 해주기 
      printf("Data get failed\n") ;
  }
}