#include "thuvien.h"

// I. Nhập xuất ma trận

void nhap_so_luong_ma_tran(int &n, int &m){
    do{
        cout << "Nhap so luong hang: "; 
        cin >> n;
        cout << "Nhap so luong cot: ";
        cin >> m;
    } while(n <= 0 || m <= 0 || n > SLPT || m > SLPT);
}

void nhap_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Nhap phan tu a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> a[i][j];
        }
    }
}

void nhap_ma_tran_so_thuc(float b[][SLPT], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Nhap phan tu a[" << i + 1 << "][" << j + 1 << "]: ";
            cin >> b[i][j];
        }
    }
}

void xuat_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    cout << "Ma tran so nguyen gom: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void liet_ke_so_chan_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    cout << "Cac so chan trong ma tran la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] % 2 == 0){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

// hàm kiểm tra số chính phương 
bool kiem_tra_scp(int n){
    if(n < 1) return false;
    for(int i = 1; i < n; i++){
        if(i * i == n) return true;
    }
    return false;
}

void in_ra_scp_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    cout << "Cac so chinh phuong trong ma tran la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_scp(a[i][j])){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void liet_ke_so_chia_het_cho_3_va_5(int a[][SLPT], int n, int m){
    cout << "Cac so chia het cho 3 va 5 la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] % 3 == 0 && a[i][j] % 5 == 0){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

void in_ra_cac_so_boi_cua_7(int a[][SLPT], int n, int m){
    cout << "Cac so la boi cua 7 la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] % 7 == 0){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

// hàm kiểm tra số nguyên tố 
bool kiem_tra_snt(int n){
    if(n < 2) return false;
    for(int i = 2; i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

void liet_ke_snt_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    cout << "Cac so nguyen to la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_snt(a[i][j])){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

// hàm kiểm tra số hoàn hảo 
bool kiem_tra_shh(int n){
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0) sum += i;
    }
    if(sum == n) return true;
    else return false;
}

void liet_ke_shh_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    cout << "Cac so hoan hao la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_shh(a[i][j])){
                cout << a[i][j] << " ";
            }
        }
    }
    cout << endl;
}

// II. ĐẶT LÍNH CANH

void tim_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int max = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    cout << "Gia tri lon nhat trong mang la: " << max << endl;
}

void tim_min_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int min = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] < min){
                min = a[i][j];
            }
        }
    }
    cout << "Gia tri nho nhat trong mang la: " << min << endl;
}

void tim_duong_dau_tien_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > 0){
                cout << "So duong dau tien trong mang la: " << a[i][j] << endl;
                return;
            }
        }
    }
}

void tim_shh_dau_tien_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(kiem_tra_shh(a[i][j])){
                cout << "So hoan hao dau tien trong mang la: " << a[i][j] << endl;
                return;
            }
        }
    }
}

int tim_vi_tri_pt_chan_dau_tien_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] % 2 == 0){
                return i, j;
            }
        }
    }
}

void tim_gt_am_lon_nhat_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int max_am = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] < 0 && a[i][j] > max_am){
                max_am = a[i][j];
            }
        }
    }
    cout << "Gia tri am lon nhat trong mang la: " << max_am << endl; 
}

void liet_ke_cac_dong_chua_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int max = a[0][0];
    cout << "Cac dong chua gia tri lon nhat la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == max){
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

// void tim_max_tren_1_dong_ma_tran_so_nguyen(int a[][SLPT], int n, int m){}
//void tim_min_tren_1_cot_ma_tran_so_nguyen(int a[][SLPT], int n, int m){}

void tim_snt_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int snt_max = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_snt(a[i][j]) && a[i][j] > snt_max){
                snt_max = a[i][j];
            }
        }
    }
    cout << "So nguyen to lon nhat trong ma tran la: " << snt_max << endl;
}

void tim_shh_min_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int shh_min = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_shh(a[i][j]) && a[i][j] < shh_min){
                shh_min = a[i][j];
            }
        }
    }
    cout << "So hoan hao nho nhat trong ma tran la: " << shh_min << endl;
}

void liet_ke_cac_dong_sum_max_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int sum_max = 0;
    int max = 0;
    cout << "Cac dong co tong lon nhat la: "; 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum_max += a[i][j];
        }
        if(sum_max > max){
            max = sum_max;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            sum_max += a[i][j];
        }
        if(sum_max == max){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

void liet_ke_dong_co_nhieu_snt_ma_tran_so_nguyen(int a[][SLPT], int n, int m){
    int dem_snt = 0;
    int max = 0;
    cout << "Cac dong co nhieu so nguyen to nhat la: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_snt(a[i][j])){
                dem_snt++;
            }
        }
        if(dem_snt > max){
            max = dem_snt;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(kiem_tra_snt(a[i][j])){
                dem_snt++;
            }
        }
        if(dem_snt == max){
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}














 














