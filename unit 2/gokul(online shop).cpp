#include <iostream>
#include <vector>
#include <string>

class OnlineShop {
private:
    std::string shop_name;
    std::vector<std::string> product_catalog;
    std::vector<float> prices;

public:
    OnlineShop(std::string name) : shop_name(name) {}

    void addProduct(std::string productName, float price) {
        product_catalog.push_back(productName);
        prices.push_back(price);
    }

    float searchProduct(std::string productName) {
        for (size_t i = 0; i < product_catalog.size(); ++i) {
            if (product_catalog[i] == productName) {
                return prices[i];
            }
        }
        return -1.0;  // Product not found
    }

    void printStatus() {
        std::cout << "Shop Name: " << shop_name << std::endl;
        std::cout << "Product Catalog:" << std::endl;
        for (size_t i = 0; i < product_catalog.size(); ++i) {
            std::cout << product_catalog[i] << ": $" << prices[i] << std::endl;
        }
    }
};

int main() {
    std::string shopName;
    std::getline(std::cin, shopName);

    int numProducts;
    std::cin >> numProducts;
    std::cin.ignore(); // Consume the newline character left in the input buffer

    OnlineShop shop(shopName);

    for (int i = 0; i < numProducts; ++i) {
        std::string productName;
        float price;
        std::getline(std::cin, productName);
        std::cin >> price;
        std::cin.ignore(); // Consume the newline character left in the input buffer
        shop.addProduct(productName, price);
    }

    std::string searchProductName;
    std::getline(std::cin, searchProductName);

    float foundPrice = shop.searchProduct(searchProductName);

    if (foundPrice >= 0.0) {
        std::cout << static_cast<int>(foundPrice) << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
