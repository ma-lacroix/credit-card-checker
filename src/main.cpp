#include <iostream>
#include <vector>
#include <string>
#include "cc.hpp"
#include "card.hpp"


void printAllCards(std::vector<card*> &cards) {
    for (size_t i = 0; i < cards.size(); ++i) {
        std::cout << cards.at(i)->getNumber() << std::endl;
    }
}

int main() {
    std::cout << "Starting app" << std::endl;
    std::vector<card*> cards;
    char command;

    std::string menu = 
        "1 - Create a new credit card\n"
        "2 - Create a new bank card\n"
        "3 - Show all cards\n"
        "q - quit program\n";

    while (true) {
        
        std::cout << menu;
        std::cin >> command;
        
        if (command == '1') {

            std::string number;
            std::cout << "Enter credit card number: ";
            std::cin >> number;
            cards.push_back(new creditCard(number));

        } else if (command == '2') {
            
            std::string number;
            std::cout << "Enter bank card number: ";
            std::cin >> number;
            cards.push_back(new creditCard(number));

        } else if (command == '3') {
            
            printAllCards(cards);

        } else if (command == 'q') {
            
            break;

        } else {
            
            std::cout << "Command invalid" << std::endl;
            
        }


    }

    return 0;
}