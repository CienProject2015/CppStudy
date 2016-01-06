class TextBlock{
  public:
    ...
    const char& operator[](std::size_t position) const // 상수 객체에 대한 operator[]
    { 
      return text[position];
    }
    
    char& operator[](std::size_t position)
    {
      return text[position];
    }
    
  private:
    std::string text;
};

void print(const TextBlock& ctb)
{
  TextBlock tb("Hello");
  std::cout << ctb[0];
  
  const TextBlock ctb("World");
  std::cout << ctb[0];
  
  std::cout << tb[0];
  tb[0] = 'x';
  
  std::cout << ctb[0];
  ctb[0] = 'x'; //컴파일 에러발생
}
