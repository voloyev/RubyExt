#include "ruby.h"

VALUE RubyExt = Qnil;

void Init_rubyext();

VALUE greetings(VALUE self);

void Init_rubyext()
{
        RubyExt = rb_define_module("RubyExt");
        rb_define_method(RubyExt, "greetings", greetings, 0);
}

VALUE greetings(VALUE self)
{
        char x[32] = "Hello, I am ruby extension";
        printf("%s\n", x);
        puts("And I can do some math");
        int number = 2 + 3;

        printf("Here: 2 + 3 = %i\n", number);
        return(0);
}
