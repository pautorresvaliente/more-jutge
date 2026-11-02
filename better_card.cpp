#include <string>


bool better_card(char c1, char c2)
{
    std::string cards = "1234567890JQKA";

    return cards.find(c1) > cards.find(c2);
}