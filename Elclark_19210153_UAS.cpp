#include <iostream>
#include <string>
#include <stack>
#include <queue>

/////////////////////////////////////////////////////
//                                                 //
//      Made With Love By Elclark And Team ;)      //
//              Coded On C++ Win32                 //
//            Only Working On Windows              //
//                                                 //
/////////////////////////////////////////////////////

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
    int back = 222;

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
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int val;

                cout << "cthStack.push(";
                cin >> val;

                system("cls");
                cout << "cthStack.push(" << val << ");" << endl;
                cthStack.push(val);

                cout << "Dengan menjalankan perintah cthStack.push(" << val << "); anda menambahkan nilai " << val << " ke cthStack" << endl;
                cout << endl << "(0) Kembali : ";
                cin >> back;

                system("cls");
            }
            back = 222;
        } else if (exec == 2) { // jika nilain exec 2 maka jalankan cthStack.size()
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int size = cthStack.size();
                cout << size << " adalah angka yang di return oleh 'cthStack.size();' artinya cthStack memiliki ukuran sebesar " << size << endl;
                cout << endl << "(0) Kembali : ";

                cin >> back;

                system("cls");
            }
            back = 222;
        } else if (exec == 3) { // jika nilain exec 3 maka jalankan cthStack.top();
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int top = cthStack.top();
                cout << top << " adalah angka yang di return oleh 'cthStack.top();' artinya " << top << " adalah angka paling atas dalam stack" << endl;
                cout << endl << "(0) Kembali : ";

                cin >> back;

                system("cls");
            }
        } else if (exec == 4) { // jika nilain exec 4 maka jalankan cthStack.pop();
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int top = cthStack.top();
                cout << "dengan menjalankan 'cthStack.pop();' maka anda menghapus angka paling depan yaitu " << top << endl;
                cthStack.pop();
                cout << endl << "(0) Kembali : ";
                cin >> back;

                system("cls");
            }
            back = 222;
        } else if (exec == 5) { 
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                cout << "  cthStack :"; 
                if (cthStack.empty()) {
                    cout << " (Masih Kosong Silahkan Jalankan 'cthStack.push()' untuk menambahkan)"; 
                }
                
                while (!cthStack.empty()) {  // sebelum cthStack kosong perintah akan di jalankan terus menerus hingga cthStack kosong
                    cout << " " << cthStack.top(); // perintah ini akan me return value paling atas dari cthStack
                    cthStack.pop(); // menghapus value paling atas dari cthStack
                }

                cout << endl << "(0) Kembali : ";
                cin >> back;

                system("cls");
            }
            back = 222;
        }
    }
}

//   Queue Menu : Contoh Cara Kerja Queue   //
void queueMenu() {
    system("cls");
    int exec = 222;
    int back = 222;

    queue <int> cthQueue; // inisialisasi stack dengan nama cthStack
    // DI Inisialise diluar while agar tidak ter reinisialate dan valuenya hilang semua

    while (exec != 0) {

        cout << "= = =" << endl;
        cout << "= Contoh Cara Kerja Queue" << endl;
        cout << "= = =" << endl << endl;

        cout << "Petama kita inisialisasi Queue kita :" << endl;
        cout << "  queue <int> cthQueue;" << endl << endl;

        cout << "Pilih perintah yang ingin di jalankan :" << endl;
        cout << "  (1) cthQueue.push()" << endl; 
        cout << "  (2) cthQueue.size()" << endl; 
        cout << "  (3) cthQueue.front()" << endl; 
        cout << "  (4) cthQueue.back()" << endl; 
        cout << "  (5) cthQueue.pop()" << endl; 
        cout << "  (6) Tampilkan Isi Stack (Akan Mengformat Value cthQueue)" << endl; 
        cout << "  (0 untuk Kembali) : "; 
        cin >> exec;
        cout << endl << endl;

        if (exec == 1) { // jika nilain exec 1 maka jalankan cthQueue.push()
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int val;

                cout << "cthQueue.push(";
                cin >> val;

                system("cls");
                cout << "cthQueue.push(" << val << ");" << endl;
                cthQueue.push(val);

                cout << "Dengan menjalankan perintah cthQueue.push(" << val << "); anda menambahkan nilai " << val << " ke cthQueue" << endl;
                cout << endl << "(0) Kembali : ";

                cin >> back;

                system("cls");
            }
            back = 222;
        } else if (exec == 2) { // jika nilain exec 2 maka jalankan cthQueue.size()
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int size = cthQueue.size();
                cout << size << " adalah angka yang di return oleh 'cthQueue.size();' artinya cthQueue memiliki ukuran sebesar " << size << endl;
                cout << endl << "(0) Kembali : ";

                cin >> back;
     
                system("cls");
            }
            back = 222;
        } else if (exec == 3) { // jika nilain exec 3 maka jalankan cthQueue.front();
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int top = cthQueue.front();
                cout << top << " adalah angka yang di return oleh 'cthQueue.front();' artinya " << top << " adalah angka paling atas dalam stack" << endl;
                cout << endl << "(0) Kembali : ";

                cin >> back;

                system("cls");
            }
            int back = 222;
        } else if (exec == 4) { // jika nilain exec 4 maka jalankan cthQueue.back();
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                int top = cthQueue.back();
                cout << top << " adalah angka yang di return oleh 'cthQueue.back();' artinya " << top << " adalah angka paling atas dalam stack" << endl;
                cout << endl << "(0) Kembali : ";

                cin >> back;
                system("cls");
            }
            int back = 222;
        } else if (exec == 5) { // jika nilain exec 5 maka jalankan cthQueue.pop();
            system("cls");
            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                cout << "dengan menjalankan 'cthQueue.pop();' maka anda menghapus angka paling depan yaitu " << cthQueue.front() << endl;
                cout << endl << "(0) Kembali : ";
                cthQueue.pop();

                cin >> back;

                system("cls");
            }

            back = 222;

        } else if (exec == 6) {
            system("cls");

            while (back != 0) { // selama back bukan 0 maka perintah akan di ulang
                cout << "  cthQueue :"; 
                if (cthQueue.empty()) {
                    cout << " (Masih Kosong Silahkan Jalankan 'cthQueue.push()' untuk menambahkan)"; 
                }
                
                while (!cthQueue.empty()) {  // sebelum cthQueue kosong perintah akan di jalankan terus menerus hingga cthQueue kosong
                    cout << " " << cthQueue.front(); // perintah ini akan me return value paling atas dari cthQueue
                    cthQueue.pop(); // menghapus value paling atas dari cthQueue
                }

                cout << endl << "(0) Kembali : ";
                cin >> back;
            
                system("cls");
            }

            back = 222;
        }
    }
}

//   Short Menu : Contoh Cara Kerja Short   //
void shortMenu() {
    system("cls");
    int back = 222;
    while (back != 0) {
        cout << "Work In Progress" << endl ;
        cout << endl << "(0) Kembali : ";

        cin >> back;
        system("cls");
    }
}

//   Search Menu : Contoh Cara Kerja Search   //
void searchMenu() {
    system("cls");
    int back = 222;
    while (back != 0) {
        cout << "Work In Progress" << endl ;
        cout << endl << "(0) Kembali : ";

        cin >> back;
        system("cls");
    }
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