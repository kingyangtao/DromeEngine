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

#ifndef __DROMEGFX_TYPES_H__
#define __DROMEGFX_TYPES_H__

namespace DromeGfx {

enum DepthMode {
	DEPTH_MODE_NONE = 0,
	DEPTH_MODE_LESS,
	DEPTH_MODE_LESS_OR_EQUAL
};

enum BlendMode {
	BLEND_MODE_ALPHA = 0,
	BLEND_MODE_ADD,
	BLEND_MODE_MULTIPLY
};

enum CullFace {
	CULL_FACE_NONE,
	CULL_FACE_BACK,
	CULL_FACE_FRONT
};

enum PrimitiveType {
	PRIMITIVE_TYPE_POINTS,
	PRIMITIVE_TYPE_LINES,
	PRIMITIVE_TYPE_TRIANGLES,
	PRIMITIVE_TYPE_TRIANGLE_STRIP,
	PRIMITIVE_TYPE_TRIANGLE_FAN
};

enum ShaderType {
	SHADER_TYPE_VERTEX = 0,
	SHADER_TYPE_FRAGMENT
};

unsigned int primitiveTypeToGL(PrimitiveType type);

} // namespace DromeGfx

#endif /* __DROMEGFX_TYPES_H__ */
