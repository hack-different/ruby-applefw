#include "applefw.h"

VALUE rb_mApplefw;

void
Init_applefw(void)
{
  rb_mApplefw = rb_define_module("Applefw");
}
