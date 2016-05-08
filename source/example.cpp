#include "window.hpp"
#include <utility>
#include <cmath>
#include "rectangle.hpp"
#include "circle.hpp"
#include <vector>

int main(int argc, char* argv[])
{
  Window win{std::make_pair(800,800)};

  while (!win.should_close()) {
    if (win.is_key_pressed(GLFW_KEY_ESCAPE)) {
      win.close();
    }
    std::vector<Circle> circles(2);
    std::vector<Rectangle> rectangles(2);
    Vec2 v{0.25,0.25};
    Vec2 v1{0.5,0.50};
    color farbex{0.0,1.0,0.0};
    color farbey{0.0,1.0,0.0};
    Rectangle r{v,0.4,0.4, farbex};
    circles[0]={0.2,v1};
    circles[1]={0.3,v1};
    rectangles[0]={v,0.4,0.4};
    rectangles[1]={v,0.3,0.3};
    auto m = win.mouse_position();
    Vec2 pieps{m.first,m.second};    
    Circle c{0.2,v1};
    
    if(r.isinside(pieps)==true)farbex={0.0,0.0,1.0};
    r.draw(win);
    r.draw(win,farbex);
    if(c.isinside(pieps)==true)farbey={0.0,0.0,1.0};
    c.draw(win);
    c.draw(win,farbey);

    auto t = win.get_time();
    float x1{0.5f + 0.5f * std::sin(t)};
    float y1{0.5f + 0.5f * std::cos(t)};

    float x2{0.5f + 0.5f * std::sin(2.0f*t)};
    float y2{0.5f + 0.5f * std::cos(2.0f*t)};

    float x3{0.5f + 0.5f * std::sin(t-10.f)};
    float y3{0.5f + 0.5f * std::cos(t-10.f)};

    win.draw_point(x1, y1, 1.0f, 0.0f, 0.0f);
    win.draw_point(x2, y2, 0.0f, 1.0f, 0.0f);
    win.draw_point(x3, y3, 0.0f, 0.0f, 1.0f);

    //auto m = win.mouse_position();
    win.draw_line(0.1f, 0.1f, 0.8f,0.1f, 1.0,0.0,0.0);

    win.draw_line(0.0f, m.second, 0.01f, m.second, 0.0, 0.0, 0.0);
    win.draw_line(0.99f, m.second,1.0f, m.second, 0.0, 0.0, 0.0);

    win.draw_line(m.first, 0.0f, m.first, 0.01f, 0.0, 0.0, 0.0);
    win.draw_line(m.first, 0.99f,m.first, 1.0f, 0.0, 0.0, 0.0);

    win.update();
  }

  return 0;
}
