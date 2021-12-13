#pragma once
#include "Componet.h"
<<<<<<< HEAD
#include <raylib.h>

=======

class Texture2D;
>>>>>>> master
class Actor;
class Transform2D;

class Sprite :
    public Componet
{
public:
<<<<<<< HEAD
    Sprite(const char* path, Actor* owner);
    ~Sprite() {};

    int getWidth() { return m_texture.width; }
    int getHight() { return m_texture.height; }

    void draw();

private:
    int setWidth(int width) { m_texture.width = width; }
    int setHight(int hight) { m_texture.height = hight; }

    Texture2D m_texture;
};
=======

    /// <param name="texture">sets the sprites image to be this texture</param>
    /// <param name="name">the name of the component instance</param>
    Sprite(Texture2D* texture, const char* name = "SpriteComponet");
>>>>>>> master

    /// <param name="texture">the path the textures load</param>
    /// <param name="name">the name of the component instance</param>
    Sprite(const char* path, const char* name = "SpriteComponet");
    ~Sprite() override;

    int getWidth() { return m_width; }
    int getHight() { return m_height; }

    void draw() override;

private:
    Texture2D* m_texture;
    int m_width;
    int m_height;
};
