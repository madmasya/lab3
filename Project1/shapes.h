#pragma once

#include <iostream>
#include "safeInput.h"

class Shapes
{
public:
	static size_t countofobjects;
	virtual ~Shapes() {};
	virtual void Square() const {};
	virtual void Perimeter() const {};
	virtual void SetData() {};
	virtual void DispData() const {};
	virtual bool DiscIn() { return true; };
	virtual bool DiscOut() const { return true; };
};