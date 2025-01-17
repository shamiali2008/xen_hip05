/*
 * ARM Generic Interrupt Controller v3 definitions
 *
 * Vijaya Kumar K <vijaya.kumar@caviumnetworks.com>
 * Copyright (c) 2014 Cavium Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __ASM_ARM_GIC_V3_DEFS_H__
#define __ASM_ARM_GIC_V3_DEFS_H__

/*
 * Additional registers defined in GIC v3.
 * Common GICD registers are defined in gic.h
 */

#define GICD_STATUSR                 (0x010)
#define GICD_SETSPI_NSR              (0x040)
#define GICD_CLRSPI_NSR              (0x048)
#define GICD_SETSPI_SR               (0x050)
#define GICD_CLRSPI_SR               (0x058)
#define GICD_IROUTER                 (0x6000)
#define GICD_IROUTER31               (0x60F8)
#define GICD_IROUTER32               (0x6100)
#define GICD_IROUTERN                (0x7FF8)
#define GICD_PIDR0                   (0xFFE0)
#define GICD_PIDR1                   (0xFFE4)
#define GICD_PIDR2                   (0xFFE8)
#define GICD_PIDR3                   (0xFFEC)
#define GICD_PIDR4                   (0xFFD0)
#define GICD_PIDR5                   (0xFFD4)
#define GICD_PIDR7                   (0xFFDC)

#define GICC_SRE_EL2_SRE             (1UL << 0)
#define GICC_SRE_EL2_DFB             (1UL << 1)
#define GICC_SRE_EL2_DIB             (1UL << 2)
#define GICC_SRE_EL2_ENEL1           (1UL << 3)

/* Additional bits in GICD_TYPER defined by GICv3 */
#define GICD_TYPE_ID_BITS_SHIFT      (19)
#define GICD_TYPE_ID_BITS_MASK       (0x1f)
#define GICD_TYPE_LPIS               (0x1UL << 17)

#define GICD_TYPER_LPIS_SUPPORTED    (1U << 17)
#define GICD_CTLR_RWP                (1UL << 31)
#define GICD_CTLR_ARE_NS             (1U << 4)
#define GICD_CTLR_ENABLE_G1A         (1U << 1)
#define GICD_CTLR_ENABLE_G1          (1U << 0)
#define GICD_IROUTER_SPI_MODE_ANY    (1UL << 31)

#define GICC_CTLR_EL1_EOImode_drop   (1U << 1)

#define GICR_WAKER_ProcessorSleep    (1U << 1)
#define GICR_WAKER_ChildrenAsleep    (1U << 2)

#define GIC_PIDR2_ARCH_REV_MASK      (0xf0)
#define GICD_PIDR2_ARCH_REV_MASK     GIC_PIDR2_ARCH_REV_MASK
#define GICD_PIDR2_ARCH_GICV3        (0x30)
#define GICD_PIDR2_ARCH_GICV4        (0x40)

#define GICR_PIDR2_ARCH_REV_MASK     GIC_PIDR2_ARCH_REV_MASK
#define GICR_PIDR2_ARCH_GICV3        GICD_PIDR2_ARCH_GICV3
#define GICR_PIDR2_ARCH_GICV4        GICD_PIDR2_ARCH_GICV4

#define GICR_SYNCR_NOT_BUSY          1
/*
 * Implementation defined value JEP106?
 * use physical hw value for now
 */
#define GICV3_GICD_IIDR_VAL          0x34c
#define GICV3_GICR_IIDR_VAL          GICV3_GICD_IIDR_VAL

#define GICR_CTLR                    (0x0000)
#define GICR_IIDR                    (0x0004)
#define GICR_TYPER                   (0x0008)
#define GICR_STATUSR                 (0x0010)
#define GICR_WAKER                   (0x0014)
#define GICR_SETLPIR                 (0x0040)
#define GICR_CLRLPIR                 (0x0048)
#define GICR_PROPBASER               (0x0070)
#define GICR_PENDBASER               (0x0078)
#define GICR_INVLPIR                 (0x00A0)
#define GICR_INVALLR                 (0x00B0)
#define GICR_SYNCR                   (0x00C0)
#define GICR_MOVLPIR                 (0x100)
#define GICR_MOVALLR                 (0x0110)
#define GICR_PIDR0                   GICD_PIDR0
#define GICR_PIDR1                   GICD_PIDR1
#define GICR_PIDR2                   GICD_PIDR2
#define GICR_PIDR3                   GICD_PIDR3
#define GICR_PIDR4                   GICD_PIDR4
#define GICR_PIDR5                   GICD_PIDR5
#define GICR_PIDR7                   GICD_PIDR7

/* GICR for SGI's & PPI's */

#define GICR_IGROUPR0                (0x0080)
#define GICR_IGRPMODR0               (0x0F80)
#define GICR_ISENABLER0              (0x0100)
#define GICR_ICENABLER0              (0x0180)
#define GICR_ISPENDR0                (0x0200)
#define GICR_ICPENDR0                (0x0280)
#define GICR_ISACTIVER0              (0x0300)
#define GICR_ICACTIVER0              (0x0380)
#define GICR_IPRIORITYR0             (0x0400)
#define GICR_IPRIORITYR7             (0x041C)
#define GICR_ICFGR0                  (0x0C00)
#define GICR_ICFGR1                  (0x0C04)
#define GICR_NSACR                   (0x0E00)

#define GICR_CTLR_ENABLE_LPIS        (1UL << 0)
#define GICR_TYPER_CPU_NUMBER(r)     (((r) >> 8) & 0xffff)

#define GICR_PROPBASER_InnerShareable    (1U << 10)
#define GICR_PROPBASER_SHAREABILITY_MASK (3UL << 10)
#define GICR_PROPBASER_nC                (1U << 7)
#define GICR_PROPBASER_WaWb              (5U << 7)
#define GICR_PROPBASER_CACHEABILITY_MASK (7U << 7)
#define GICR_PROPBASER_IDBITS_MASK       (0x1f)
#define GICR_PROPBASER_PA_MASK           (0xfffffffff000UL)
#define GICR_TYPER_PLPIS             (1U << 0)
#define GICR_TYPER_VLPIS             (1U << 1)
#define GICR_TYPER_LAST              (1U << 4)
#define GICR_TYPER_PROCESSOR_SHIFT   (8)

#define GICR_PENDBASER_InnerShareable    (1U << 10)
#define GICR_PENDBASER_SHAREABILITY_MASK (3UL << 10)
#define GICR_PENDBASER_nC                (1U << 7)
#define GICR_PENDBASER_CACHEABILITY_MASK (7U << 7)
#define GICR_PENDBASER_PTZ_MASK          (1UL << 62)

#define DEFAULT_PMR_VALUE            0xff

#define GICH_VMCR_EOI                (1 << 9)
#define GICH_VMCR_VENG1              (1 << 1)

#define GICH_LR_VIRTUAL_MASK         0xffff
#define GICH_LR_VIRTUAL_SHIFT        0
#define GICH_LR_PHYSICAL_MASK        0x3ff
#define GICH_LR_PHYSICAL_SHIFT       32
#define GICH_LR_STATE_MASK           0x3
#define GICH_LR_STATE_SHIFT          62
#define GICH_LR_PRIORITY_MASK        0xff
#define GICH_LR_PRIORITY_SHIFT       48
#define GICH_LR_HW_MASK              0x1
#define GICH_LR_HW_SHIFT             61
#define GICH_LR_GRP_MASK             0x1
#define GICH_LR_GRP_SHIFT            60
#define GICH_LR_MAINTENANCE_IRQ      (1UL<<41)
#define GICH_LR_GRP1                 (1UL<<60)
#define GICH_LR_HW                   (1UL<<61)

#define GICH_VTR_NRLRGS              0x3f
#define GICH_VTR_PRIBITS_MASK        0x7
#define GICH_VTR_PRIBITS_SHIFT       29

#define GICH_VMCR_PRIORITY_MASK      0xff
#define GICH_VMCR_PRIORITY_SHIFT     24

#define ICH_SGI_IRQMODE_SHIFT        40
#define ICH_SGI_IRQMODE_MASK         0x1
#define ICH_SGI_TARGET_OTHERS        1UL
#define ICH_SGI_TARGET_LIST          0
#define ICH_SGI_IRQ_SHIFT            24
#define ICH_SGI_IRQ_MASK             0xf
#define ICH_SGI_TARGETLIST_MASK      0xffff
#define ICH_SGI_AFFx_MASK            0xff
#define ICH_SGI_AFFINITY_LEVEL(x)    (16 * (x))

struct rdist_region {
    paddr_t base;
    paddr_t size;
    void __iomem *map_base;
};

/* Re-distributor per-cpu information */
struct rdist {
    /* CPU Re-distributor address */
    void __iomem *rbase;
    /* CPU LPI pending table */
    void *pend_page;
    /* CPU Re-distributor physical address */
    paddr_t phys_base;
};

/* Common Re-distributor information */
struct rdist_prop {
    /* CPUs LPI configuration table */
    void *prop_page;
    /* Number of ID bits */
    int id_bits;
    /* Flags to store rdist attributes */
    uint64_t flags;
};

DECLARE_PER_CPU(struct rdist, rdist);

void gicv3_eoi_irq(struct irq_desc *irqd);

#endif /* __ASM_ARM_GIC_V3_DEFS_H__ */

/*
 * Local variables:
 * mode: C
 * c-file-style: "BSD"
 * c-basic-offset: 4
 * indent-tabs-mode: nil
 * End:
 */
