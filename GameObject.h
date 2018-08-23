#pragma once
#include "stdafx.h"

enum Type {
	wall,
	pellets,
	ghost,
	cherry,
	pacman,
	superPellet,
	out
};

class GameObject
{
protected:
	float x, y;
	Type type;
public:
	void GetPosition(float &x, float &y);
	void SetPosition(float x, float y);
	void SetType(Type t);
	Type GetType();
	GameObject();
	~GameObject();
	int GetPositionX();
	void SetPositionX(float x);
	int GetPositionY();
	void SetPositionY(float y);
};