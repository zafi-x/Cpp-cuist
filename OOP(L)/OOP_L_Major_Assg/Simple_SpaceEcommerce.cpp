#include <iostream> // for using cout and cin
#include <vector>   // for using vectors
#include <string>   // for using strings but not needed in this code

using namespace std;

/* Product class
 This class will store info about thr product like name, quantity, and price.
 It also have methods to reduce the quantity of the product when purchased.
 I have used the oop concepts of encapsulation in this class.
 */
class Product
{
private:
    string productName;
    int quantity;
    double price;

public:
    Product(string n, int q, double p)
    {
        productName = n;
        quantity = q;
        price = p;
    }

    string getName() const { return productName; }
    int getQuantity() const { return quantity; }
    double getPrice() const { return price; }

    void reduceQuantity(int q) { quantity -= q; }

    void display() const
    {
        cout << "Name: " << productName << ", Quantity: " << quantity << ", Price: $" << price << endl;
    }
};

/*  User class
    This class is the Base class which will be later inherited by Admin and Customer class
    It stores users email and password.
    Also have methods to check the password, change the password, and get the email.
    I have used the oop concepts of encapsulation in this class .
    (Also will use iot as a Base class later the code so ig Inheritance concept as well)
*/
class User
{
protected:
    string email;
    string password;

public:
    User(string e, string p)
    {
        email = e;
        password = p;
    }

    string getEmail() const { return email; }

    bool checkPassword(const string &input) const
    {
        return input == password;
    }

    void changePassword()
    {
        string current, newPass;
        cout << "Current password: ";
        cin >> current;
        if (current == password)
        {
            cout << "New password: ";
            cin >> newPass;
            password = newPass;
            cout << "Password changed.\n";
        }
        else
        {
            cout << "Wrong password.\n";
        }
    }
};

/*
Admin class
This class is the Child of User class ( inherits from User class. )
And  has PowerFull methods to add products and view products.
It uses the concepts encapsulation to manage product information.
Vector<Product> products is used to store the list of products because it is dynamic and can grow as needed.
Vectors have built in methods to add, remove, and access elements easily like emplace_back.
***cin.ignore();*** is used to clear the input buffer before taking string input.
***getline(cin, name);*** is used to take string input with spaces.
*/
class Admin : public User
{
public:
    Admin(string e, string p) : User(e, p) {}

    void addProduct(vector<Product> &products)
    {
        string name;
        int quantity;
        double price;

        cout << "Product name: ";
        cin.ignore(); // Clear input buffer
        getline(cin, name);

        for (const auto &p : products)
        {
            if (p.getName() == name)
            {
                cout << "Product already exists.\n";
                return;
            }
        }

        cout << "Quantity: ";
        cin >> quantity;
        cout << "Price: ";
        cin >> price;

        products.emplace_back(name, quantity, price);
        cout << "Product added.\n";
    }

    void viewProducts(const vector<Product> &products) const
    {
        if (products.empty())
        {
            cout << "No products available.\n";
        }
        else
        {
            for (const auto &p : products)
                p.display();
        }
    }
};

/* Customer class
    This class is the Child of User class ( inherits from User class. )
    It has some really power full  methods to *view products*(if no products are available, it will show a message),
   *searchProduct* to search for a product by name, *addToCart* to add products to the cart, and *purchase* to view the cart summary,
    and confirm the purchase.
    It uses the concepts encapsulation to manage customer information and cart. (also the inheritance concept)
      vector<Product> cart; is used to store the products added to the cart by the customer.
    The cart is a vector of Product objects, allowing customers to add multiple products.
*/
class Customer : public User
{
private:
    vector<Product> cart;

public:
    Customer(string e, string p) : User(e, p) {}

    void viewProducts(const vector<Product> &products) const
    {
        if (products.empty())
        {
            cout << "No products available.\n";
        }
        else
        {
            for (const auto &p : products)
                p.display();
        }
    }

    void searchProduct(const vector<Product> &products) const
    {
        string name;
        cin.ignore();
        cout << "Enter name to search: ";
        getline(cin, name);

        for (const auto &p : products)
        {
            if (p.getName() == name)
            {
                p.display();
                return;
            }
        }
        cout << "Product not found.\n";
    }

    void addToCart(const vector<Product> &products)
    {
        string name;
        int qty;
        cin.ignore();
        cout << "Product name: ";
        getline(cin, name);

        for (const auto &p : products)
        {
            if (p.getName() == name)
            {
                cout << "Quantity: ";
                cin >> qty;

                if (qty > 0 && qty <= p.getQuantity())
                {
                    cart.emplace_back(p.getName(), qty, p.getPrice());
                    cout << "Added to cart.\n";
                }
                else
                {
                    cout << "Invalid quantity.\n";
                }
                return;
            }
        }
        cout << "Product not found.\n";
    }

    void purchase(vector<Product> &products)
    {
        if (cart.empty())
        {
            cout << "Cart is empty.\n";
            return;
        }

        double total = 0;
        cout << "\n-- Cart Summary --\n";
        for (const auto &item : cart)
        {
            cout << item.getName() << " x " << item.getQuantity() << " @ $" << item.getPrice() << endl;
            total += item.getQuantity() * item.getPrice();
        }

        cout << "Total: $" << total << endl;
        char confirm;
        cout << "Confirm purchase? (y/n): ";
        cin >> confirm;
        if (tolower(confirm) != 'y')
            return;

        // Update stock
        for (const auto &item : cart)
        {
            for (auto &p : products)
            {
                if (p.getName() == item.getName())
                {
                    p.reduceQuantity(item.getQuantity());
                }
            }
        }

        cout << "\n-- Receipt --\nEmail: " << email << endl;
        for (const auto &p : cart)
        {
            cout << p.getName() << " x " << p.getQuantity() << " = $" << p.getQuantity() * p.getPrice() << endl;
        }
        cout << "Total Paid: $" << total << "\nThank you!\n";
        cart.clear();
    }
};

// Helper function
// to find a customer by email and password

Customer *findCustomer(vector<Customer> &customers, const string &email, const string &password)
{
    for (auto &c : customers)
    {
        if (c.getEmail() == email && c.checkPassword(password))
            return &c;
    }
    return nullptr;
}

int main()
{
    vector<Product> products;   // Vector to store products
    vector<Customer> customers; // Vector to store customers

    // Predefined admin's email and password As mentioned in the Assignment .
    Admin admin("pookiehuzaifa@gmail.com", "16894"); //  pookiehuzaifa@gmail.come is my real email .

    // Main menu loop
    int choice;
    while (true)
    {
        cout << "\n=== Space Ecommerce System ===\n";
        cout << "1. Admin Login\n2. Customer Login\n3. Sign Up\n4. Exit\nChoose: ";
        cin >> choice;

        if (choice == 1) // Admin login
        {
            string email, pass;
            cout << "Admin Email: ";
            cin >> email;
            cout << "Password: ";
            cin >> pass;

            if (email == admin.getEmail() && admin.checkPassword(pass))
            {
                int opt;
                do
                {
                    cout << "\n-- Admin Menu --\n1. View Products\n2. Add Product\n3. Change Password\n4. Logout\nChoose: ";
                    cin >> opt;
                    switch (opt)
                    {
                    case 1:
                        admin.viewProducts(products);
                        break;
                    case 2:
                        admin.addProduct(products);
                        break;
                    case 3:
                        admin.changePassword();
                        break;
                    case 4:
                        cout << "Admin logged out.\n";
                        break;
                    default:
                        cout << "Invalid.\n";
                    }
                } while (opt != 4);
            }
            else
            {
                cout << "Login failed.\n";
            }
        }
        else if (choice == 2) // Customer login
        {
            string email, pass;
            cout << "Email: ";
            cin >> email;
            cout << "Password: ";
            cin >> pass;

            // Find customer by email and password
            Customer *cust = findCustomer(customers, email, pass);
            if (cust)
            {
                int opt;
                do
                {
                    cout << "\n-- Customer Menu --\n1. View Products\n2. Search\n3. Add to Cart\n4. Purchase\n5. Change Password\n6. Logout\nChoose: ";
                    cin >> opt;
                    switch (opt)
                    {
                    case 1:
                        cust->viewProducts(products);
                        break;
                    case 2:
                        cust->searchProduct(products);
                        break;
                    case 3:
                        cust->addToCart(products);
                        break;
                    case 4:
                        cust->purchase(products);
                        break;
                    case 5:
                        cust->changePassword();
                        break;
                    case 6:
                        cout << "Customer logged out.\n";
                        break;
                    default:
                        cout << "Invalid.\n";
                    }
                } while (opt != 6);
            }
            else
            {
                cout << "Invalid login.\n";
            }
        }
        else if (choice == 3) //  customer Sign up
        {
            string email, pass;
            cout << "Email: ";
            cin >> email;
            cout << "Password: ";
            cin >> pass;

            if (email.find('@') != string::npos && email.find('.') != string::npos) // Email validation
            {
                customers.emplace_back(email, pass);
                cout << "Sign-up successful!\n";
            }
            else
            {
                cout << "Invalid email format.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Goodbye!\n";
            break;
        }
        else
        {
            cout << "Invalid option.\n";
        }
    }

    return 0;
}
