/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:43:54 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/19 16:43:56 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	get_area(Point const a, Point const b, Point const c);

bool bsp (Point const a, Point const b, Point const c, Point const point) {

	float ABC = get_area(a, b, c);
	float APC = get_area(a, point, c);
	float PBC = get_area(point, b, c);
	float ABP = get_area(a, b, point);

	return ABC == APC + PBC + ABP;
}

float	get_area(Point const a, Point const b, Point const c) {

	float area((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
			+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
			+ c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) / 2);
	if (area < 0)
		area *= -1;
	return area;
}
