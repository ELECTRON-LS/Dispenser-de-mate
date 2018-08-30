/* Servo.c
*
*
*
*  Autor: Oscar Maffei
*  Rev.: 22/06/2015
*/

#include "servo.h"

void Init_Servo(void){
   
    T1SC_PS=1;
    T1SC_TSTOP=1;               //Frena el timer 1
    T1SC_TRST=1;                //Resetea el contador
    T1MOD=50000;                //Setea la frecuencia a 20 msHz    
    T1CH0=1250;                 //Setea ancho del pulso a 0.5ms
    T1CH1=1250;                 //Setea ancho del pulso a 0.5ms
    
    T1SC0_MS0B=0;               
    T1SC0_MS0A=1;
    T1SC0_TOV0=1;
    T1SC0_ELS0B=1;
    T1SC0_ELS0A=0;      
    
    T1SC1_MS1A=1;
    T1SC1_TOV1=1;
    T1SC1_ELS1B=1;
    T1SC1_ELS1A=0;      
    
    
}

void SetPos0(byte pos){
    word aux;    
    aux = (word) (pos * 10); 
}

void SetPos1(byte pos){

}

