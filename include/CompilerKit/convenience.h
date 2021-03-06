/**
 * Copyright (C) 2012 The CompilerKit contributors.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef INCLUDE_CompilerKit_convenience_h__
#define INCLUDE_CompilerKit_convenience_h__

GObject* compilerkit_character_class_new(gunichar, gunichar);
gboolean compilerkit_character_is_alpha_numeric(gunichar);
GObject* compilerkit_alpha_numeric_character_class_new(gunichar, gunichar);
GObject *compilerkit_positive_closure_new (GObject *);

#endif
