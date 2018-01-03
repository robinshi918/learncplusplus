//
//  Converter.hpp
//  cplusplus_helloworld
//
//  Created by shiyun on 04/01/2018.
//  Copyright © 2018 shiyun. All rights reserved.
//

#ifndef Converter_hpp
#define Converter_hpp

#include <stdio.h>

const int LOWER_MIN = 0;
const int HIGHER_MIN = 10;
const int HIGHER_MAX = 50000;
const int STEP_MIN = 0;
const int STEP_MAX = 10;


class Converter {
private:
    int lowerLimit;
    int higherLimit;
    int step;
    
public:
    Converter();
    Converter(int lowerLimit, int higherLimit, int step);
    float convert(float celsius);
    void checkInput();
    float celsiusToFarhheit(int celsius);
    void doConvert();
    bool isValidInput();
};

#endif /* Converter_hpp */
