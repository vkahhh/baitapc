#include <stdio.h>
#include <string.h>

void hienThiTenCot();


struct DiemMH {
	float  toan;
	float  van;
	float  anh;
	float  diemTB;
};

struct SinhVien {
	int    ma;
	char   ten[50];
	int    tuoi;
	char   gioiTinh[10];
	struct DiemMH diem;
};

void nhapDiem(struct DiemMH* diem) {
	printf("Toan: ");
	scanf ("%f", &diem -> toan);
	printf("Van: ");
	scanf ("%f", &diem -> van);
	printf("Anh: ");
	scanf ("%f", &diem -> anh);

	diem -> diemTB = (diem -> toan + diem -> van + diem -> anh) / 3;
}


struct SinhVien nhapSV() {
	struct SinhVien sv;
	printf("Nhap ma: ");
	scanf ("%d", &sv.ma);
	printf("Nhap ten: ");
    scanf ("%s", sv.ten);
	printf("Tuoi: ");
	scanf ("%d", &sv.tuoi);
	printf("Gioi tinh: ");
	scanf ("%s", sv.gioiTinh);
	nhapDiem(&sv.diem);

	return sv;
}

void hienThiTTSV(struct SinhVien sv) {
	printf("%-10d %-20s %-10d %-10s %-10.2f %-10.2f %-10.2f %-10.2f\n", sv.ma, sv.ten, sv.tuoi, sv.gioiTinh, sv.diem.toan, sv.diem.van, sv.diem.anh, sv.diem.diemTB);
}


void sapXepTheoDiem(struct SinhVien* ds, int slsv) {
	int i, j;
	for(i = 0; i < slsv - 1; i++){
		for(j = slsv - 1; j > i; j --){
			if(ds[j].diem.diemTB > ds[j - 1].diem.diemTB){
				struct SinhVien sv = ds[j];
				ds[j]     = ds[j - 1];
				ds[j - 1] = sv;
			}
		}
	}
}


void hienThiTenCot() {
	printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Ma SV", "Ten", "Tuoi", "Gioi Tinh", "Diem Toan", "Diem Van", "Diem Anh", "Diem TB");
}

int main() {
	struct SinhVien dssv[100];
	int slsv = 0;
	int luaChon;
	
	do {
		printf("=============== MENU ===============");
		printf("\n1. Them Sinh vien vao danh sach.");
		printf("\n2. Hien thi danh sach sinh vien.");
		printf("\n3. Sap xep theo diem giam dan.");
		printf("\n0. Thoat chuong trinh.");
		printf("\nLua chon ");
		
		scanf ("%d", &luaChon);
		struct SinhVien sv;
		int i;
		switch(luaChon) {
			case 0:
				break;
				
			case 1:
				sv = nhapSV();
				dssv[slsv++] = sv;
				break;
				
			case 2:
				hienThiTenCot();
				for(i = 0; i < slsv; i++) {
					hienThiTTSV(dssv[i]);
				}
				break;
				
				
			case 3:
				sapXepTheoDiem(dssv, slsv);
				hienThiTenCot();
				for(i = 0; i < slsv; i++) {
					hienThiTTSV(dssv[i]);
				}
				break;
				
			default:
				printf("Sai chuc nang, vui long chon lai!\n");
				break;
		}
		
	} while(luaChon);
	
	return 0;
}