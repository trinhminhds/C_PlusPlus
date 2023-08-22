#include <iostream>
using namespace std;

struct PhanSo
{
    int tuSo;
    int mauSo;
};

void nhapPS(PhanSo ps[], int n);
void xuatPS(PhanSo ps[], int n);

void themPS(PhanSo ps[], int n);
void xoaPS(PhanSo ps[], int n);
void suaPS(PhanSo ps[], int n);

// ------ 3 GIAI THUAT TIM KIEM ------

void vetCanPS(PhanSo ps[], int n);
void linhCanhPS(PhanSo ps[], int n);
int nhiPhanPS(PhanSo ps[], int n);

//---------- 6 GIAI THUAT SAP XEP --------

void selectionSort(PhanSo ps[], int n);
void bubbleSort(PhanSo ps[], int n);
void insertionSort(PhanSo ps[], int n);
void quickSort(PhanSo ps[], int left, int right);
void merge(PhanSo ps[], int left, int mid, int right);
void mergeSort(PhanSo ps[], int left, int right);

int main()
{
    PhanSo ps[20];
    int m;
    cout << "Nhap so luong phan tu: ";
    cin >> m;

    cout << "\nNhap phan so";
    nhapPS(ps, m);

    cout << "\nPhan so vua nhap: "
         << "\n";
    xuatPS(ps, m);

    // themPS(ps, m);

    // xoaPS(ps, m);

    suaPS(ps, m);

    // ------ 3 GIAI THUAT TIM KIEM ------

    // timkiemPS(ps, m);

    // linhCanh(ps, m);

    // int nhiPhan = nhiPhanPS(ps, m);
    // if (nhiPhan == -1)
    // {
    //     cout << "\nKhong tim thay x" << endl;
    // }
    // else
    // {
    //     cout << "\nTim thay x tai vi tri: " << nhiPhan << endl;
    // }

    //---------- 6 GIAI THUAT SAP XEP --------

    // selectionSort(ps, m);
    // cout << "\nSap xep chen: ";
    // xuatPS(ps, m);

    // bubbleSort(ps, m);
    // cout << "\nSap xep noi bot: ";
    // xuatPS(ps, m);

    // insertionSort(ps, m);
    // cout << "\nSap xep chen: ";
    // xuatPS(ps, m);

    // quickSort(ps, 0, m - 1);
    // cout << "\nQuickSort: "
    //      << "\n";
    // xuatPS(ps, m);

    // mergeSort(ps, 0, m - 1);
    // cout << "\nSap xep tron: "
    //      << "\n";
    // xuatPS(ps, m);
}

void nhapPS(PhanSo ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap phan so tu so [" << i << "]= ";
        cin >> ps[i].tuSo;
        cout << "\nNhap phan so mau so [" << i << "]= ";
        cin >> ps[i].mauSo;
    }
}

void xuatPS(PhanSo ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nPhan so[" << i << "]=" << ps[i].tuSo << "/" << ps[i].mauSo << endl;
    }
}

void themPS(PhanSo ps[], int n)
{
    cout << "\nNhap phan so can them";
    PhanSo x;
    cout << "\nnhap tu so: ";
    cin >> x.tuSo;
    cout << "\nNhap mau so: ";
    cin >> x.mauSo;

    int vt;
    cout << "\nNhap vi tri can them: ";
    cin >> vt;

    // bắt đầu từ vị trí cuối
    // nếu i nhỏ hơn hoặc bằng viTri thi dung
    // Duyệt từ cuối đến đầu
    for (int i = n - 1; i >= vt; i--)
    {
        ps[i + 1] = ps[i];
        // dịch ra sau 1 đơn vị để vị trí đó cho vị trí vừa được chèn
    }

    ps[vt] = x; // xác định vị trí để thêm x vào
    ++n;        // số lượng phần tử cộng thêm 1

    cout << "\nPhan so sau khi them: ";
    xuatPS(ps, n);
}

void xoaPS(PhanSo ps[], int n)
{
    int del;
    cout << "\nNhap vi tri can xoa: ";
    cin >> del;

    // Bắt đầu từ vị trí del vừa nhập
    // Kết thúc khi i đến cuối mảng
    // Duyệt từng vị trí từ 0 đến n - 1
    for (int i = del; i < n - 1; i++)
    {
        ps[i] = ps[i + 1];
        // Gán vị trí sau dịch về trước
    }
    --n; // Xóa đi 1 phần tử

    cout << "\nMang sau khi xoa: ";
    xuatPS(ps, n);
}

void suaPS(PhanSo ps[], int n)
{

    int sua;
    cout << "Nhap vi tri can sua: ";
    cin >> sua;
    cout << "\n\tNhap phan so can them";

    PhanSo x;
    cout << "\nnhap tu so: ";
    cin >> x.tuSo;
    cout << "\nNhap mau so: ";
    cin >> x.mauSo;

    ps[sua] = x; // Xác định vị trí cần sửa

    cout << "\n\tPhan so sau khi sua: ";
    xuatPS(ps, n);
}

// --------------------- 3 GIAI THUAT TIM KIEM -------------------------

// VET CAN
void vetCanPS(PhanSo ps[], int n)
{
    PhanSo x;
    cout << "\n\tNhap Phan tu can tim";
    cout << "\nnhap tu so: ";
    cin >> x.tuSo;
    cout << "\nNhap mau so: ";
    cin >> x.mauSo;

    int viTri = 0;
    bool check = false;
    for (int i = 0; i < n; i++)
    {
        if (ps[i].tuSo == x.tuSo && ps[i].mauSo == x.mauSo)
        {
            check = true;
            viTri = i;
            break;
        }
    }
    if (check == true)
        cout << "\nTim thay phan so tai vi tri: " << viTri << "\n";
    else
        cout << "\nKhong tim thay";
}

// LINH CANH
void linhCanhPS(PhanSo ps[], int n)
{

    PhanSo x;
    cout << "\n\tNhap Phan tu can tim";
    cout << "\nNhap tu so: ";
    cin >> x.tuSo;
    cout << "\nNhap mau so: ";
    cin >> x.mauSo;

    int viTri = 0;
    bool check = false;
    ps[n] = x;
    for (int i = 0;; i++)
    {
        if (ps[i].tuSo == x.tuSo && ps[i].mauSo == x.mauSo)
        {
            check = true;
            viTri = i;
            break;
        }
    }
    if (check == true)
        cout << "\nTim thay x tai vi tri " << viTri;
    else
        cout << "\nkhong tim thay x";
}

// NHI PHAN
int nhiPhanPS(PhanSo ps[], int n)
{
    PhanSo x;
    cout << "\n\tNhap Phan tu can tim";
    cout << "\nNhap tu so: ";
    cin >> x.tuSo;
    cout << "\nNhap mau so: ";
    cin >> x.mauSo;

    int left = 0, right = n - 1;

    // nếu giá trị ở vị trí 0 lớn hơn giá trị ở vị trí n - 1 thì thoát
    // nếu giá trị ở vị trí 0 nhỏ hơn hoặc bằng giá trị ở vị trí n - 1 thì thực hiện vòng lặp
    while (left <= right)
    {
        int mid = (left + right) / 2;                           // Vị trí ở giữa 0 và n - 1
        if (ps[mid].tuSo == x.tuSo && ps[mid].mauSo == x.mauSo) // nếu giá trị ở vị trí giữa bằng giá trị x
        {
            return mid; // Tra ve vi tri cua phan tu tim thay
        }
        else if (ps[mid].tuSo < x.tuSo && ps[mid].mauSo < x.mauSo) // hoặc nếu giá trị ở vị trí giữa nhỏ hơn giá trị x
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

// ----------------------- 6 GIAI THUAT SAP XEP ---------------------------

// SẮP XẾP CHỌN
void selectionSort(PhanSo ps[], int n)
{
    PhanSo tam; // không sử dụng biến int hoặc các biến khác được
    // vì nếu xét điều kiện với mảng ps thì nó sẽ báo không cùng kiểu dữ liệu

    for (short i = 0; i < n - 1; i++)     // Bắt đầu từ 0 ; duyệt hết tất cả các vị trí ; duyện qua từng vị trí
        for (short j = i + 1; j < n; j++) // Bắt đầu từ vị trí kế tiếp; duyệt hết tất cả các vị trí; duyệt qua từng vị trí
        {
            if (ps[i].tuSo && ps[i].mauSo > ps[j].tuSo && ps[j].mauSo)
            // nếu giá trị của vị tri i lớn hơn j
            {
                tam = ps[i];
                ps[i] = ps[j];
                ps[j] = tam;
            }
        }
}

/// @brief SẮP XEP NOI BOT
/// @param ps Hơi giống mảng (struct ps có tử số và mẫu số)
/// @param n Số Lượng phân tử
void bubbleSort(PhanSo ps[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ps[i].tuSo && ps[i].mauSo > ps[j].tuSo && ps[j].mauSo)
            {
                swap(ps[i], ps[j]);
            }
        }
    }
}

/// @brief Sắp xếp chèn
/// @param ps struct Phanso
/// @param n số lượng phần tử
void insertionSort(PhanSo ps[], int n)
{
    PhanSo Tam;
    // không sử dụng biến int hoặc các biến khác được
    // vì nếu xét điều kiện với mảng ps thì nó sẽ báo không cùng kiểu dữ liệu

    int viTri;

    for (int i = 1; i < n; i++) // Bắt đầu duyệt từ phần tử đầu tiên
    // vì nếu duyệt từ vị trí 0 thì sẽ
    {

        Tam = ps[i];   // gán giá trị mảng cho tam
        viTri = i - 1; // gắn vị trí hiện tại - 1  cho vị trí

        while (viTri >= 0 && Tam.tuSo && Tam.mauSo < ps[viTri].tuSo && ps[viTri].mauSo)
        // nếu viTrí hiện tại -1 lớn hơn hoặc bằng 0 và giá trị mảng lơn hơn giá trị mảng ở vị trí hiện tại - 1
        {
            ps[viTri + 1] = ps[viTri];
            // thì gán giá trị mảng ở vị trí hiện tại + thêm 1
            --viTri; // và vị trí hiện đó dịch chuyển về trước
        }

        ps[viTri + 1] = Tam;
        // gán giá trị mảng cho giá trị mảng ở vị trí cuối + 1
    }
}

/// @brief Sắp xếp nhanh
/// @param ps struct Phanso
/// @param left Bắt đầu vị trí tử vị trí [0]
/// @param right Đến vị trí cuối mảng [n-1]
void quickSort(PhanSo ps[], int left, int right)
{
    PhanSo mid = ps[(left + right) / 2];
    int i = left, j = right;
    while (i < j)
    {
        while (ps[i].tuSo && ps[i].mauSo < mid.tuSo && mid.mauSo)
        {
            i++;
        }
        while (ps[j].tuSo && ps[j].mauSo > mid.tuSo && mid.mauSo)
        {
            j--;
        }
        if (i <= j)
        {
            swap(ps[i], ps[j]);
            i++;
            j--;
        }
        if (i < right)
        {
            quickSort(ps, i, right);
        }
        if (j > left)
        {
            quickSort(ps, j, left);
        }
    }
}

/// @brief Hàm xử lí Sắp xếp trộn
/// @param ps struct Phanso
/// @param left Bắt đầu vị trí tử vị trí [0]
/// @param mid vị trí ở giữa vị trí 0 và n-1
/// @param right Đến vị trí cuối mảng [n-1]
void merge(PhanSo ps[], int left, int mid, int right)
{
    int i, j, k;
    int x = mid - left + 1;
    int y = right - mid;

    PhanSo LEFT[x];
    PhanSo RIGHT[y];

    for (i = 0; i < x; i++)
    {
        LEFT[i] = ps[left + 1];
    }
    for (j = 0; j < y; j++)
    {
        RIGHT[j] = ps[mid + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < x && j < y) // điều kiện
    {
        if (LEFT[i].tuSo && LEFT[i].mauSo <= RIGHT[j].tuSo && RIGHT[j].mauSo)
        {
            ps[k] = LEFT[i];
            i++;
        }
        else
        {
            ps[k] = RIGHT[j];
            j++;
        }
        k++;

        while (i < x)
        {
            ps[k] = LEFT[i];
            i++;
            k++;
        }
        while (j < y)
        {
            ps[k] = RIGHT[j];
            j++;
            k++;
        }
    }
}

/// @brief Hàm chính Sắp xếp trộn
/// @param ps struct Phanso
/// @param left Bắt đầu vị trí tử vị trí [0]
/// @param right Đến vị trí cuối mảng [n-1]
void mergeSort(PhanSo ps[], int left, int right)
{

    if (left >= right)
        return;
    int mid = (left + right) / 2;
    mergeSort(ps, left, mid);
    mergeSort(ps, mid + 1, right);
    merge(ps, left, mid, right);
}