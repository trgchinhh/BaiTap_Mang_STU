#include <iostream>
using namespace std;

// số lượng phần tử cho hàng và cột mặc định  
const int SLPT = 50;

void nhap_so_luong_ma_tran_vuong(int &n);
void nhap_ma_tran_vuong(int a[][SLPT], int n);
void tim_gia_tri_max_ma_tran(int a[SLPT][SLPT],int n);
void dem_so_nguyen_to_ma_tran(int a[][SLPT], int n);
void kiem_tra_ton_tai_so_nguyen_to_ma_tran(int a[][SLPT], int n);
void tinh_tong_pt_am_ma_tran(int a[][SLPT], int n);
void tinh_tong_pt_duong_cheo_chinh(int a[][SLPT], int n);
void tinh_tong_pt_duong_cheo_phu(int a[][SLPT], int n);
void tim_gia_tri_min_duong_cheo_phu(int a[][SLPT], int n);
