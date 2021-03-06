#include "cc.hpp"
#include <numeric>
#include <iostream>
#include <string>
#include <vector>   

creditCard::creditCard(std::string new_number):card(new_number) {
    if(new_number.size()==11){
        std::cout << "Valid CC number" << std::endl;
        this->cc_number = new_number;
        this->card_type = 'c';
        this->status = true;
    } else {
        std::cout << "Invalid CC number" << std::endl;
        this->cc_number = "XXXXXXXXXX";
        this->card_type = 'c';
        this->status = false;
    }
};

creditCard::~creditCard() {
    std::cout << "cc deleted" << std::endl;
};

void creditCard::checkStatus() {
    
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

bool creditCard::getStatus() {
    return status;
}

std::vector<int> creditCard::changeToInt() {
    std::vector<int> numbers;
    if(status){
        for (size_t i = 0;i<cc_number.size();++i){
            int num = (int)cc_number.at(i) - 48; // 48 is an ASCII code thing
            numbers.push_back(num);
        }
    }
    return numbers;
}

std::string creditCard::getNumber() {
    return cc_number.substr(0,3) + "XXXXXXXX";
}
