/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:34:12 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/07 20:59:13 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstddef>

template <typename T> void iter(T *array, size_t length, void (*func)(T)) {
  size_t i = 0;
  while (i < length) {
    func(array[i]);
    i++;
  }
}
