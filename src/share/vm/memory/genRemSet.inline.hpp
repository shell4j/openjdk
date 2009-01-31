#ifdef USE_PRAGMA_IDENT_HDR
#pragma ident "@(#)genRemSet.inline.hpp	1.10 07/05/05 17:05:50 JVM"
#endif
/*
 * Copyright 2001 Sun Microsystems, Inc.  All Rights Reserved.
 * DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
 *
 * This code is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 only, as
 * published by the Free Software Foundation.
 *
 * This code is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * version 2 for more details (a copy is included in the LICENSE file that
 * accompanied this code).
 *
 * You should have received a copy of the GNU General Public License version
 * 2 along with this work; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 * Please contact Sun Microsystems, Inc., 4150 Network Circle, Santa Clara,
 * CA 95054 USA or visit www.sun.com if you need additional information or
 * have any questions.
 *  
 */

// Inline functions of GenRemSet, which de-virtualize this
// performance-critical call when when the rem set is the most common
// card-table kind.

void GenRemSet::write_ref_field_gc(oop* field, oop new_val) {
  if (kind() == CardTableModRef) {
    ((CardTableRS*)this)->inline_write_ref_field_gc(field, new_val);
  } else {
    write_ref_field_gc_work(field, new_val);
  }
}
