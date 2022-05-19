#pragma once

#include <iostream>
#include <fstream>
#include <Windows.h>
#include <conio.h>
#include "safeInput.h"
#include "shapes.h"

class Rect final : public Shapes
{
	int a, b;
public:
	Rect();
	~Rect();

	virtual void Square() const override final;
	virtual void Perimeter() const override final;
	virtual void SetData() override final;
	virtual void DispData() const override final;
	virtual bool DiscIn() override final;
	virtual bool DiscOut() const override final;
};