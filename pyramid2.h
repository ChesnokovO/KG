#pragma once

#include "figure.h"

class pyramid2 : public figure {
public:
	pyramid2(BitMap* bmp, size_t numVer, size_t numFace);
private:
	void SetFigure();
	void ClrFigure();
	void Body();
};
