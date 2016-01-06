class CTextBlock{
public:
  ...
  std::size_t length() const;
  
private:
  char *pText;
  mutable std:size_t textLength; //이 데이터 멤버들은 어떤 순간에도 수정이 가능하다. 상수 멤버 함수 안에서도 수정할 수 있다.
  mutable bool lengthIsValid;
};

std::size_t CTextBlock::length() const
{
  if(!lengthIsValid){
    textLength = std::strlen(pText);
    lengthIsValid = true;
  }
  
  return textLength;
}
