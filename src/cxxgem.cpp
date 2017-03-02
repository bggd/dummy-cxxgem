#include <mruby.h>
#include <mruby/array.h>


extern "C" void mrb_dummy_cxxgem_gem_init(mrb_state* mrb)
{

  mrb_value ary = mrb_ary_new_capa(mrb, 4);

  mrb_funcall(mrb, ary, "size", 0, NULL);

  mrb_class_get(mrb, "Hash");

}

extern "C" void mrb_dummy_cxxgem_gem_final(mrb_state* mrb)
{
}
