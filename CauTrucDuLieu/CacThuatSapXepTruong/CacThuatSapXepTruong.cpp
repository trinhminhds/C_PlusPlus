
#include <iostream>
#include <vector>
using namespace std;

void nhap(short a[], short n);
void xuat(short a[], short n);
// sap xep chon
void selectionSort(short a[], short n);

// sap xep noi bot
void bubbleSort(short a[], short n);

// Sap xep chen
void insertionSort(short a[], short n);

//
void quickSort(short a[], short left, short right);

// Sap xep tron
void merge(short a[], short left, short mid, short right);
void mergeSort(short a[], short left, short right);

// Sap xep nhi phan (heapSort)
void heapify(short a[], short n, short i);
void heapSort(short a[], short n);

int main()
{
	short b[20], m;
	cout << "Nhap so luong phan tu: ";
	cin >> m;

	nhap(b, m);
	cout << "\nDay vua nhap: ";
	xuat(b, m);

	selectionSort(b, m);
	cout << "\nSap xep chon: ";
	xuat(b, m);

	bubbleSort(b, m);
	cout << "\nSap xep noi bot: ";
	xuat(b, m);

	insertionSort(b, m);
	cout << "\nSap xep chen: ";
	xuat(b, m);

	quickSort(b, 0, m - 1);
	cout << "\nquickSort: ";
	xuat(b, m);

	mergeSort(b, 0, m - 1);
	cout << "\nSap xep tron: ";
	xuat(b, m);

	heapSort(b, m);
	cout << "\nSap nhi phan: ";
	xuat(b, m);
}

void nhap(short a[], short n)
{
	for (short i = 0; i < n; i++)
	{
		cout << "a[" << i << "]= ";
		cin >> a[i];
	}
}
void xuat(short a[], short n)
{
	for (short i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}

// sắp xếp lựa chọn
void selectionSort(short a[], short n)
{
	short tam = 0;
	for (short i = 0; i < n - 1; i++)
		for (short j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tam = a[i];
				a[i] = a[j];
				a[j] = tam;
			}
		}
}

void bubbleSort(short a[], short n)
{

	for (short i = 0; i < n; i++)
		for (short j = i + 1; j < n; j++)
			if (a[i] > a[j])
				swap(a[i], a[j]);
}

// sap xep chen
void insertionSort(short a[], short n)
{
	for (short i = 1; i < n; i++)
	{

		short x = a[i];
		short viTri = i - 1;

		while (viTri >= 0 && x < a[viTri])
		{
			a[viTri + 1] = a[viTri];
			--viTri;
		}
		a[viTri + 1] = x;
	}
}

void quickSort(short a[], short left, short right)
{

	short x = a[(left + right) / 2];
	short i = left, j = right;
	while (i < j)
	{

		while (a[i] < x)
		{
			i++;
		}
		while (a[j] > x)
		{
			j--;
		}
		if (i <= j)
		{

			swap(a[i], a[j]);
			// hoanVi
			i++;
			j--;
		}
	}

	if (i < right)
	{
		quickSort(a, i, right);
	}

	if (j > left)
	{
		quickSort(a, j, left);
	}
}

void merge(short a[], short left, short mid, short right)
{
	vector<short> x(a + left, a + mid + 1);		 // Bắt đầu từ bên trái và giữa + 1;
	vector<short> y(a + mid + 1, a + right + 1); // Bắt đầu từ giữa + 1 và bên phải + 1;
	int i = 0, j = 0;
	while (i < x.size() && j < y.size())
	{
		if (x[i] <= y[j])
		{
			a[left] = x[i];
			++left;
			++i;
		}
		else
		{
			a[left] = y[j];
			++left;
			++j;
		}
		while (i < x.size())
		{
			a[left] = x[i];
			++left;
			++i;
		}
		while (j < y.size())
		{
			a[left] = y[j];
			++left;
			++j;
		}
	}
}

void mergeSort(short a[], short left, short right)
{
	if (left >= right)
		return;
	short mid = (left + right) / 2;
	mergeSort(a, left, mid);
	mergeSort(a, mid + 1, right);
	merge(a, left, mid, right);
}

void heapify(short a[], short n, short i)
{
	short left = 2 * i + 1;
	short right = 2 * i + 2;
	short largest = i;

	if (left < n && a[left] > a[largest])
	{
		largest = left;
	}
	if (right < n && a[right] > a[largest])
	{
		largest = right;
	}
	if (largest != i)
	{
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}

void heapSort(short a[], short n)
{
	for (short i = n / 2 - 1; i >= 0; i--)
	{
		heapify(a, n, i);
	}
	for (short i = n - 1; i >= 0; i--)
	{
		swap(a[i], a[0]);
		heapify(a, i, 0);
	}
}
