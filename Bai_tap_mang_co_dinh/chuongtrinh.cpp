#include "thuvien.h"

// MA TRẬN CỐ ĐỊNH VUÔNG (N * N) 

int main(){
    int n; 
    int a[SLPT][SLPT]; 
    nhap_so_luong_ma_tran_vuong(n);
    nhap_ma_tran_vuong(a, n);
    tim_gia_tri_max_ma_tran(a, n);
    dem_so_nguyen_to_ma_tran(a, n);
    kiem_tra_ton_tai_so_nguyen_to_ma_tran(a, n);
    tinh_tong_pt_am_ma_tran(a, n);
    tinh_tong_pt_duong_cheo_chinh(a, n);
    tinh_tong_pt_duong_cheo_phu(a, n);
    tim_gia_tri_min_duong_cheo_phu(a, n);
}