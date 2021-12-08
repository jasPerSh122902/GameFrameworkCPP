#include "Movement.h"


void Movement::Update(float deltaTime)
{
	 MathLibrary::Vector2 moveDirection = MathLibrary::Vector2(Directionx, Directiony);

	//caculates the veclocity 
	m_velocity = moveDirection.normalize* speed * deltaTime;
	//addes the velocity to the localPosistion
	LocalPosistion += m_velocity;

}

/// <summary>
/// Returns the new Vector3 for the localPosistion and sets the Translation with the values of x, y.
/// </summary>
MathLibrary::Vector2 LocalPosistion
{
    //takes in a posisition on the matrix...
     return MathLibrary::Vector2()
}
