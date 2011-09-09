/*
 * Copyright (C) 2010 Josh A. Beam
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *   1. Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __DROMEMATH_BOUNDINGSPHERE_H__
#define __DROMEMATH_BOUNDINGSPHERE_H__

#include "PhysicsObject.h"

namespace DromeMath {

class BoundingBox;

class BoundingSphere : public PhysicsObject
{
	protected:
		float m_radius;

	public:
		BoundingSphere(const Vector3 &position = Vector3(), float radius = 1.0f);

		float getRadius() const;
		void setRadius(float value);

		virtual PhysicsObjectType getType() const;
		virtual CollisionInfo collisionCheck(const BoundingSphere *sphere) const;
		virtual CollisionInfo collisionCheck(const BoundingBox *sphere) const;
		virtual CollisionInfo collisionCheck(const PhysicsObject *object) const;
};

} // namespace DromeMath

#endif /* __DROMEMATH_BOUNDINGSPHERE_H__ */
