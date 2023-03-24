#pragma once

#include "image.h"

class Filter {
public:
    virtual void Apply(Image& image) = 0;
    virtual ~Filter() = default;
};

class MatrixFilter : public Filter {
public:
    virtual std::vector<std::vector<int>> GetMatrix() = 0;
};