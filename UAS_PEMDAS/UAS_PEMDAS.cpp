#include <iostream>
#include <string>
using namespace std;

class MasukUniversitas {
    //isi acces modifier disini
public:
    int uangPendaftaran;
    // isi daftar variable yang dibutuhkan di bawah ini
    int uangSemesterPertama;
    int uangBangunan;
    string TotalBiaya;

    void setuangPendaftaran(int uangPendaftaran, string value)
    {
        uangPendaftaran;
    }
    string getuangPendaftaran(int uangPendaftaran)
    {
        uangPendaftaran;
    }
    void setuangSemesterPertama(int uanguangSemesterPertama, string value)
    {
        uangSemesterPertama;
    }
    string getuangSemesterPertama(int uangSemesterPertama)
    {
        uangSemesterPertama;
    }
    void setuangBangunan(int uangBangunan, string value)
    {
        uangBangunan;
    }
    string getuangBangunan(int uangBangunan)
    {
        uangBangunan;
    }
    void setTotalBiaya(string TotalBiaya, string value)
    {
        TotalBiaya;
    }
    string getTotalBiaya(string TotalBiaya)
    {
        TotalBiaya;
    }

public:
    MasukUniversitas() {
        uangPendaftaran = 100000;
        // isi nilai default variable yang dibutuhkan di bawah ini
        int namaJalurMasuk;
        int tampilkanTotalBiaya;
        string hitungTotalBiaya;
    }
    virtual void namaJalurMasuk() { 
        // isi disini dengan fungsi virtual yang dibutuhkan
        cout << "1. SNBT";
        cout << "2. SNBP";
        cout << "keluar";
        cout << "Pilih: ";
        cout << endl;

        return;
    }
    
    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
    
    void setuangSemesterPertama(int uanguangSemesterPertama, string value)
    {
        uangSemesterPertama;
    }
    string getuangSemesterPertama(int uangSemesterPertama)
    {
        uangSemesterPertama;
    }
    void setuangBangunan(int uangBangunan, string value)
    {
        uangBangunan;
    }
    string getuangBangunan(int uangBangunan)
    {
        uangBangunan;
    }
    void setTotalBiaya(string TotalBiaya, string value)
    {
        TotalBiaya;
    }
    string getTotalBiaya(string TotalBiaya)
    {
        TotalBiaya;
    }
};

class SNBT : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT
public:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    string TotalBiaya = uangPendaftaran + uangSemesterPertama + uangBangunan;
    {
        cout << "total Biaya" << (mahal, sedang, murah);
    }

};

class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP
    int uangPendaftaran;
    int uangSemesterPertama;
    string TotalBiaya = uangPendaftaran + uangSemesterPertama;
    {
        cout << "total Biaya" << (mahal, sedang, murah);
    }
};

int main()
{
    class MasukUniversitas;

    MasukUniversitas.setuangPendaftaran(0, "");
    MasukUniversitas.setuangSemesterPertama(1, "");
    MasukUniversitas.setuangBangunan(2, "");
    MasukUniversitas.setTotalBiaya(3, );
   
        
    return;
}
