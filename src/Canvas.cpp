//
// Created by r2d2 on 25.01.2021.
//
#include "../inc/Canvas.h"
#include <iostream>
#include <memory>

Example::OsdPrimitive *CCanvas::make_primitive(const int x, const int y, const Example::Color color, const Example::PrimType primType)
{
    auto *primitive = canvas.add_primitives();
    auto *position = primitive->position().New();

    position->set_x(x);
    position->set_y(y);
    primitive->set_allocated_position(position);
    primitive->set_color(color);
    primitive->set_prim_type(primType);

    return primitive;
}

void CCanvas::DrawString(const std::string& title, int x, int y, int size, Example::Color color) {
    std::cout << "DrawString " << std::endl;

    auto *primitive = make_primitive(x, y, color, Example::PrimType::STRING);

    auto *str_primitive = primitive->MutableExtension(Example::OsdString::string);
    str_primitive->set_message(title.c_str());
    str_primitive->set_size(size);
}

void CCanvas::DrawRect(int x, int y, int width, int height, Example::Color color, bool fill) {
    std::cout << "DrawRect" << std::endl;

    auto *primitive = make_primitive(x, y, color, Example::PrimType::RECT);

    auto *rect_primitive = primitive->MutableExtension(Example::OsdRect::rect);

    auto *size = rect_primitive->size().New();
    size->set_width(width);
    size->set_height(height);

    rect_primitive->set_fill(fill);
    rect_primitive->set_allocated_size(size);
}

void CCanvas::DrawLine(int x1, int y1, int x2, int y2, int size, Example::Color color, Example::LineType lineType) {
    std::cout << "DrawLine" << std::endl;

    auto *primitive = make_primitive(x1, y1, color, Example::PrimType::LINE);

    auto *line_primitive = primitive->MutableExtension(Example::OsdLine::line);

    auto *position2 = line_primitive->position2().New();
    position2->set_x(x2);
    position2->set_y(y2);

    line_primitive->set_weight(size);
    line_primitive->set_allocated_position2(position2);
    line_primitive->set_line_type(lineType);
}

void CCanvas::Apply() {
    std::cout << "Apply" << std::endl;
    for (int i = 0; i < canvas.primitives_size(); i++)
    {
        auto primitive = canvas.primitives(i);

        if (primitive.prim_type() == Example::PrimType::STRING)
        {
            Example::OsdString *title = primitive.MutableExtension(Example::OsdString::string);
            std::cout << "String:" << std::endl;
            std::cout << "\tPosition: X:" << primitive.position().x() << "; Y:" << primitive.position().y() << std::endl;
            std::cout << "\tColor: " << primitive.color() << std::endl;
            std::cout << "\tMessage: " << title->message() << std::endl;
            std::cout << "\tSize:" << title->size() << std::endl;
        } else if (primitive.prim_type() == Example::PrimType::RECT)
        {
            Example::OsdRect *rect = primitive.MutableExtension(Example::OsdRect::rect);
            std::cout << "Rect:" << std::endl;
            std::cout << "\tPosition: X:" << primitive.position().x() << "; Y:" << primitive.position().y() << std::endl;
            std::cout << "\tSize: " << rect->size().width() << "x" << rect->size().height() << std::endl;
            std::cout << "\tColor: " << primitive.color() << std::endl;
            std::cout << "\tFill: " << rect->fill() << std::endl;
        } else if (primitive.prim_type() == Example::PrimType::LINE)
        {
            Example::OsdLine *line = primitive.MutableExtension(Example::OsdLine::line);
            std::cout << "Line:" << std::endl;
            std::cout << "\tCoordinates: {" << primitive.position().x() << "; " << primitive.position().y() << "} -> {"
                      << line->position2().x() << "; " << line->position2().y() << "}" << std::endl;
            std::cout << "\tWeight: " << line->weight() << std::endl;
            std::cout << "\tColor: " << primitive.color() << std::endl;
        }
    }

    Clear();
}

void CCanvas::Clear() {
    canvas.clear_primitives();
}

