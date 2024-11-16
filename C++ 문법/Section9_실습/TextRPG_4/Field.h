#pragma once

class Player;
class Monster;

class Field
{
public:
	Field();
	~Field();

	void Update(Player* player);
	void CreateMosnter();

	void StartBattle(Player* player);

private:
	Monster* _monster;
};

