#include <Block.h>
#include <dispatch/dispatch.h>

int f(int y) {
  int result = (y / 42);
  dispatch_main();

  return result;
}
