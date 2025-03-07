/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltheveni <ltheveni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 20:10:20 by ltheveni          #+#    #+#             */
/*   Updated: 2025/03/07 20:31:27 by ltheveni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> void swap(T &a, T &b) {
  T temp;

  temp = a;
  a = b;
  b = temp;
}

template <typename T> T min(T a, T b) {
  if (a < b)
    return a;
  else
    return b;
}

template <typename T> T max(T a, T b) {
  if (a > b)
    return a;
  else
    return b;
}
