/* Servo.h
*    
*
*  Autor: Oscar Maffei
*  Rev.: 13/09/2014
*/

#ifndef _SERVO_H
#define _SERVO_H

#include "derivative.h"


/*Funciones*/

void Init_Servo (void);         //Inicializa el pwm
void SetPos0(byte);             //Posiciona el servo 
void SetPos1(byte);             //Posiciona el servo 
//void GetPos1(void);
//void GetPos0(void);

#endif