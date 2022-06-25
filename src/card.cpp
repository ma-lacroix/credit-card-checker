#include "card.hpp"

card::card(std::string cardName) {
    this->card_number = cardName;
    this->status = true;
}

card::~card() {
    std::cout << "card deleted" << std::endl;
}

void card::checkStatus() {
    std::cout << "Status of card" << std::endl;
}

bool card::getStatus() {
    return status;
}

std::string card::getNumber() {
    return card_number;
}