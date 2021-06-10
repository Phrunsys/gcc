// https://gcc.gnu.org/bugzilla/show_bug.cgi?id=100967
// { dg-do compile }

module object; // { dg-error "class object.TypeInfo missing or corrupt object.d" }

extern(C) int main()
{
    int[int] aa;
    aa[0] = 1;  // { dg-error ".object.TypeInfo. could not be found, but is implicitly used" }
    return 0;
}
