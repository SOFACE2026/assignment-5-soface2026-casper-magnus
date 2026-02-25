#include "feeder.hpp"

// Implement this:
void Feeder::filter_op(std::vector<Monkey> &monkeys)
{

    //Vi laver et for loop, som tjekker igennem om aberne er sultne. Den tikker 1 nedad 
    //hvis en abe er sulten, så bliver dens hunger_level sat til 0
 for (Monkey &monkey : monkeys)
 {
    monkey.hunger_level -= 1;

 }
}