#ifndef CARD_hpp
#define CARD_hpp

#include <iostream>
#include <string>
#include <vector>

class card
{
private:
    std::string card_number;
    bool status;    
public:
    card(std::string);
    ~card();
    void checkStatus();
    bool getStatus();
    std::string getNumber();
};

#endif // CARD_hpp