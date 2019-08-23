
#pragma once
#include <stdio.h>
#include <vector>
#include <sstream>
#include<iostream>
using namespace std;

namespace MyLib
{
	class Chuoi
	{
	public:
		int soSanhChuoi(const wchar_t *X, const wchar_t *Y);
		int kiemTrachuaChuoi(const wchar_t *X, const wchar_t *Y);
		vector<wstring> *tach(wstring s, char delim, int rep = 0);
		wstring vietHoa(wstring s);
		wstring vietThuong(wstring s);
		wstring boDau(wstring s);
		int timKiemChuoiCon(wstring chuoiCha, wstring chuoiCon);
		wstring boKhoangTrang(wstring a);
		bool kiemTraNhapTen(wstring ten);
		bool kiemTraNhapChucVu(wstring chucVu);
		wstring vietHoaKiTuDau(wstring ten);
		bool kiemTraNhapSoNguyen(wstring so);
		bool kiemTraNhapSoThuc(wstring so);
		int chuyenStringSangSoNguyen(wstring so);
		float chuyenStringSangSoThuc(wstring so);



	};




}

//// Implement strcmp function in C
//int main()
//{
//	char *X = "Techie";
//	char *Y = "Tech";
//
//	int ret = strcmp(X, Y);
//
//	if (ret > 0)
//		printf("%s", "X is greater than Y");
//	else if (ret < 0)
//		printf("%s", "X is less than Y");
//	else
//		printf("%s", "X is equal to Y");
//
//	return 0;
//}
