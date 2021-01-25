//
// Created by r2d2 on 25.01.2021.
//

#ifndef PROTOBUF_EXAMPLE_CANVAS_H
#define PROTOBUF_EXAMPLE_CANVAS_H

#include <foo.pb.h>
#include <string.h>

class CCanvas
{
public:
    void DrawRect(int x, int y, int width, int height, Example::Color color, bool fill);
    void DrawString(const std::string& title, int x, int y, int size, Example::Color color);
    void DrawLine(int x1, int y1, int x2, int y2, int size, Example::Color color, Example::LineType lineType = Example::LineType::SOLID);

    void Apply();
    void Clear();
private:
    Example::OsdPrimitive *make_primitive(int x, int y, Example::Color color, Example::PrimType primType);
    Example::OSDCanvas canvas;
};

#endif //PROTOBUF_EXAMPLE_CANVAS_H
