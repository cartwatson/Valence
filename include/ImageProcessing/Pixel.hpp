// Pixel.hpp
#ifndef PIXEL_HPP
#define PIXEL_HPP

class Pixel {
public:
    Pixel(unsigned char r, unsigned char g, unsigned char b) : red(r), green(g), blue(b) {}

    // Accessors for pixel values
    unsigned char getRed() const { return red; }
    unsigned char getGreen() const { return green; }
    unsigned char getBlue() const { return blue; }

    // You can also add methods to manipulate the pixel here

private:
    unsigned char red;
    unsigned char green;
    unsigned char blue;
};

#endif // PIXEL_HPP
