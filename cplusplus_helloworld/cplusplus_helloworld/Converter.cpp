//
//  Converter.cpp
//  cplusplus_helloworld
//
//  Created by shiyun on 04/01/2018.
//  Copyright © 2018 shiyun. All rights reserved.
//

#include "Converter.hpp"
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;


Converter::Converter() {
    this->lowerLimit = 10;
    this->higherLimit = 20;
    this->step = 4;
}

Converter::Converter(int lowerLimit, int higherLimit, int step) {
    this->lowerLimit = lowerLimit;
    this->higherLimit = higherLimit;
    this->step = step;
}

float Converter::convert(float celsius) {
    return 0.0f;
}

void Converter::checkInput() {
    int low, high, step;
    
    cout << "Please give in a lower limit, limit >= 0: ";
    cin >> low;
    cout << "Please give in a higher limit, 10 > limit <= 50000: ";
    cin >> high;
    cout << "Please give in a step, 0 < step <= 10:";
    cin >> step;
    
//    cout << "low:" << low << ",high:" << high << ",step" << step << endl;
    this->lowerLimit = low;
    this->higherLimit = high;
    this->step = step;
}

bool Converter::isValidInput() {
    return true;
}

void Converter::doConvert() {
    // print title
    cout << "Celsius(°C)\t\tFahrenheit(°F)" << endl;
    cout << "-------\t\t----------" << endl;
    
    if (!isValidInput()) {
        return;
    }

    for (int i = this->lowerLimit; i < this->higherLimit; i += this->step) {
        cout << std::fixed << /*std::setw( 11 ) << */std::setprecision( 2 ) << (float)i << "0000" << "\t\t" << /*std::fixed << std::setw( 12 ) << std::setprecision( 2 ) <<*/ celsiusToFarhheit(i) <<"0000" << endl;
    }
}

float Converter::celsiusToFarhheit(int celsius) {
    return celsius * 1.80000000000000000000000f + 32.0f;
}

