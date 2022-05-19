#pragma once

#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include "safeInput.h"
#include "shapes.h"

class Triangle final : public Shapes
{
	int a, b, c;
public:
	Triangle();
	~Triangle();

	virtual void Square() const override final;
	virtual void Perimeter() const override final;
	virtual void SetData() override final;
	virtual void DispData() const override final;
	virtual bool DiscIn() override final;
	virtual bool DiscOut() const override final;
};