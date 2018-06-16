#ifndef ITEM_H
#define ITEM_H
#include "Point.h"
#include <string>

enum quality {low, standard, unique, superior, rare, set};

class item
{
    public:
        item();
        virtual ~item();
        void virtual drawIcon(Point) const;

    protected:

    private:
        int iLvl;
        quality itemQuality;
        std::string itemName;
};

#endif // ITEM_H
