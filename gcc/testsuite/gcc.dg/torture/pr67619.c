/* { dg-do compile } */

void
foo ()
{
  unsigned long l;
  void *p = 0; 

  __builtin_unwind_init ();
  l = 0; 
  __builtin_eh_return (l, p);
}
