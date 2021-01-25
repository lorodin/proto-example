#include <iostream>
#include <foo.pb.h>
#include "inc/Canvas.h"

void drawString(CCanvas &canvas)
{
    canvas.DrawString("Hello world", 10, 20, 3, Example::Color::RED);
}

void drawRect(CCanvas &canvas)
{
    canvas.DrawRect(30, 30, 100, 200, Example::Color::BLUE, true);
}

void drawLine(CCanvas &canvas)
{
    canvas.DrawLine(10, 15, 30, 50, 5, Example::Color::YELLOW);
}

int main() {
    CCanvas canvas;

    for (int i = 0; i < 30; i++)
    {
        if (i % 3 == 0)
        {
            drawLine(canvas);
        } else if (i % 3 == 1)
        {
            drawString(canvas);
        } else {
            drawRect(canvas);
        }
    }

    canvas.Apply();

    canvas.Clear();

    return 0;
}
