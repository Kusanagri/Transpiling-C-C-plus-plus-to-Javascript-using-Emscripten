#include<emscripten.h>

extern "C"{ int multiply_in_js(float, float); }

extern "C" {
int EMSCRIPTEN_KEEPALIVE multiply(float x, float y)
 {
 return multiply_in_js(x, y);
 }
}

int main()
{
 return 0;
}
