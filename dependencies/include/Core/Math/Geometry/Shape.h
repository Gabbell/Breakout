#pragma once

#include "Core/Core.h"

namespace geo {
	class Shape {
	private:
		float32 m_x;
		float32 m_y;
	protected:
		Shape(float32 x, float32 y);
	public:
		virtual ~Shape();

		float32 getX() const { return m_x; };
		float32 getY() const { return m_y; };
		virtual void setX(float32 x) { m_x = x; };
		virtual void setY(float32 y) { m_y = y; };
	};
}