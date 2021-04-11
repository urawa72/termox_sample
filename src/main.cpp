#include <termox/termox.hpp>

int main() {
  return ox::System{}.run<ox::Textbox>("Hello World!");
}
