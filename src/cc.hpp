#ifndef CC_hpp
#define CC_hpp
#include <string>
#include "card.hpp"

class creditCard: public card {
private:
    std::string cc_number;
    bool status;    
public:
    creditCard(std::string);
    ~creditCard();
    void checkStatus();
    bool getStatus();
    std::vector<int> changeToInt();
    std::string getNumber();
};

#endif // CC_hpp