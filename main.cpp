#include <iostream>
#include "player.h"
#include "inventory.h"
//#include "inventory.h"
int main() {

    player aidanjinn("aidanjinn",1,1,1);
    inventory aidanjinnBag(10);
    aidanjinn.displayStats();
    aidanjinnBag.printInventory();

    return 0;
}
