#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {
  screen s;
  color c;
  
  c.red = 0;
  c.green = 0;
  c.blue = 255;
  
  clear_screen(s);

  draw_line(100, 100, 100, 400, s, c);
  draw_line(100, 400, 400, 400, s, c);
  draw_line(400, 400, 400, 100, s, c);
  draw_line(400, 100, 100, 100, s, c);

  draw_line(100, 250, 200, 100, s, c);
  draw_line(200, 100, 400, 250, s, c);
  draw_line(400, 250, 300, 400, s, c);
  draw_line(300, 400, 100, 250, s, c);
  
  draw_line(100, 250, 300, 100, s, c);
  draw_line(300, 100, 400, 250, s, c);
  draw_line(400, 250, 200, 400, s, c);
  draw_line(200, 400, 100, 250, s, c);
  
  display(s);
  save_extension(s, "lines.png");
} 
