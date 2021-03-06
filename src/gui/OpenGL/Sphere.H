/*
 * MipScope <http://mipscope.sourceforge.net>
 * Copyright (C) 2007 Travis Fischer and Tim O'Donnell
 * 
 * Send bugs, features, ideas to
 * Travis Fischer (tfischer@cs.brown.edu) and Tim O'Donnell (tim@cs.brown.edu)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 *
 *
 */

#ifndef __Sphere_H__
#define __Sphere_H__

#include "Shape.H"

#define C_RADIUS   (0.5f)


class Sphere : public Shape
{
public:
   Sphere(int paramX, int paramY);
	virtual ~Sphere();
   
   virtual void getTextureCoord(Vertex *vert, float *u, float *v) const;
   
   // Methods required by pure virtual superclass Shape
   virtual int getShapeType() const;
   virtual void tessellate();
   
protected:
private:
};

#endif //__Sphere_H__

