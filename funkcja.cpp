//demonstruje prostą funkcję
#include <iostream>

using namespace std;

int Add(int x, int y) {
    cout << "Function Add () otrzymała " << x << " oraz" << y << " \n";
    return (x + y);
}

int main() {
    cout << "Jestem w funkcji main()!\n";
    int a, b, c;
    cout << "Wpisz dwie liczby: ";
    cin >> a;
    cin >> b;
    cout << "\nWywołaj funkcje Add()\n";
    c = Add(a, b);

    cout << "\nPonownie w funkcji main(). \n";
    cout << "c zostalo ustawione na " << c;
    cout << "\nOpuszczam program....\n\n";

    return 0;
}
