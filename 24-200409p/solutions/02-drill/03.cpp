#include <algorithm>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    int a[5] = {2, -4, 3, 5, 1};
    // Увеличьте все элементы массива на единицу и выведите на экран.
    for_each(begin(a), end(a), [](int &x) { x += 1; });
    copy(begin(a), end(a), ostream_iterator<int>(cout, "\n"));
}
