/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:16:40 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/19 16:06:00 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {

	public:
		Point(void);
		Point(const float one, const float two);
		Point(const Point& rhs);
		Point& operator=(const Point& rhs);
		~Point(void);
		const Fixed getX(void) const;
		const Fixed getY(void) const;

	private:
		const Fixed _x;
		const Fixed _y;

};

bool bsp (Point const a, Point const b, Point const c, Point const point);




#endif
