#include "bc.hpp"
#include <numeric>
#include <iostream>
#include <string>
#include <vector>   

// TODO: this is only a copy of cc.cpp

bankCard::bankCard(std::string new_number):card(new_number) {
    if(new_number.size()==11){
        std::cout << "Valid CC number" << std::endl;
        this->bc_number = new_number;
        this->status = true;
    } else {
        std::cout << "Invalid CC number" << std::endl;
        this->bc_number = "XXXXXXXXXX";
        this->status = true;
    }
};

bankCard::~bankCard() {
    std::cout << "cc deleted" << std::endl;
};

void bankCard::checkStatus() {
    
    std::vector<int> numbers = changeToInt();

    for(size_t i = 1;i < 11; i+=2){
        int new_num = numbers.at(i)*2;
        if(new_num > 9) {
            numbers.at(i) = 1 + new_num-10;
        }else{
            numbers.at(i) = new_num;
        }
    }

    status = std::accumulate(numbers.begin(),numbers.end(),0) % 10 == 0;
};

bool bankCard::getStatus() {
    return status;
}

std::vector<int> bankCard::changeToInt() {
    std::vector<int> numbers;
    if(status){
        for (size_t i = 0;i<bc_number.size();++i){
            int num = (int)bc_number.at(i) - 48; // 48 is an ASCII code thing
            numbers.push_back(num);
        }
    }
    return numbers;
}

std::string bankCard::getNumber() {
    return bc_number.substr(0,3) + "XXXXXXXX";
}
