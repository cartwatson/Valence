// Image.hpp
#ifndef IMAGE_HPP
#define IMAGE_HPP

#include <vector>
#include <Pixel.hpp>

class Image {
public:
    Image(int w, int h) : width(w), height(h), pixels(w * h) {}

    int getWidth() const { return width; };
    int getHeight() const { return height; };
    const Pixel& getPixel(int x, int y) const { return pixels[y * width + x]; };

private:
    int width;
    int height;
    std::vector<Pixel> pixels;
};

#endif // IMAGE_HPP
