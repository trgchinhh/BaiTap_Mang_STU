#include <iostream>
using namespace std;

// số lượng phần tử cho hàng và cột mặc định  
const int SLPT = 50;

// I. Nhập xuất ma trận
void nhap_so_luong_ma_tran(int &n, int &m); // n va m la so luong hang va cot 
void nhap_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void nhap_ma_tran_so_thuc(float b[][SLPT], int n, int m);
void xuat_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void liet_ke_so_chan_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void in_ra_scp_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void liet_ke_so_chia_het_cho_3_va_5(int a[][SLPT], int n, int m);
void in_ra_cac_so_boi_cua_7(int a[][SLPT], int n, int m);
void liet_ke_snt_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void liet_ke_shh_ma_tran_so_nguyen(int a[][SLPT], int n, int m);

// II. Đặt lính canh 
void tim_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_min_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_duong_dau_tien_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_shh_dau_tien_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
int tim_vi_tri_pt_chan_dau_tien_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_gt_am_lon_nhat_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void liet_ke_cac_dong_chua_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_max_tren_1_dong_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_min_tren_1_cot_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_snt_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tim_shh_min_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void liet_ke_cac_dong_sum_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void liet_ke_dong_co_nhieu_snt_ma_tran_so_nguyen(int a[][SLPT], int n, int m);

// III. TÍNH TOÁN MA TRẬN 
void tinh_tong_pt_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tich_so_le_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_gt_duong_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_so_chia_het_cho_3_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_boi_cua_2_va_7_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_snt_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_shh_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_tbc_snt_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_tbc_scp_ma_tran_so_nguyen(int a[][SLPT], int n, int m);
void tinh_tong_tbn_shh_ma_tran_so_nguyen(int a[][SLPT], int n, int m);










