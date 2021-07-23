//#include <iostream>
//using namespace std;
//
//const int NAME_SIZE = 51;
//
//class Book
//{
//private:
//	char* name = new char[NAME_SIZE];
//	int count = 0;
//	int size;
//
//public:
//	void setSize()
//	{
//		for (int i = 0; i < NAME_SIZE; i++)
//		{
//			if (name[i] == '\0')
//			{
//				this->size = i;
//				break;
//			}
//		}
//	}
//
//	void setName(char name[])
//	{
//		this->name = name;
//	}
//
//	void increaseCount()
//	{
//		this->count++;
//	}
//
//	char* getName()
//	{
//		return name;
//	}
//
//	int getCount()
//	{
//		return count;
//	}
//
//	int getSize()
//	{
//		return size;
//	}
//};
//
//int getOverlapIndex(Book* arr, char input[], int n);
//bool isSame(char* a, char* b);
//void sortForCount(Book arr[], int n);
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	Book* arr = new Book[n];
//
//	char input[51];
//	// 첫 입력 체크
//	bool flag = false;
//	for (int i = 0; i < n; i++)
//	{
//		if (flag == false)
//		{
//			cin >> input;
//			arr[i].setName(input);
//			arr[i].increaseCount();
//			arr[i].setSize();
//			flag = true;
//		}
//		else
//		{
//			cin >> input;
//			// 중복검사 : 중복 이면 count++
//			if (getOverlapIndex(arr, input, n) != -1)
//			{
//				arr[getOverlapIndex(arr, input, n)].increaseCount();
//				i--;
//				n--;
//			}
//			else
//			{
//				arr[i].setName(input);
//				arr[i].increaseCount();
//				arr[i].setSize();
//			}
//		}
//	}
//	sortForCount(arr, n);
//
//	cout << arr[0].getName();
//	
//}
//
//void sortForCount(Book arr[], int n)
//{
//	Book temp;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n - 1; j++)
//		{
//			if (arr[j].getCount() < arr[j + 1].getCount())
//			{
//				temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//			else if (arr[j].getCount() == arr[j + 1].getCount())
//			{
//				if (arr[j].getSize() > arr[j + 1].getSize())
//				{
//					temp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = temp;
//				}
//				else if (arr[j].getSize() == arr[j + 1].getSize())
//				{
//					for (int i = 0; i < arr[j].getSize(); i++)
//					{
//						if (arr[j].getName()[i] > arr[j + 1].getName()[i])
//						{
//							temp = arr[j];
//							arr[j] = arr[j + 1];
//							arr[j + 1] = temp;
//							break;
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int getOverlapIndex(Book* arr, char input[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		// i 번째 비교할 책이 없으면
//		if (arr[i].getCount() == 0) break;
//
//		if (isSame(arr[i].getName(), input))
//		{
//			return i;
//		}
//	}
//}
//
//bool isSame(char* a, char* b)
//{
//	for (int i = 0; i < NAME_SIZE; i++)
//	{
//		if (a[i] == '\0') break;
//
//		if (a[i] != b[i]) return false;
//	}
//	return true;
//}
