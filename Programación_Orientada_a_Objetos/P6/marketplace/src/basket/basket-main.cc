#include <iostream>
#include <string>
#include "basket.h"
#include "product.h"

void ShowMenu() {
	std::cout << "1. Añadir Producto\n";
	std::cout << "2. Eliminar Producto por Objeto\n";
	std::cout << "3. Eliminar Producto por ID\n";
	std::cout << "4. Vaciar Cesta\n";
	std::cout << "5. Obtener Tamaño\n";
	std::cout << "6. Obtener Total\n";
	std::cout << "7. Obtener IDs de Productos\n";
	std::cout << "8. Obtener Cantidades de Productos\n";
	std::cout << "9. Salir\n";
}

int main() {
	Basket basket;
	int choice;
	std::string id, name, maker, seller;
	float price;

	do {
		ShowMenu();
        	std::cout << "Ingrese su opción: ";
        	std::cin >> choice;

        	switch (choice) {
			case 1:
                		std::cout << "Ingrese el ID del producto: ";
                		std::cin >> id;
                		std::cout << "Ingrese el nombre del producto: ";
                		std::cin >> name;
                		std::cout << "Ingrese el precio del producto: ";
                		std::cin >> price;
                		std::cout << "Ingrese el fabricante del producto: ";
                		std::cin >> maker;
                		std::cout << "Ingrese el vendedor del producto: ";
                		std::cin >> seller;
                	{
                    		Product product(id, name, price, maker, seller);
                    		basket.AddProduct(product);
                	}
                	break;
            		case 2:
                		std::cout << "Ingrese el ID del producto a eliminar: ";
                		std::cin >> id;
                	{
                    		Product product(id);
                    		if (basket.DeleteProduct(product)) {
                        		std::cout << "Producto eliminado.\n";
                    		} 
                    		else {
                        		std::cout << "Producto no encontrado.\n";
                    		}
                	}
                	break;
            		case 3:
                		std::cout << "Ingrese el ID del producto a eliminar: ";
                		std::cin >> id;
                		if (basket.DeleteProduct(id)) {
                    			std::cout << "Producto eliminado.\n";
                		} 
                		else {
                    			std::cout << "Producto no encontrado.\n";
                		}
                	break;
            		case 4:
                		basket.DeleteBasket();
                		std::cout << "Cesta vaciada.\n";
                	break;
            		case 5:
                		std::cout << "Número de productos en la cesta: " << basket.GetSize() << "\n";
                	break;
            		case 6:
                		std::cout << "Costo total de la cesta: " << basket.GetTotal() << "\n";
                	break;
            		case 7: {
                		std::vector<std::string> ids = basket.GetIds();
                		std::cout << "IDs de productos en la cesta: ";
                		for (const auto& id : ids) {
                    			std::cout << id << " ";
                		}
                		std::cout << "\n";
                	break;
            		}
            		case 8: {
                		std::vector<int> quantities = basket.GetQs();
                		std::cout << "Cantidades de productos en la cesta: ";
                		for (const auto& quantity : quantities) {
                    			std::cout << quantity << " ";
                		}
                		std::cout << "\n";
                	break;
            		}
            		case 9:
                		std::cout << "Saliendo...\n";
                	break;
            		default:
                		std::cout << "Opción inválida. Por favor, intente de nuevo.\n";
                	break;
        	}
	} while (choice != 9);

	return 0;
}
