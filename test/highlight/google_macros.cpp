#include <iostream>

// 1. Test Google Assignment Macros (Expect orange)
ASSIGN_OR_RETURN(auto x, foo());
// ^ function.macro
//               ^ type

CO_ASSIGN_OR_RETURN(auto y, bar());
// ^ function.macro
//                  ^ type

// 2. Test ABSL Flags (Expect orange)
ABSL_FLAG(int, my_flag, 42, "desc");
// ^ function.macro

// 3. Test Abseil Attributes (Expect orange)
void f() ABSL_MUST_USE_RESULT;
//         ^ function.macro

void g() ABSL_EXCLUSIVE_LOCKS_REQUIRED(&mutex_, this->other_mutex_);
//         ^ function.macro

void h() ABSL_DEPRECATED("use bar");
//         ^ function.macro
//                        ^ string
