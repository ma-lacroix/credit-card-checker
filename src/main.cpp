#include <iostream>
#include <vector>
#include <string>
#include "cc.hpp"
#include "card.hpp"


int main(int argc, char **argv) {
    std::cout << "Starting app" << std::endl;
    std::vector<card*> cards;
    
    for (size_t i = 1; i < argc; ++i) {
        cards.push_back(new creditCard(static_cast<std::string>(argv[i])));
        std::cout << cards.at(i-1)->getNumber() << std::endl;
        std::cout << cards.at(i-1)->getStatus() << std::endl;
        cards.at(i-1)->checkStatus();
        std::cout << cards.at(i-1)->getStatus() << std::endl;
    }

    return 0;
}