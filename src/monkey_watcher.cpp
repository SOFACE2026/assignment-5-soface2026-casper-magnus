#include "monkey_watcher.hpp"

// Tilføjer alle aber fra inputlisten til monkeys_seen
void MonkeyWatcher::filter_op(std::vector<Monkey> &monkeys)
{
 for (const auto &monkey : monkeys)
    {
        this->monkeys_seen.push_back(monkey);
    }
}

const std::vector<Monkey> &MonkeyWatcher::get_monkeys_seen() const
{
    return this->monkeys_seen;
}