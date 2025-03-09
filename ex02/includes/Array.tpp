/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:25:17 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/09 10:39:45 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T> Array<T>::Array() : array(NULL), n(0) {}

template <typename T> Array<T>::Array(unsigned int n) : n(n) {
  array = new T[n];
}

template <typename T> Array<T>::Array(const Array &other) : n(other.n) {
  array = new T[n];
  unsigned int i = 0;
  while (i < n) {
    array[i] = other.array[i];
    i++;
  }
}

template <typename T> Array<T> &Array<T>::operator=(const Array &other) {
  if (this != &other) {
    delete[] array;
    n = other.n;
    array = new T[n];
    unsigned int i = 0;
    while (i < n) {
      array[i] = other.array[i];
      i++;
    }
  }
  return *this;
}

template <typename T> Array<T>::~Array() { delete[] array; }

template <typename T> T &Array<T>::operator[](unsigned int index) {
  if (index >= n)
    throw std::out_of_range("index out of bounds");
  return array[index];
}

template <typename T> const T &Array<T>::operator[](unsigned int index) const {
  if (index >= n)
    throw std::out_of_range("index out of bounds");
  return array[index];
}

template <typename T> unsigned int Array<T>::size() const { return n; }
