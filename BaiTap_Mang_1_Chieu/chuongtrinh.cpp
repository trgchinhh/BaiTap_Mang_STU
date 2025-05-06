#include "thuvien.h"

int main(){
    // TẠO MẢNG
    int mang_so_nguyen[10000]; 
    float mang_so_thuc[10000]; 

    int n; nhap_so_phan_tu_mang(n); 

    // I. KỸ THUẬT NHẬP XUẤT MẢNG 
    nhap_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    nhap_mang_1_chieu_so_thuc(mang_so_thuc, n);
    xuat_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    xuat_mang_1_chieu_so_thuc(mang_so_thuc, n);
    liet_ke_so_chan_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    in_ra_scp_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    liet_ke_so_chia_het_cho_3_va_5_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    in_ra_boi_cac_so_cua_7_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    liet_ke_snt_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    liet_ke_shh_mang_1_chieu_so_nguyen(mang_so_nguyen, n);

    // II. KỸ THUẬT ĐẶT LÍNH CANH
    cout << "Gia tri lon nhat la: " << tim_gia_tri_max_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "Gia tri nho nhat la: " << tim_gia_tri_min_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    cout << "Gia tri duong dau tien la: " << tim_gia_tri_duong_dau_tien_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "So hoan hao dau tien la: " << tim_shh_dau_tien_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "Vi tri gia tri nho nhat la: " << tim_vi_tri_gia_tri_min_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "Vi tri gia tri lon nhat la: " << tim_vi_tri_gia_tri_max_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "Gia tri phan tu chan dau tien: " << tim_gia_tri_pt_chan_dau_tien_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "So hoan thien cuoi cung la: " << tim_vi_tri_shh_cuoi_cung_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "So nguyen to lon nhat la: " << tim_snt_max_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << "Vi tri phan tu nho nhat la: " << tim_vi_tri_pt_chan_min_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;

    // III. KỸ THUẬT TÍNH TỔNG
    tong_pt_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_pt_duong_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_pt_chia_het_cho_3_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_boi_2_va_7_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_snt_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_scp_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_shh_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_tbc_snt_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_tbc_scp_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    tong_tbc_shh_mang_1_chieu_so_nguyen(mang_so_nguyen, n); 

    // IV. KỸ THUẬT ĐẾM 
    dem_so_chan_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_so_duong_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_boi_3_hoac_5_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_cac_uoc_cua_3_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_cac_snt_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_cac_shh_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_cac_scp_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_so_luong_gt_max_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_snt_o_vi_tri_le_mang_1_chieu_so_nguyen(mang_so_nguyen, n);
    dem_scp_o__vi_tri_snt_mang_1_chieu_so_nguyen(mang_so_nguyen, n);

    // V. KỸ THUẬT ĐẶT CỜ HIỆU 
    cout << kiem_tra_so_0_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_snt_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_scp_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_shh_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_so_chan_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_toan_so_chan_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_tang_dan_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_giam_dan_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
    cout << kiem_tra_cac_pt_bang_nhau_mang_1_chieu_so_nguyen(mang_so_nguyen, n) << endl;
}