#include "World.h"

World::iterator::iterator(std::vector<std::unique_ptr<Entity>>::const_iterator iter):
    it{iter}
{

}

World::iterator& World::iterator::operator++()
{
    ++it;
    return *this;
}

bool World::iterator::operator!=(const World::iterator& other) const
{
    return it != other.it;
}

Entity* World::iterator::operator->() const 
{
    return (*it).get();
}

void World::addEntity(std::unique_ptr<Entity> entity)
{
    entities.push_back(std::move(entity));
}

World::iterator World::begin()
{
    return iterator(entities.begin());
}

World::iterator World::end()
{
    return iterator(entities.end());
}

void World::clear()
{
    entities.clear();
}