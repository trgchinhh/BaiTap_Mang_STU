#include "thuvien.h"

// MA TRẬN BẤT KỲ (N * M) 

int main(){
    // I. Nhập xuất ma trận 
    int n, m; 
    int a[SLPT][SLPT]; 
    float b[SLPT][SLPT];
    nhap_so_luong_ma_tran(n, m); // n va m la so luong hang va cot 
    nhap_ma_tran_so_nguyen(a, n, m);
    nhap_ma_tran_so_thuc(b, n, m);
    xuat_ma_tran_so_nguyen(a, n, m);
    liet_ke_so_chan_ma_tran_so_nguyen(a, n, m);
    in_ra_scp_ma_tran_so_nguyen(a, n, m);
    liet_ke_so_chia_het_cho_3_va_5(a, n, m);
    in_ra_cac_so_boi_cua_7(a, n, m);
    liet_ke_snt_ma_tran_so_nguyen(a, n, m);
    liet_ke_shh_ma_tran_so_nguyen(a, n, m);

    // II. ĐẶT LÍNH CANH
    tim_max_ma_tran_so_nguyen(a, n, m);
    tim_min_ma_tran_so_nguyen(a, n, m);
    tim_duong_dau_tien_ma_tran_so_nguyen(a, n, m);
    tim_shh_dau_tien_ma_tran_so_nguyen(a, n, m);
    cout << "Vi tri phan tu chan dau tien la: " << tim_vi_tri_pt_chan_dau_tien_ma_tran_so_nguyen(a, n, m) << endl;
    tim_gt_am_lon_nhat_ma_tran_so_nguyen(a, n, m);
    liet_ke_cac_dong_chua_max_ma_tran_so_nguyen(a, n, m);
    tim_max_tren_1_dong_ma_tran_so_nguyen(a, n, m);
    tim_min_tren_1_cot_ma_tran_so_nguyen(a, n, m);
    tim_snt_max_ma_tran_so_nguyen(a, n, m);
    tim_shh_min_ma_tran_so_nguyen(a, n, m);
    liet_ke_cac_dong_sum_max_ma_tran_so_nguyen(a, n, m);
    liet_ke_dong_co_nhieu_snt_ma_tran_so_nguyen(a, n, m);

    // III. TÍNH TOÁN MA TRẬN 
    tinh_tong_pt_ma_tran_so_nguyen(a, n, m);
    tinh_tich_so_le_ma_tran_so_nguyen(a, n, m);
    tinh_tong_gt_duong_ma_tran_so_nguyen(a, n, m);
    tinh_tong_so_chia_het_cho_3_ma_tran_so_nguyen(a, n, m);
    tinh_tong_boi_cua_2_va_7_ma_tran_so_nguyen(a, n, m);
    tinh_tong_snt_ma_tran_so_nguyen(a, n, m);
    tinh_tong_shh_ma_tran_so_nguyen(a, n, m);
    tinh_tong_tbc_snt_ma_tran_so_nguyen(a, n, m);
    tinh_tong_tbc_scp_ma_tran_so_nguyen(a, n, m);
    tinh_tong_tbn_shh_ma_tran_so_nguyen(a, n, m);

}
