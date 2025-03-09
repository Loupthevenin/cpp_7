/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 09:25:17 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/09 10:43:07 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdexcept>
#include <string>

template <typename T> class Array {
private:
  T *array;
  unsigned int n;

public:
  Array();
  Array(unsigned int n);
  Array(const Array &other);
  Array &operator=(const Array &other);
  ~Array();

  T &operator[](unsigned int index);

  const T &operator[](unsigned int index) const;

  unsigned int size() const;
};

#include "Array.tpp"
