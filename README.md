# prim
Native data types for C++ renamed for convience

The fixed-size data types in stdint.h are good, but annoying to type out.
Generally, annoying things don't get used. This project renames those types
so that using fixed-size data types is encouraged.

This defines the following types:
s{8,16,32,64} - signed {8,16,32,64}-bit integers
u{8,16,32,64} - unsigned {8,16,32,64}-bit integers
f{32,64} - {32,64}-bit floating point values

Example:
```cpp
for (u16 n = 0; n < 40000; n++) {
    s32 v = (s32)n * 40000;
    if (n & 0x1) {
        v *= -1;
    }
    f64 f = (f64)n / (f64)v;
    be_cool_with(f);
}
```