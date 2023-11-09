#include "ImageProcessing/Image.hpp"


class IImageProcessor {
    public:
        virtual ~IImageProcessor() {}
        virtual bool loadImage() = 0;
        virtual bool saveImage() = 0;
        virtual const Image& processImage(const Image& inputImage) const = 0;
};
