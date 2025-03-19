/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:53:41 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/19 09:37:01 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"
#include <iostream>

template <typename T> void printElement(const T &elem) {
  std::cout << elem << " ";
}

int main(void) {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  size_t length = sizeof(arr) / sizeof(arr[0]);

  iter(arr, length, printElement<int>);
  std::cout << std::endl;

  double arr_2[] = {3.13, 5.8783, 1.2335};
  size_t length_2 = sizeof(arr_2) / sizeof(arr_2[0]);

  iter(arr_2, length_2, printElement<double>);
  std::cout << std::endl;
  return 0;
}
