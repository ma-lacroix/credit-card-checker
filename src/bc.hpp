#ifndef BC_hpp
#define BC_hpp
#include <string>
#include "card.hpp"

class bankCard: public card {
private:
    std::string bc_number;
    char card_type;
    bool status;    
public:
    bankCard(std::string);
    ~bankCard();
    void checkStatus();
    bool getStatus();
    std::vector<int> changeToInt();
    std::string getNumber();
};

#endif // BC_hpp