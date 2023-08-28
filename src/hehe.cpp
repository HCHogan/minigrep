#include <fmt/format.h>
#include <string>

int main() {
  auto a = std::string("hehe");
  fmt::print(stderr, "Don't {}!", "panic");
  return 0;
}
