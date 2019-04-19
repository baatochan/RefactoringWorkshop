#pragma once

namespace Snake
{

struct Dimension
{
	int width;
    int height;

    bool operator==(Dimension const& rhs) const { return width == rhs.width and height == rhs.height; }
};

} // namespace Snake
