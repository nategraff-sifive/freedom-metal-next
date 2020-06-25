/* Copyright 2020 SiFive, Inc */
/* SPDX-License-Identifier: Apache-2.0 */

#ifndef METAL__PLATFORM__RISCV_PLIC0_H
#define METAL__PLATFORM__RISCV_PLIC0_H

{% for riscv_plic0 in riscv_plic0s %}
#define METAL_RISCV_PLIC0_{{ loop.index0 }}_BASE_ADDR {{ '0x%x' % riscv_plic0.regs_by_name["control"] }}
#define METAL_RISCV_PLIC0_{{ loop.index0 }}_RISCV_MAX_PRIORITY {{ riscv_plic0.riscv_max_priority[0] }}
#define METAL_RISCV_PLIC0_{{ loop.index0 }}_RISCV_NDEV {{ riscv_plic0.riscv_ndev[0] }}
{% endfor %}

#define METAL_RISCV_PLIC0
#define METAL_RISCV_PLIC0_PRIORITY_BASE 0UL
#define METAL_RISCV_PLIC0_PENDING_BASE 4096UL
#define METAL_RISCV_PLIC0_ENABLE_BASE 8192UL
#define METAL_RISCV_PLIC0_ENABLE_PER_HART 128UL
#define METAL_RISCV_PLIC0_CONTEXT_BASE 2097152UL
#define METAL_RISCV_PLIC0_CONTEXT_PER_HART 4096UL
#define METAL_RISCV_PLIC0_CONTEXT_THRESHOLD 0UL
#define METAL_RISCV_PLIC0_CONTEXT_CLAIM 4UL

#endif
