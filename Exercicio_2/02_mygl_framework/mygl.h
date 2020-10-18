#ifndef MYGL_H
#define MYGL_H

#include <string.h>

#include "core.h"
#include "frame_buffer.h"

// Declaração da função que chamará as funções implementadas pelo aluno

struct RGBA{
	int red;
	int green;
	int blue;
	int alpha;
};
struct Point{
	float x;
	float y;
};
struct Line{
	float xi;
	float yi;
	float xf;
	float yf;
};

void MyGlDraw(void);

void PutPixel(int x, int y, struct RGBA color);
int CheckLine(struct Point pontoA,struct Point pontoB);
void DrawLine(struct Point pontoA,struct Point pontoB, struct RGBA color);
//
// >>> Declare aqui as funções que você implementar <<<
//

#endif  // MYGL_H
