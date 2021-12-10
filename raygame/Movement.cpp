#include "Movement.h"
#include "Transform2D.h"
#include <mftransform.h>



void Movement::Update(float deltaTime)
{
	MathLibrary::Matrix3 m_transform = MathLibrary::Matrix3();
	 MathLibrary::Vector2 moveDirection = MathLibrary::Vector2(m_transform.m00, m_transform.m10);

	//caculates the veclocity 
	m_velocity += moveDirection.normalize* m_maxSpeed * deltaTime;
	//addes the velocity to the localPosistion
	
}

void Movement::Start()
{

}

void Movement::End()
{

}
