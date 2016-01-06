class CTextBlock
{
public:

	...
	
	char& operator[](std::size_t position) const //부적절하지만 비트수준의 상수성 때문에 허용된다.
	{
		return pText[position];
	}

private:
	char *pTest;
};
