#include <iostream>
#include <math.h>


const float radius = 0.07;

void getEncoderLeft();
void getEncoderRight();
void calSpeedLeft();
void calSpeedRight();
void getSensor();
void speedPID();
void directionPID();


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}