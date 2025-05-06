#include "thuvien.h"

// I. KỸ THUẬT NHẬP XUẤT MẢNG 

void nhap_so_phan_tu_mang(int &n){
    do{
        cout << "Nhap so phan tu mang: ";
        cin >> n;
    } while(n <= 0);
}

void nhap_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu a[" << i + 1 << "]: ";
        cin >> mang_so_nguyen[i];
    }
}

void nhap_mang_1_chieu_so_thuc(float mang_so_thuc[], int n){
    for(int i = 0; i < n; i++){
        cout << "Nhap phan tu a[" << i + 1 << "]: ";
        cin >> mang_so_thuc[i];
    }
}

void xuat_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "Mang cac so nguyen la: ";
    for(int i = 0; i < n; i++){
        cout << mang_so_nguyen[i] << " ";
    }
    cout << endl;
}

void xuat_mang_1_chieu_so_thuc(float mang_so_thuc[], int n){
    cout << "Mang cac so thuc la: ";
    for(int i = 0; i < n; i++){
        cout << (float)mang_so_thuc[i] << " ";
    }
    cout << endl;
}

void liet_ke_so_chan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "Cac so chan la: ";
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 2 == 0){
            cout << mang_so_nguyen[i] << " ";
        }
    }
    cout << endl;
}

// kiểm tra số chính phương 
bool ktra_scp(int n){
    if(n < 1) return false;
    for(int i = 1; i < n; i++){
        if(i * i == n) return true;
    }
    return false;
}

void in_ra_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "So chinh phuong la: ";
    for(int i = 0; i < n; i++){
        if(ktra_scp(mang_so_nguyen[i])){
            cout << mang_so_nguyen[i] << " ";
        }
    }
    cout << endl;
}

void liet_ke_so_chia_het_cho_3_va_5_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "Cac so chia het cho 3 va 5 la: ";
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 3 == 0 && mang_so_nguyen[i] % 5 == 0){
            cout << mang_so_nguyen[i] << " ";
        }
    }
    cout << endl;
}

void in_ra_boi_cac_so_cua_7_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "Boi cac so cua 7 la: ";
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 7 == 0){
            cout << mang_so_nguyen[i] << " ";
        }
    }
    cout << endl;
}

// kiểm tra số nguyên tố
bool ktra_snt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void liet_ke_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "Cac so nguyen to la: ";
    for(int i = 0; i < n; i++){
        if(ktra_snt(mang_so_nguyen[i])){
            cout << mang_so_nguyen[i] << " ";
        }
    }
    cout << endl;
}

// kiểm tra số hoàn hảo (số hoàn thiện)
bool ktra_shh(int n){
    if(n < 1) return false;
    int tong_chia = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            tong_chia += i;
        }
    }
    if(tong_chia == n) return true;
    else return false;
}

void liet_ke_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    cout << "Cac so hoan thien la: ";
    for(int i = 0; i < n; i++){
        if(ktra_shh(mang_so_nguyen[i])){
            cout << mang_so_nguyen[i] << " ";
        }
    }
    cout << endl;
}

// II. KỸ THUẬT ĐẶT LÍNH CANH

int tim_gia_tri_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int max = mang_so_nguyen[0];
    for(int i = 1; i < n; i++){
        if(mang_so_nguyen[i] > max){
            max = mang_so_nguyen[i];
        }
    }   
    return max;
}

int tim_gia_tri_min_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int min = mang_so_nguyen[0];
    for(int i = 1; i < n; i++){
        if(mang_so_nguyen[i] < min){
            min = mang_so_nguyen[i];
        }
    }
    return min;
}

int tim_gia_tri_duong_dau_tien_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] > 0){
            return mang_so_nguyen[i];
        }
    }
    return -1;
}

int tim_shh_dau_tien_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    for(int i = 0; i < n; i++){
        if(ktra_shh(mang_so_nguyen[i])){
            return mang_so_nguyen[i];
        }
    }
    return -1;
}

int tim_vi_tri_gia_tri_min_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int min = mang_so_nguyen[0];
    int index = 0;
    int check = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] < min){
            min =  mang_so_nguyen[i];
            index = i;
            check = 1;
        }
    }
    if(!check) return -1;
    else return index;
}

int tim_vi_tri_gia_tri_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int max = mang_so_nguyen[0];
    int index = 0;
    int check = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] > min){
            max =  mang_so_nguyen[i];
            index = i;
            check = 1;
        }
    }
    if(!check) return -1;
    else return index;
}

int tim_gia_tri_pt_chan_dau_tien_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] > 0){
            return i;
        }
    }
    return -1;
}

int tim_vi_tri_shh_cuoi_cung_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    for(int i = n - 1; i >= 0; i--){
        if(ktra_shh(mang_so_nguyen[i])){
            return i;
        }
    }
    return -1;
}

int tim_snt_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int max = mang_so_nguyen[0];
    int check = 0;
    for(int i = 0; i < n; i++){
        if(ktra_snt(mang_so_nguyen[i]) && mang_so_nguyen[i] > max){
            max = mang_so_nguyen[i];
            check = 1;
        }
    }
    if(!check) return -1;
    else return max;
}

int tim_vi_tri_pt_chan_min_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int min = mang_so_nguyen[0];
    int index = 0;
    int check = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] < min && mang_so_nguyen[i] % 2 == 0){
            index = i;
            check = 1;
        }
    }
    if(!check) return -1
    else return index;
}

// III. KỸ THUẬT TÍNH TỔNG

void tong_pt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += mang_so_nguyen[i];
    }
    cout << "Tong phan tu la: " << sum << endl;
}

void tong_pt_duong_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] > 0){
            sum += mang_so_nguyen[i];
        }
    }
    cout << "Tong phan tu duong la: " << sum << endl;
}

void tong_pt_chia_het_cho_3_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 3 == 0){
            sum += mang_so_nguyen[i];
        }
    }
    cout << "Tong phan tu chia het cho 3 la: " << sum << endl;
}

void tong_boi_2_va_7_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 2 && mang_so_nguyen[i] % 7 == 0){
            sum += mang_so_nguyen[i];
        }
    }
    cout << "Tong boi so cua 2 va 7 la: " << sum << endl;
}

void tong_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(ktra_snt(mang_so_nguyen[i])){
            sum += mang_so_nguyen[i];
        }
    }
    cout << "Tong so nguyen to la: " << sum << endl;
}

void tong_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(ktra_scp(mang_so_nguyen[i])){
            sum += mang_so_nguyen[i];
        }
    }
    cout << "Tong so chinh phuong la: " << sum << endl;
}       

void tong_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(ktra_shh(mang_so_nguyen[i])){
            sum += mang_so_nguyen[i];
        }
    }
    cout << "Tong so hoan thien la: " << sum << endl;
}

void tong_tbc_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_snt(mang_so_nguyen[i])){
            sum += mang_so_nguyen[i];
            count += i;
        }
    }
    float tbc_snt = float(sum/count);
    cout << "Tong trung binh cong so nguyen to la: " << tbc_snt << endl;
}

void tong_tbc_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_scp(mang_so_nguyen[i])){
            sum += mang_so_nguyen[i];
            count += i;
        }
    }
    float tbc_snt = float(sum/count);
    cout << "Tong trung binh cong so chinh phuong la: " << tbc_snt << endl;
}

void tong_tbc_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_shh(mang_so_nguyen[i])){
            sum += mang_so_nguyen[i];
            count += i;
        }
    }
    float tbc_snt = float(sum/count);
    cout << "Tong trung binh cong so hoan hao la: " << tbc_snt << endl;
}

// IV. KỸ THUẬT ĐẾM 
void dem_so_chan_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 2 == 0){
            count++;
        }
    }
    cout << "So luong so chan la: " << count << endl;
}

void dem_so_duong_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] > 0){
            count++;
        }
    }
    cout << "So luong so duong la: " << count << endl;
}

void dem_boi_3_hoac_5_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] % 3 == 0 || mang_so_nguyen[i] % 5 == 0){
            count++;
        }
    }
    cout << "So luong boi cua 3 hoac 5 la: " << count << endl;
}

void dem_cac_uoc_cua_3_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(3 % mang_so_nguyen[i] == 0){
            count++;
        }
    }
    cout << "So luong uoc cua 3 la: " << count << endl;
}

void dem_cac_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_snt(mang_so_nguyen[i])){
            count++;
        }
    }
    cout << "So luong so nguyen to la: " << count << endl;
}

void dem_cac_shh_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_shh(mang_so_nguyen[i])){
            count++;
        }
    }
    cout << "So luong so hoan hao la: " << count << endl;
}

void dem_cac_scp_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_scp(mang_so_nguyen[i])){
            count++;
        }
    }
    cout << "So luong so chinh phuong la: " << count << endl;
}

void dem_so_luong_gt_max_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    int max = mang_so_nguyen[0];
    for(int i = 1; i < n; i++){
        if(mang_so_nguyen[i] > max){
            max = mang_so_nguyen[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(mang_so_nguyen[i] == max){
            count++;
        }
    }
    cout << "So luong gia tri lon nhat la: " << count << endl;
}

void dem_snt_o_vi_tri_le_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_snt(mang_so_nguyen[i]) && i % 2 != 0){
            count++;
        }
    }
    cout << "So luong so nguyen to o vi tri le la: " << count << endl;
}

void dem_scp_o_vi_tri_snt_mang_1_chieu_so_nguyen(int mang_so_nguyen[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(ktra_scp(mang_so_nguyen[i]) && ktra_snt(i)){
            count++;
        }
    }
    cout << "So luong so chinh phuong o vi tri so nguyen to la: " << count << endl;
}