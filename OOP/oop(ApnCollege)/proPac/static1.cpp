// **Q3: Static Members: Online Store Product Details**

// **Class: Product**
// **Attributes:**
// - `productName` (string)
// - `purchaseDate` (string)
// - `quantity` (int)
// - `totalPrice` (double)
// - `totalProductCount` (int): Use static data member.

// **Methods:**
// - **Constructor:** Initializes the product details and updates the `totalProductCount`.
// - `displayProductInfo()`: Displays all the details of the purchase.
// - **static `getTotalProducts()`:** Returns the total number of purchases made.

// **Instructions:**
// 1. Create multiple `Product` objects.
// 2. Call the `displayProductInfo()` method to display purchase details for each object.
// 3. Use the static `getTotalProducts()` method to show the total number of purchases across all objects.
#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string ProductName;
    string productDate;
    int Quantity;
    double TotalPrice;

public:
    static int totalProductCount;

    Product(string pN, string pD, int Quant, int price)
    {
        ProductName = pN;
        productDate = pD;
        Quantity = Quant;
        TotalPrice = price;

        totalProductCount++;
    }

    void DisplayProduct()
    {
        cout << "Product name: " << ProductName << endl;
        cout << "Product Date: " << productDate << endl;
        cout << "Product Quantity: " << Quantity << endl;
        cout << "Total price: " << TotalPrice << endl;
    }

    static int getTotalProducts()
    {
        return totalProductCount;
    }
};
int Product::totalProductCount = 0;
int main()
{
    Product p1(" shampoo", "12-4-2045", 3, 1000);
    Product p2(" soup", "12-3-2045", 1, 1020);
    Product p3(" tooth paste", "12-5-2045", 2, 200);
    cout << Product::getTotalProducts();
    return 0;
}