#ifndef CC_hpp
#define CC_hpp
#include <string>

class creditCard
{
private:
    std::string cc_number;
    bool status;    
public:
    creditCard(std::string);
    ~creditCard();
    void checkStatus();
    bool getStatus();
    std::vector<int> changeToInt();
    std::string getCC();
};

#endif // CC_hpp