#pragma once
#include "Shape.h"
#include <memory>
#include <vector>
#include <iostream>

using namespace std;

class ShapeCollection
{
	vector<unique_ptr<Shape>> v;

public:
	ShapeCollection() {}

	ShapeCollection& operator=(const ShapeCollection& from) = delete;

	ShapeCollection(const ShapeCollection& from) = delete;

	void add(unique_ptr<Shape>& shape)
	{
		v.push_back(std::move(shape));
	}

	void remove_last()
	{
		v.pop_back();
	}

	double area() const
	{
		double temp = 0;
		for (auto&& p : v)
		{
			temp += p->area();
		}

		return temp;
	}
};