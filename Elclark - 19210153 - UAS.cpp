#include <iostream>
#include <string>
#include <stack>

using namespace std;

// Menu
//  Main Menu : menu untuk memilih contoh  //
int mainMenu() {
    int choose = 0;
    cout << "= = =" << endl;
    cout << "= Program Contoh Materi Structure Data" << endl;
    cout << "= = =" << endl << endl;

    cout << "1. Stack (Tumpukan)" << endl;
    cout << "2. Queue (Antrian)" << endl;
    cout << "3. Short (Penyortiran)" << endl;
    cout << "4. Search (Pencarian)" << endl;
    cout << "5. Tree" << endl;
    cout << "Silahlan Masukan Pilihan (0 Untuk Keluar) : ";
    cin >> choose;

    cout << endl;

    return choose;
}

//   Stack Menu : Contoh Cara Kerja Stack   //
void stackMenu() {
    system("cls");
    int exec = 222;

    stack <int> cthStack; // inisialisasi stack dengan nama cthStack
    // DI Inisialise diluar while agar tidak ter reinisialate dan valuenya hilang semua

    while (exec != 0) {

        cout << "= = =" << endl;
        cout << "= Contoh Cara Kerja Stack" << endl;
        cout << "= = =" << endl << endl;

        cout << "Petama kita inisialisasi stack kita :" << endl;
        cout << "  stack <int> cthStack;" << endl << endl;

        cout << "Pilih perintah yang ingin di jalankan :" << endl;
        cout << "  (1) cthStack.push()" << endl; 
        cout << "  (2) cthStack.size()" << endl; 
        cout << "  (3) cthStack.top()" << endl; 
        cout << "  (4) cthStack.pop()" << endl; 
        cout << "  (5) Tampilkan Isi Stack (Akan Mengformat Value cthStack)" << endl; 
        cout << "  (0 untuk Kembali) : "; 
        cin >> exec;
        cout << endl << endl;

        if (exec == 1) { // jika nilain exec 1 maka jalankan cthStack.push()
            system("cls");

            int val;

            cout << "cthStack.push(";
            cin >> val;

            system("cls");
            cout << "cthStack.push(" << val << ");" << endl;
            cthStack.push(val);

            cout << "Dengan menjalankan perintah cthStack.push(" << val << "); anda menambahkan nilai " << val << " ke cthStack" << endl;
            cout << endl << "(0) Kembali : ";

            int back = 222;
            cin >> back;

            while (back != 0) {
                system("cls");
            }

        } else if (exec == 2) { // jika nilain exec 2 maka jalankan cthStack.size()
            system("cls");

            int size = cthStack.size();
            cout << size << " adalah angka yang di return oleh 'cthStack.size();' artinya cthStack memiliki ukuran sebesar " << size << endl;
            cout << endl << "(0) Kembali : ";

            int back = 222;
            cin >> back;

            while (back != 0) {
                system("cls");
            }
        } else if (exec == 3) { // jika nilain exec 3 maka jalankan cthStack.top();
            system("cls");

            int top = cthStack.top();
            cout << top << " adalah angka yang di return oleh 'cthStack.top();' artinya " << top << " adalah angka paling atas dalam stack" << endl;
            cout << endl << "(0) Kembali : ";

            int back = 222;
            cin >> back;

            while (back != 0) {
                system("cls");
            }
        } else if (exec == 4) { // jika nilain exec 4 maka jalankan cthStack.pop();
            system("cls");

            cout << "dengan menjalankan 'cthStack.pop();' maka anda menghapus angka paling depan yaitu " << cthStack.top() << endl;
            cout << endl << "(0) Kembali : ";
            cthStack.pop();

            int back = 222;
            cin >> back;

            while (back != 0) {
                system("cls");
            }
        } else if (exec == 5) {
            system("cls");
            
            cout << "  cthStack :"; 
            if (cthStack.empty()) {
                cout << " (Masih Kosong Silahkan Jalankan 'cthStack.push()' untuk menambahkan)"; 
            }
            
            while (!cthStack.empty()) {  // sebelum cthStack kosong perintah akan di jalankan terus menerus hingga cthStack kosong
                cout << " " << cthStack.top(); // perintah ini akan me return value paling atas dari cthStack
                cthStack.pop(); // menghapus value paling atas dari cthStack
            }

            cout << endl << "(0) Kembali : ";

            int back = 222;
            cin >> back;

            while (back != 0) {
                system("cls");
            }
        }
    }
}

//   Queue Menu : Contoh Cara Kerja Queue   //
void queueMenu() {
    

}

//   Short Menu : Contoh Cara Kerja Short   //
void shortMenu() {

}

//   Search Menu : Contoh Cara Kerja Search   //
void searchMenu() {

}

int main() {
    int exec = 222; // insialisasi nilai exec dengan 222 agar tidak conflic
    while (exec != 0) { // selama nilai exec bukan 0 program akan dijalankan lagi
        if (exec == 1) { // jika nilain exec 1 maka jalankan stackMenu();
            stackMenu();
        } else if (exec == 2) { // jika nilain exec 2 maka jalankan queueMenu();
            queueMenu();
        } else if (exec == 3) { // jika nilain exec 3 maka jalankan shortMenu();
            shortMenu();
        } else if (exec == 4) { // jika nilain exec 4 maka jalankan searchMenu();
            searchMenu();
        }

        system("cls");

        exec = mainMenu();
    }

    cout << endl << endl << "Terima Kasih telah menggunkan program ini :)";
    return 0;
}