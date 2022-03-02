#include "Npc.h"
#include "ShamanDecorator.h"
#include "FarmerDecorator.h"
#include "SoldierDecorator.h"
#include "Elf.h"
#include "Orc.h"


int main() {
    Npc* decoratedNpc = new ShamanDecorator(new Elf("Elf"));
    Npc* extremeDecoration = new FarmerDecorator(new ShamanDecorator(new SoldierDecorator(new Orc("Orcalicous"))));

    decoratedNpc->render();
    extremeDecoration->render();    

    delete decoratedNpc;
    delete extremeDecoration;

    return 0;
}