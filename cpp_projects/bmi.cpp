#include<cmath>
#include<iostream>
#include"bmi.h"

float bmi::convertHeight(float h){
    return h * 0.0254;
}
float bmi::convertWeight(float w){
    return w * 0.45359237;
}

float bmi::bmiCalculation(float w, float h){
    return  w / pow (h, 2.0);
}

int main(){
    float weight;
    float height;
    
    cout << "please enter your weight." << endl;
    cin >> weight;
    
    cout << "now please enter your height" << endl;
    cin  >> height;
    
    cout << "Your BMI is " << bmi::bmiCalculation(bmi::convertWeight(weight), bmi::convertHeight(height)) << "." << endl;
    
}   