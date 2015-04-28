#include <iostream>

namespace Cien
{
  void UnrealChat(void)
  {
    std::cout<<"So Unreal!"<<std::endl;
    std::cout<<"In namespace Cien"<<std::endl;
  }
}

int main(void)
{
  using Cien::UnrealChat;
  HybFunc();
  return 0;
}
