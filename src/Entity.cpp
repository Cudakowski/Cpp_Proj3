#include "Entity.h"

size_t Entity::entityIdIncrement = 0;

Entity::Entity(std::string name): _name{name}, entityId{entityIdIncrement++} {};

Entity::~Entity() = default;