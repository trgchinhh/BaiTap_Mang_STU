#include "thuvien.h"

void nhap_so_luong_ma_tran_vuong(int &n){
    do{
        //cout << "Nhap so luong ma tran: ";
        cin >> n;
    } while(n <= 0 || n > SLPT);
}

void nhap_ma_tran_vuong(int a[][SLPT], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            //cout << "Nhap phan tu [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }
}

void tim_gia_tri_max_ma_tran(int a[][SLPT],int n){
    int max = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout << "Gia tri max trong ma tran la: " << max << endl;
}

// hàm kiểm tra số nguyên tố 
bool kiem_tra_snt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void dem_so_nguyen_to_ma_tran(int a[][SLPT], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(kiem_tra_snt(a[i][j])){
                count++;
            }
        }
    }
    cout << "So luong so nguyen to trong ma tran la: " << count << endl;
}

void kiem_tra_ton_tai_so_nguyen_to_ma_tran(int a[][SLPT], int n){
    int check = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(kiem_tra_snt(a[i][j])){
                check = true;
            }
        }
    }
    if(check) cout << "So nguyen to ton tai trong ma tran" << endl;
    else cout << "So nguyen to khong ton tai trong ma tran" << endl;
}

void tinh_tong_pt_am_ma_tran(int a[][SLPT], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] < 0){
                sum += a[i][j];
            }
        }
    }
    cout <<"Tong gia tri am trong mang la: " << sum << endl;
}

void tinh_tong_pt_duong_cheo_chinh(int a[][SLPT], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                sum += a[i][j];
            }
        }
    }
    cout << "Tong duong cheo chinh la: " << sum << endl;
}

void tinh_tong_pt_duong_cheo_phu(int a[][SLPT], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; j++) {
            if (i + j == n - 1) { 
                sum += a[i][j];
            }
        }
    }
    cout << "Tong duong cheo phu la: " << sum << endl;
}

void tim_gia_tri_min_duong_cheo_phu(int a[][SLPT], int n){
    int min = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1 && min < a[i][j]){
                min = a[i][j];
            }
        }
    }
    cout << "Phan tu nho nhat trong duong cheo phu la: " << min << endl;
}