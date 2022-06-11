#include "mbed.h"

//===Digital Pin===//
PwmOut A(D6);
PwmOut B(D9);
PwmOut C(D10);
PwmOut D(D5);
PwmOut CraneServo(A6);
DigitalIn Button2(D2);

//====Running Function====//
void Forward(float time1){
    A = 1; B=0; C=1; D=0;
    wait(time1);
    A = 0; B = 0; C=0; D=0;
    }
void Backward(float time2){
    A = 0; B=1; C=0; D=1;
    wait(time2);
    A = 0; B = 0; C=0; D=0;
    }
void Right(float time3){
    A = 0; B=1; C=1; D=0;
    wait(time3);
    A = 0; B = 0; C=0; D=0;
    }
void Left(float time4){
    A = 1; B=0; C=0; D=1;
    wait(time4);
    A = 0; B = 0; C=0; D=0;
    }
//====Servo Motors====//    
//void CraneServo(float time5){

    //}

//====Period====//    
void init(){
    A.period(0.01);
    B.period(0.01);
    C.period(0.01);
    D.period (0.01);
 }   
 
//===Main Code===//
int main()
{
    
    init();
    Forward(1);
    wait (1);
    Backward(1);
    wait (1);
    Left(1);
    wait (1);
    Right(1);
    wait (1);
    
    
    
}
