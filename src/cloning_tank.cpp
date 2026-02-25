#include "cloning_tank.hpp"

// Implement this:
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{

    //Denne af koden tager og laver en kloning af aberne.
    //Vi laver en kopi af hver abe og tilføjer den til slutningen af vektoren.
    //vi kan ikke ændre størrelsen af vektoren mens vi itererer over den
    size_t original_size = monkeys.size();
    for (size_t i = 0; i < original_size; i++)
    {
        monkeys.push_back(monkeys[i]);
    }
}