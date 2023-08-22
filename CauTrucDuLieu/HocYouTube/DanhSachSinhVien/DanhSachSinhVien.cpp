#include<iostream> 
using namespace std;
#include<string>
#include<fstream>

struct date 
{
	int ngay{};
	int thang{};
	int nam{};
};
typedef struct date DATE;
 
void docNgayThangNam(ifstream &filein, DATE &date) {
	filein >> date.ngay;
	filein.seekg(1, 1);
	filein >> date.thang;
	filein.seekg(1, 1);
	filein >> date.nam;

}

struct sinhVien 
{
	string hoTen;
	string mssv;
	DATE ngaySinh;
	float dtb{};
};
typedef struct sinhVien SINHVIEN;

struct node 
{
	SINHVIEN data;
	struct node* next{};
};
typedef struct node NODE;

struct list 
{
	NODE *heat;
	NODE *tail;
};

typedef struct list LIST;

void khoiTao(LIST &l) {
	l.heat = NULL;
	l.tail = NULL;
}

NODE *khoiTaoNode(SINHVIEN x) {
	NODE *p = new NODE;
	if (p == NULL) {
		cout << "\n Cap phat that bai! ";
		return NULL;
	}
	p->data = x;
	p->next = NULL;

	return p;
}

void themVaoDau(LIST& l, NODE* p) {
	if (l.heat == NULL) {
		l.heat = l.tail = p;
	}
	else {
		p->next = l.heat;
		l.heat = p;
	}
}

void themVaoCuoi(LIST& l, NODE* p) {
	if (l.heat == NULL) {
		l.heat = l.tail = p;
	}
	else {
		l.tail->next = p;
		l.tail = p;
	}
}

void docThongTin1SinhVien(ifstream &filein, SINHVIEN &sv) {
	getline(filein, sv.hoTen,',');
	filein.seekg(1, 1);
	getline(filein, sv.mssv,',');
	filein.seekg(1, 1);
	docNgayThangNam(filein, sv.ngaySinh);
	filein.seekg(2, 1);
	filein >> sv.dtb;

	//tao bien tam de doc ki tu xuong dong o cuoi dong 
	string temp;
	getline(filein, temp);
}

void docDanhSachSinhVien(ifstream& filein, LIST& l) {
	while (!filein.eof())
	{
		//buoc 1: doc thong tin sinh vien
		SINHVIEN sv;
		docThongTin1SinhVien(filein, sv);
		// buoc2 : khoi tao node sinh vien
		NODE* p = khoiTaoNode(sv);
		//buoc 3: them sinh vien vao danh sach lien ket don
		themVaoCuoi(l, p);
	}



}
//Ham giai phong vung nho cho danh sach lien ket don
void giaiPhongVungNho(LIST& l) {
	NODE* p = NULL;
	while(l.heat != NULL){ //neu ki tu dau == NULL thi thoat vong lap 
		p = l.heat; 
		l.heat = l.heat->next;
		delete p;
	}
}

//ham ghi thong tin 1 sinh vien vao file
void ghiFle1SinhVien(ostream &fileout, SINHVIEN sv) {

	fileout << sv.hoTen << ", ";
	fileout << sv.mssv << ", ";
	fileout << sv.ngaySinh.ngay << "/"<<sv.ngaySinh.thang << "/" << sv.ngaySinh.nam<< ", ";
	fileout << sv.dtb;

}

// Hoan vi 2 cai data cua 2 node cho nhau
void hoanVi(SINHVIEN &x,SINHVIEN &y ) {
	SINHVIEN tam = x;
	x = y;
	y = tam;
}

//ham sap xep tang dan theo diem trung binh
void sapXepTangDan(LIST &l) {

	for (NODE* k = l.heat; k != NULL; k = k->next) {
		for (NODE* h = k->next; h != NULL; h = h->next) {
			if (k->data.dtb < h->data.dtb) {
				hoanVi(k->data, h->data);
				
			}
		}
	}
}

// Sap xep danh sach sinh vien theo diem trung binh tang dan 
// -> sau do luu file DIEMMAX.
void luuFileSapXepMax(LIST &l) {
	ofstream fileout;
	fileout.open("DIEMMAX.txt",ios::out);

	//Buoc 1: goi lai ham sap xep de sap xep danh sach sinh vien theo diem tang dan
	sapXepTangDan(l);

	//Buoc 2: Dung vong lap de luu tat ca thong tin sinh vien
	for (NODE* k = l.heat; k != NULL; k = k->next) {
		ghiFle1SinhVien(fileout, k->data);
		fileout << endl;
	}

	fileout.close();

}

//In danh sach sinh vien co diem trung binh cao ngat file DIEMTRUNGBINHMAX.txt
void ghiFile1SinhVienDiemTrungBinhMax(LIST& l) {
	
	float max = l.heat->data.dtb;
	//Buoc1: Tim ra diem trung binh cao nhat
	for (NODE* k = l.heat; k != NULL; k = k->next) {
		if (max < k->data.dtb) {
			max = k->data.dtb;
		}
	}
	//Mo file
	ofstream fileout;
	fileout.open("DIEMTRUNGBINHMAX.txt", ios::out);
	//Buoc2: Tim ra diem trung binh cao nhat va ghi file
	for (NODE* k = l.heat; k != NULL; k = k->next) {
		if (max == k->data.dtb) {
			ghiFle1SinhVien(fileout,k->data);
			fileout << endl;
		}
	}

	//dong file
	fileout.close();
}


void xuat(SINHVIEN sv) {
	cout << "\nHo Ten: " << sv.hoTen;
	cout << "\nMSSV: " << sv.mssv;
	cout << "\nNgay Sinh: " << sv.ngaySinh.ngay << "/" << sv.ngaySinh.thang << "/" << sv.ngaySinh.nam;
	cout << "\nDiem trung binh: " << sv.dtb;
	cout << "\n";

}

// ham xuat tat ca sinh vien
void xuatDanhSachSinhVien(LIST l) {
	int dem = 1;
	for (NODE* k = l.heat; k != NULL; k = k->next) {
		cout << "\nSINH VIEN THU: " << "[" << dem++ << "]";
		xuat(k->data);
	}
}

//Ham tach ten trong chuoi ho ten
string tenSinhVien(string tensv) {

	//duyet ho ten sinh vien tu cuoi chuoi ve dau
	int length = tensv.length();
	int i;
	for (i = length - 1; i >= 0; i--) {
		if (tensv[i] == ' ') {
			break;
		}
	}
	//Buoc 2: cat chuoi tai vi tri i + 1 ve den cuoi chuoi
	return tensv.substr(i + 1);
}


void timKiemSinhVienDuaVaoTen(LIST& l, string tensv) {

	for (NODE* k = l.heat; k != NULL; k = k->next) {

		//Buoc 1: cat ten trong chuoi ho ten danh sach sinh vien
		string ten = tenSinhVien(k->data.hoTen);

		if (_stricmp((char*)ten.c_str(), (char*)tensv.c_str()) == 0) {

			xuat(k->data);
			cout << endl ;
		}
	}
}


int main() {
	LIST l;
	khoiTao(l);
	ifstream filein;
	filein.open("SINHVIEN.txt", ios::in);
	docDanhSachSinhVien(filein,l);
	xuatDanhSachSinhVien(l);
	//BT 1
	//luuFileSapXepMax(l);
	
	// BT 2
	//ghiFile1SinhVienDiemTrungBinhMax(l);
	
	//BT 3
	string tensv;
	cout << "\nNhap ho ten sinh vien can tim: ";
	getline(cin, tensv);
	timKiemSinhVienDuaVaoTen(l, tensv);

	giaiPhongVungNho(l);
	filein.close();
	return 0;
}