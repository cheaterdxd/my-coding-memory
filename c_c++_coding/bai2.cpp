#include <iostream>
#include <string>
#include <vector>
#include <malloc.h>
using namespace std;

class NhanVien{
	protected:
		string maso;
		string hoTen;
		string chucVu;
		double Luong;
	public:
		NhanVien(){
			this->maso = "";
			this->hoTen = "";
			this->chucVu = "";
			this->Luong = 0;
		}
		
		NhanVien(string maso, string hoTen, string chucVu){
			this->maso = maso;
			this->hoTen = hoTen;
			this->chucVu = chucVu;
			this->Luong = 0;
		}
		
		NhanVien(NhanVien &nv){
			this->maso = nv.getMaSo();
			this->hoTen = nv.getHoTen();
			this->chucVu = nv.getChucVu();
			this->Luong = nv.Luong;
		}
		~NhanVien(){ };
		void setMaSo(string maso);
		void setHoTen(string hoTen);
		void setChucVu(string chucVu);
		string getMaSo(){ return this->maso; }
		string getHoTen(){ return this->hoTen; }
		string getChucVu(){ return this->chucVu; }
		virtual ostream& operator<<(ostream& out);
		virtual void tinhTienLuong()=0;
		double BHXH;
//		void inputInfor();
		void inputInfor(){
				cout << "\nNHAP THONG TIN NHAN VIEN";
			cout << "\nNhap ma so nhan vien: ";
			string maso1;
//			cin.ignore();
			getline(cin,maso1);
			this->maso = maso1;
//			cout << "\nNhap ho ten nhan vien: ";
//			getline(cin, hoTen);
//			cout << "\nNhap chuc vu: ";
//			getline(cin, chucVu);
		}
};

class BienChe: public NhanVien{
	private:
		double hsl;
	public:
		BienChe(): NhanVien(){
			hsl = 0;
		}
		BienChe(string maso, string hoTen, string chucVu, double hsl);
		void tinhTienLuong();
		ostream& operator<<(ostream& out);
		void input_infor(){
			this->inputInfor();
			cout << "He so luong nhan vien: ";
			cin >> this->hsl;
			
		}
};

class HopDong: public NhanVien{
	private:
		int soNgayLam_thang;
	public:
		HopDong() : NhanVien(){
			this->soNgayLam_thang = 0;
		}
		HopDong(string maso, string hoTen, string chucVu, int soNgayLam) : NhanVien(maso, hoTen, chucVu){
			this->soNgayLam_thang = soNgayLam;
		}
		void tinhTienLuong();

		ostream& operator<<(ostream& out);
		void input_infor(){
			NhanVien::inputInfor();
			cout << "Nhap so ngay lam trong thang cua nhan vien: ";
			cin >> this->soNgayLam_thang;
		}
};

int main(){
	
	int n = 0;
	int loai = 0;
	cout << "nhap so nhan vien: ";
	cin >> n;
	NhanVien *tmp;
	for (int i = 0; i < n; i++){
		cout << "Nhan vien thuoc: ";
		cout << "\n\t1. Bien che.";
		cout << "\n\t2. Hop dong.";
		cin >> loai;
		cin.ignore();
		if ( loai == 1 ){
			tmp = (NhanVien*)malloc(sizeof(NhanVien));
//			tmp = new NhanVien();
			tmp->inputInfor();
			cout<<tmp->getMaSo();
		}
		else if ( loai == 2) {
			tmp = (HopDong*)malloc(sizeof(HopDong));
		}
	}
	return 0;
}




//void NhanVien::inputInfor(){
//	cout << "\nNHAP THONG TIN NHAN VIEN";
//	cout << "\nNhap ma so nhan vien: ";
//	getline(cin, this->maso);
//	cout << "\nNhap ho ten nhan vien: ";
//	getline(cin, this->hoTen);
//	cout << "\nNhap chuc vu: ";
//	getline(cin, this->chucVu);
//}

void NhanVien::setMaSo(string maso){
	this->maso = maso;
}
void NhanVien::setHoTen(string hoTen){
	this->hoTen = hoTen;
}
void NhanVien::setChucVu(string chucVu){
	this->chucVu = chucVu;
}


ostream& BienChe::operator<<(ostream& out){
	out << this->maso << "\t\t" << this->hoTen << "\t\t" << this->hsl << "\t\t" << this->Luong;
	return out;
}

ostream& HopDong::operator<<(ostream& out){
	return out;
}



