//
//  main.cpp
//  cplusplus_helloworld
//
//  Created by shiyun on 7/16/16.
//  Copyright © 2016 shiyun. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Converter.hpp"
using namespace std;

char* reverseOrder(char* array);

const unsigned int MOD = 10;
const int MAX_LENGTH = 32;

long atoi_mod(const char* value, unsigned int mod) {
    
    // if parameter is illegal, return 0
    if (value == NULL) {
        return 0;
    }
    
    unsigned int len = 0;
    const char* ptr = value;
    
    // get the length of the input string, if length > MAX_LENGTH
    // return 0;
    while (*ptr++) {
        len++;
    }
    if (len >= MAX_LENGTH) {
        return 0;
    }
    
    long result = 0;
    bool isNegative = false;
    
    ptr = value;
    if (*ptr == '-') {
        isNegative = true;
        ptr++;
    }
    
    do {
        // ERROR HANDLING: if there is non-digit in the string,
        // return current parse result immediately
        if (*ptr < '0' || *ptr > ('0' + mod)) {
            break;
        }
        
        result = result * mod + *ptr - '0';
    } while (*++ptr);
    
    if (isNegative) {
        result = -result;
    }
    
    printf("input %s, output %d\n", value, (int)result);
    
    return result;
}
/**
 *
 */
char* itoa_mod(long value, unsigned int mod) {
    char* result = new char[MAX_LENGTH];
    if (result != NULL) {
        memset(result, 0, MAX_LENGTH * sizeof(char));
        
        bool isNegative = false;
        if (value < 0) {
            isNegative = true;
            value = -value;
        }
        
        int index = 0;
        do {
            result[index++] = '0' + (value % MOD);
            value = value / mod;
        } while (value > 0);
        
        if (isNegative) {
            result[index++] = '-';
        }
        
        result[index] = '\0';
        
    }
    
    reverseOrder(result);
    
    return result;
}

char* reverseOrder(char* array) {
    
    if (array == NULL) {
        return NULL;
    }
    
    char tmp;
    char* headPtr = array;
    char* tailPtr = array;
    
    while (*tailPtr) {
        tailPtr++;
    }
    tailPtr--;
    
    while (tailPtr >= headPtr) {
        tmp = *headPtr;
        *headPtr++ = *tailPtr;
        *tailPtr-- = tmp;
    }
    
    return array;
}

class A {
public:
    A(){}
    ~A() {
        throw 25;
    }
};

int main(int argc, const char * argv[]) {
    
    std::shared_ptr<Converter> converter(new Converter());

    converter->checkInput();
    converter->doConvert();
    
    
    
    return 0;
    
//    try {
//        A a;
//        throw 36;
//    } catch (int e) {
//        std::cout << e << std::endl;
//    }
    
    // insert code here...
    std::cout << "Hello, World!\n";
    
    std::unique_ptr<A> p(new A());
    
    
    //test case for itoa
//    for (int i = -120; i < 120; i++) {
//        char* p = itoa_mod(i, MOD);
//        printf("%d = %s\n", i, p);
//    }
    
    //test case for atoi
//    atoi_mod("-10+adf", MOD);
//    atoi_mod("-100", MOD);
//    atoi_mod("-0", MOD);
//    atoi_mod("0", MOD);
//    atoi_mod("19", MOD);
//    atoi_mod("100", MOD);
//    atoi_mod("123123", MOD);
    
    size_t size = 3;
    printf("size = %u\n", size--);
    printf("size = %u\n", size--);
    printf("size = %u\n", size--);
    printf("size = %u\n", size--);
    printf("size = %u\n", size--);
    printf("size = %u\n", size--);
    
    
    return 0;
}
