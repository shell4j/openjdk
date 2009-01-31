#ifdef USE_PRAGMA_IDENT_HDR
#pragma ident "@(#)c1_Defs_i486.hpp	1.22 07/05/05 17:04:12 JVM"
#endif
/*
 * Copyright 2000-2005 Sun Microsystems, Inc.  All Rights Reserved.
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

// native word offsets from memory address (little endian)
enum {
  pd_lo_word_offset_in_bytes = 0,
  pd_hi_word_offset_in_bytes = BytesPerWord
};

// explicit rounding operations are required to implement the strictFP mode
enum {
  pd_strict_fp_requires_explicit_rounding = true
};


// registers
enum {
  pd_nof_cpu_regs_frame_map = 8,  // number of registers used during code emission
  pd_nof_fpu_regs_frame_map = 8,  // number of registers used during code emission
  pd_nof_xmm_regs_frame_map = 8,  // number of registers used during code emission
  pd_nof_caller_save_cpu_regs_frame_map = 6,  // number of registers killed by calls
  pd_nof_caller_save_fpu_regs_frame_map = 8,  // number of registers killed by calls
  pd_nof_caller_save_xmm_regs_frame_map = 8,  // number of registers killed by calls
  
  pd_nof_cpu_regs_reg_alloc = 6,  // number of registers that are visible to register allocator
  pd_nof_fpu_regs_reg_alloc = 6,  // number of registers that are visible to register allocator

  pd_nof_cpu_regs_linearscan = 8, // number of registers visible to linear scan
  pd_nof_fpu_regs_linearscan = 8, // number of registers visible to linear scan
  pd_nof_xmm_regs_linearscan = 8, // number of registers visible to linear scan
  pd_first_cpu_reg = 0,
  pd_last_cpu_reg = 5,
  pd_first_byte_reg = 2,
  pd_last_byte_reg = 5,
  pd_first_fpu_reg = pd_nof_cpu_regs_frame_map,
  pd_last_fpu_reg =  pd_first_fpu_reg + 7,
  pd_first_xmm_reg = pd_nof_cpu_regs_frame_map + pd_nof_fpu_regs_frame_map,
  pd_last_xmm_reg =  pd_first_xmm_reg + 7
};


// encoding of float value in debug info: 
enum {
  pd_float_saved_as_double = true
};
