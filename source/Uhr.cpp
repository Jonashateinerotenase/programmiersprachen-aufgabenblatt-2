#include "window.hpp"
#include <utility>
#include <cmath>
#include "rectangle.hpp"
#include "circle.hpp"
#include <vector>
#include "color.hpp"

int main(int argc, char* argv[])
{
  Window win{std::make_pair(800,800)};

  while (!win.should_close()) {
    if (win.is_key_pressed(GLFW_KEY_ESCAPE)) {
      win.close();
    }
    auto t = win.get_time()*60;
    Vec2 v{0.5,0.5};
    Circle uhrkreis{0.49,v};
    Circle uhrkreis2{0.01,v};
    Circle uhrkreis3{0.005,v};
    Circle uhrkreis4{0.0001,v};
    color schwarz{0.0,0.0,0.0};
    uhrkreis.draw(win,schwarz);
    uhrkreis2.draw(win,schwarz);
    uhrkreis3.draw(win,schwarz);
    uhrkreis4.draw(win,schwarz);
    float angel=3.1415*2/60;
    float sekunde=t;
    float minute=sekunde/60;
    float std=t/(12*60);

    win.draw_line(0.5,0.5,0.5+sin(angel*sekunde)*0.4,0.5+cos(angel*sekunde)*0.4,0.0,0.0,0.0);



    win.draw_line(0.5,0.5,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.501,0.501,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.502,0.502,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.503,0.503,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.504,0.504,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.499,0.499,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.498,0.498,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.497,0.497,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);
    win.draw_line(0.496,0.496,0.5+sin(angel*minute)*0.49,0.5+cos(angel*minute)*0.45,0.0,0.0,0.0);

    win.draw_line(0.5,0.5,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.499,0.499,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.498,0.498,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.497,0.497,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.496,0.496,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.495,0.495,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.494,0.494,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.501,0.501,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.502,0.502,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.503,0.503,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.504,0.504,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.505,0.505,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);
    win.draw_line(0.506,0.506,0.5+sin(angel*std)*0.40,0.5+cos(angel*std)*0.30,0.0,0.0,0.0);

       win.update();
  }

  return 0;
}