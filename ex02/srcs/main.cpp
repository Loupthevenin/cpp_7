/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:40:42 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/09 10:47:38 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int main(void) {
  try {
    Array<int> a(5);

    unsigned int i = 0;
    while (i < a.size()) {
      a[i] = 10;
      i++;
    }
    i = 0;
    while (i < a.size()) {
      std::cout << a[i] << std::endl;
      i++;
    }

    Array<int> b = a;
    std::cout << "size b: " << b.size() << std::endl;
    b[0] = 999;
    std::cout << "elem a[0]: " << a[0] << std::endl;
    std::cout << "elem b[0]: " << b[0] << std::endl;

    Array<std::string> c(3);
    c[0] = "Hello";
    c[1] = "world";
    c[2] = "!";
    i = 0;
    while (i < 3) {
      std::cout << c[i] << std::endl;
      i++;
    }

    Array<std::string> tmp(2);
    tmp[0] = "a";
    tmp[1] = "b";
    const Array<std::string> d = tmp;
    std::cout << d[0] << std::endl;
    std::cout << d[1] << std::endl;
    std::cout << b[5] << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
  return 0;
}
