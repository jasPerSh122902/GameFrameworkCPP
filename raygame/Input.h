#pragma once
#include "Componet.h"
#include "raylib.h"
class Input :
	public Componet
{
public:
    /// <summary>
/// Returns true while a key is being pressed
/// </summary>
/// <param name="key">The ascii value of the key to check</param>
/// <returns></returns>
    static bool getKeyDown(int key);

    /// <summary>
    /// Returns true while if key was pressed once
    /// </summary>
    /// <param name="key">The ascii value of the key to check</param>
    /// <returns></returns>
    static bool getKeyPressed(int key);

};

