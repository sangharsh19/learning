#include <iostream>
using namespace std;
class minheap
{
public:
  int *arr;
  int heap_size;
  int capacity;
  minheap(int cap)
  {
    heap_size = 0;
    capacity = cap;
    arr = new int[cap];
  }
  void swap(int &x, int &y)
  {
    int temp = x;
    x = y;
    y = temp;
  }
  int parent(int i)
  {
    return (i - 1) / 2;
  }

  int left(int i)
  {
    return (2 * 1 + 1);
  }
  int right(int i)
  {
    return (2 * 1 + 2);
  }

  void insert(int k)
  {
    if (heap_size == capacity)
    {
      cout << "\n Overflow : could not insert key \n";
      return;
    }

    heap_size++;
    int i = heap_size - 1;
    arr[i] = k;

    while (i != 0 && arr[parent(i)] > arr[i])
    {
      swap(arr[i], arr[parent(i)]);
      i = parent(i);
    }
  }
  void getmin()
  {
    cout << arr[0] << endl;
  }

  void display()
  {
    int i;
    for (i = 0; i < heap_size; i++)
    {
      cout << arr[i] << endl;
    }
  }
};

int main()
{
  minheap h1(50);
  h1.insert(5);
  h1.insert(3);
  h1.insert(2);
  h1.insert(9);
  h1.insert(8);
  h1.insert(10);
  h1.insert(7);
  h1.insert(6);
  h1.insert(4);
  h1.insert(1);
  h1.insert(7);
  h1.insert(6);
  h1.insert(4);
  h1.insert(1);
  h1.insert(7);
  h1.insert(6);
  h1.insert(4);
  h1.insert(1);
  h1.display();
}