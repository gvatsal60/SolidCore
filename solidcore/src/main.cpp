#include <cstdio>

int main(int argc, char const *argv[]) {
  printf("%s:%d %s Hello World!!!\n", "main.cpp", __LINE__,
         __FUNCTION__);  // REMOVE
  return 0;
}
