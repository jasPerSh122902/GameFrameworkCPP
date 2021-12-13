#pragma once
#include "Componet.h"
#include <raylib.h>

class Actor;
class Transform2D;

class Sprite :
    public Componet
{
public:
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

