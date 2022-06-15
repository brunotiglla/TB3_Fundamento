#include "Zombie.h"

//TODO

Zombie::Zombie()
{
}


Zombie::~Zombie()
{
}

void Zombie::init( float speed, glm::vec2 position)
{
	_speed = speed;
	_color.set(50, 0, 0, 255);
	_position = position;
	

}

void Zombie::update(const std::vector<std::string>& levelData)
{

	collideWithLevel(levelData);
}
