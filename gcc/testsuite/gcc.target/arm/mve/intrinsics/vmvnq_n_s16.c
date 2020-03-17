/* { dg-do compile  } */
/* { dg-require-effective-target arm_v8_1m_mve_ok } */
/* { dg-add-options arm_v8_1m_mve } */
/* { dg-additional-options "-O2" } */

#include "arm_mve.h"

int16x8_t
foo ()
{
  return vmvnq_n_s16 (1);
}

/* { dg-final { scan-assembler "vmvn.i16"  }  } */
