#include "World.h"
#include "RegularStrategy.h"
#include "AlternativeStrategy.h"
#include "HighLifeStrategy.h"

int main() { 
    World *world = new World();
    //RegularStrategy *strategy = new RegularStrategy();
    HighLifeStrategy *strategy = new HighLifeStrategy();
    //AlternativeStrategy *strategy = new AlternativeStrategy();

    while (world->alive()) {
        world->display(strategy);
    }

    delete world;
    delete strategy;

    return 0;
}