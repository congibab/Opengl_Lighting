#pragma once
#include <iostream>
#include <map>
#include <string>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <ft2build.h>
#include FT_FREETYPE_H

#include "Shader.h"

struct Character
{
	unsigned int TextureID;
	glm::ivec2 Size;
	glm::ivec2 Bearing;
	unsigned int Advence;
};

class Text
{
private:
	Shader font;

	std::map<char, Character> Characters;
	unsigned int VAO, VBO;
public:
	Text(const char* fontPath);
	void Draw(std::string text, float x, float y, float scale, glm::vec3 color);
};

