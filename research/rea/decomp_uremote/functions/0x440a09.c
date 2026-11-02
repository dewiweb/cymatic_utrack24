// rea decompile_all
// name: FUN_00440a09
// address: 0x440a09
// body: available
// range: 0x440a09-0x440b27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00440a09(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    FUN_0043f95c();
    FUN_00467142();
    FUN_004d076d();
    FUN_004c751a();
    FUN_004d076d();
    FUN_00467248(in_ECX + 0x184);
    FUN_00465303();
    local_8 = 0;
    if (0 < *(int *)(in_ECX + 0x18c)) {
      do {
        FUN_00467165();
        iVar1 = thunk_FUN_0046087d();
        iVar2 = thunk_FUN_0046087d();
        if (iVar2 < iVar1) {
          FUN_00467165();
          FUN_00465317();
        }
        local_8 = local_8 + 1;
      } while (local_8 < *(int *)(in_ECX + 0x18c));
    }
    FUN_00465aae();
    FUN_005b3fb0();
    FUN_0043a9ae();
    FUN_0049f5e8();
    FUN_004c4d7a();
    fVar3 = (float10)FUN_0049fa3d();
    *(float *)(in_ECX + 0x194) = (float)fVar3;
    fVar3 = (float10)FUN_0049fa7b();
    *(float *)(in_ECX + 0x198) = (float)fVar3;
  }
  return;
}

