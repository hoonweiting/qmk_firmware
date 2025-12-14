// Copyright 2022 Alexander Lozyuk (@keyzog)
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

// Encoder support
// Left half
#define ENCODERS_PAD_A { D0 }
#define ENCODERS_PAD_B { D1 }
// Right half
#define ENCODERS_PAD_A_RIGHT { D1 }
#define ENCODERS_PAD_B_RIGHT { D0 }

// Sea-Picro does not need SPLIT_USB_DETECT
#undef SPLIT_USB_DETECT
