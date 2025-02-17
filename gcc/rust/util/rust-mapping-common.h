// Copyright (C) 2020 Free Software Foundation, Inc.

// This file is part of GCC.

// GCC is free software; you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free
// Software Foundation; either version 3, or (at your option) any later
// version.

// GCC is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or
// FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
// for more details.

// You should have received a copy of the GNU General Public License
// along with GCC; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#ifndef RUST_MAPPING_COMMON
#define RUST_MAPPING_COMMON

#include "rust-system.h"

namespace Rust {

// refers to a Crate
typedef uint32_t CrateNum;
// refers to any node in the AST in current Crate
typedef uint32_t NodeId;
// refers to any node in the HIR for the current crate
typedef uint32_t HirId;
// refers to any top-level decl in HIR
typedef uint32_t LocalDefId;
// refers to <Crate><DefId>
typedef uint64_t DefId;

#define DEF_ID_CRATE_MASK 0xFFFFFFFF00000000
#define DEF_ID_LOCAL_DEF_MASK 0x00000000FFFFFFFF

#define UNKNOWN_CREATENUM ((uint32_t) (0))
#define UNKNOWN_NODEID ((uint32_t) (0))
#define UNKNOWN_HIRID ((uint32_t) (0))
#define UNKNOWN_LOCAL_DEFID ((uint32_t) (0))
#define UNKNOWN_DEFID ((uint64_t) (0))

} // namespace Rust

#endif // RUST_MAPPING_COMMON
