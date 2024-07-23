#ifndef TRAP_H
#define TRAP_H

#include <string>

class Trap {
public:
    Trap();
    // Trap(int researchCost); 
    Trap(const std::string& type, int damage);

    const std::string& getType() const;
    int getDamage() const;
    void setType(const std::string& type);
    void setDamage(int damage);
private:
    std::string trapType;
    int trapDamage;
    int damage_;
};

#endif // TRAP_H
