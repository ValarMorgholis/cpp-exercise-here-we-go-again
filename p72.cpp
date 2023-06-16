#include <iostream>
#include <algorithm>
using namespace std;

struct Product
{
    int code;
    double price;
    int quantity;
};

void printHighestPriceProduct(const Product products[], int size)
{
    int maxIndex = 0;
    double maxPrice = products[0].price;

    for (int i = 1; i < size; i++)
    {
        if (products[i].price > maxPrice)
        {
            maxPrice = products[i].price;
            maxIndex = i;
        }
    }

    cout << "Product with the highest price:" << endl;
    cout << "Code: " << products[maxIndex].code << endl;
    cout << "Price: " << products[maxIndex].price << endl;
    cout << "Quantity: " << products[maxIndex].quantity << endl;
    cout << endl;
}

bool compareByPrice(const Product &a, const Product &b)
{
    return a.price < b.price;
}

void sortProductsByPrice(Product products[], int size)
{
    sort(products, products + size, compareByPrice);

    cout << "Products sorted by price in ascending order:" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Code: " << products[i].code << endl;
        cout << "Price: " << products[i].price << endl;
        cout << "Quantity: " << products[i].quantity << endl;
        cout << endl;
    }
}

double calculateTotalValue(const Product products[], int size)
{
    double totalValue = 0;

    for (int i = 0; i < size; i++)
    {
        double productValue = products[i].price * products[i].quantity;
        totalValue += productValue;
    }

    return totalValue;
}

int main()
{
    const int size = 20;
    Product products[size];

    cout << "Enter product details:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Product " << i + 1 << ":" << endl;

        cout << "Code: ";
        cin >> products[i].code;

        cout << "Price: ";
        cin >> products[i].price;

        cout << "Quantity: ";
        cin >> products[i].quantity;
    }

    printHighestPriceProduct(products, size);

    sortProductsByPrice(products, size);

    double totalValue = calculateTotalValue(products, size);
    cout << "Total value of goods: " << totalValue << endl;

    return 0;
}
