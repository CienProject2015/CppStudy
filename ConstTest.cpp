void main()
{
     int ar[5] = { 1,2,3,4,5 };

	int *value1 = &ar[0];
	value1++;                // 포인터가 다른 대상체를 가리킬 수 있다.
	*value1 = 0;                   // 대상체를 변경할 수 있다.

	const int *value2 = &ar[0];
	value2++;                // 포인터가 다른 대상체를 가리킬 수 있다.
	*value2 = 0;                   // 에러 : 대상체가 상수이므로 변경할 수 없다.

	int * const value3 = &ar[0];
	value3++;                // 에러 : 포인터가 다른 대상체를 가리킬 수 없다.
	*value3 = 0;                   // 대상체는 변경할 수 있다.

	const int * const value4 = &ar[0];
	value4++;                // 에러 : 포인터가 다른 대상체를 가리킬 수 없다.
	*value4 = 0;                   // 에러 : 대상체가 상수이므로 변경할 수 없다.





	std::vector<int> vec;

	const std::vector<int>::iterator iter = vec.begin();
	
	*iter = 10; // iter는 T* const처럼 동작합니다.
	++iter; // 컴파일 에러

	std::vector<int>::const_iterator cIter = vec.begin();
	*cIter = 10; //컴파일 에러
	++cIter; // cIter를 변경하니까 문제 없다.
}
