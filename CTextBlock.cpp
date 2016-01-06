class CTextBlock
{
public:
	...
	
	char& operator[](std::size_t position)
	{
		return pText[position];
	}

private:
	char *pTest;
};
