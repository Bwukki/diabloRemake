#ifndef WEAPON_H
#define WEAPON_H

#include <item.h>

enum damage {normal, divine, artillery, magic, projectile, chaos };
enum type {Axe, ShortSword, LongSword, TwoHandSword, ShortBow, LongBow, Flail, Mace, Staff, Wand, Whip, Dagger, GreatAxe};

class Weapon : public item
{
    public:
        Weapon();
        virtual ~Weapon();

    protected:

    private:
        damage damageType;
};

#endif // WEAPON_H
