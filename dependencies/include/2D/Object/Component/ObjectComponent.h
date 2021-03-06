#pragma once

#include "Core/Core.h"

#include "2D/Object/Component/ComponentType.h"

class GameObject;
class Game;
struct Event;

class ObjectComponent
{
private:
	bool m_active;
protected:
	GameObject* m_parentObject;
public:
	ObjectComponent(GameObject* parentObject);
	virtual ~ObjectComponent();

	const GameObject* getParentObject() const { return m_parentObject; };
	GameObject* getParentObject() { return m_parentObject; };

	bool isActive() const { return m_active; };
	void setActive(bool active) { m_active = active; };

	virtual void tick(float32 delta) = 0;
	virtual void receiveEvent(const Event& event) = 0;

	virtual int64 getTypeId() const { return -1; };

#ifdef DEBUG_BUILD
	virtual void debugRender() = 0;
#endif
};