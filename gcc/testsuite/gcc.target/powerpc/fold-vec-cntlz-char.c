/* Verify that overloaded built-ins for vec_cntlz with char
   inputs produce the right results.  */

/* { dg-do compile } */
/* { dg-require-effective-target powerpc_vsx_ok } */
/* { dg-options "-maltivec -mvsx -O2" } */
/* { dg-additional-options "-mdejagnu-cpu=power8" { target { ! has_arch_pwr8 } } } */

#include <altivec.h>

vector signed char
testsc_h (vector signed char vsc2)
{
  return vec_cntlz (vsc2);
}

vector unsigned char
testuc_h (vector unsigned char vuc2)
{
  return vec_cntlz (vuc2);
}

/* { dg-final { scan-assembler-times "vclzb" 2 } } */
