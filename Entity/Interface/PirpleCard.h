#include <string>


class PirpleCard
{
    public:
    void doAbility();
    std::string getName();
    void setName(std::string);
    private:
    std::string Name;
    std::string Ability;
};