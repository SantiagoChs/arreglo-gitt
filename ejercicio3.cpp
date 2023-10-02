#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int izquierda = 0;
    int derecha = arr.size() - 1;

    while (izquierda <= derecha) {
        int mid = izquierda + (derecha - izquierda) / 2;

        if (arr[mid] == target) {
            return arr[mid];
        } else if (arr[mid] < target) {
            izquierda = mid + 1;
        } else {
            derecha = mid - 1;
        }
    }

    
    return 1;
}

int main() {
    std::vector<int> arr = {2, 4, 6, 8, 10};

    int target1 = 6;
    int result1 = binarySearch(arr, target1);
    std::cout << "Resultado de " << target1 << ": " << result1 << "\n";

    int target2 = 3;  // No está en el arreglo
    int result2 = binarySearch(arr, target2);
    std::cout << "Resultado de " << target2 << ": " << result2 << "\n";

    return 0;
}
