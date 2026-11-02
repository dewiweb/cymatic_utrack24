// rea decompile_all
// name: FUN_004c1d73
// address: 0x4c1d73
// body: available
// range: 0x4c1d73-0x4c1e28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c1d73(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d8bda;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_004f5fb6(DAT_00955fd4 ^ (uint)&stack0xffffffd8);
  local_c = 0;
  FUN_004c1613(in_ECX);
  (**(code **)(*in_ECX + 0x4c))();
  cVar1 = FUN_004f5fe9(0);
  if (cVar1 != '\0') {
    (**(code **)(*in_ECX + 0xa4))();
    cVar1 = FUN_004f5fe9(0);
    if (cVar1 != '\0') {
      for (iVar2 = in_ECX[0xc]; -1 < iVar2 + -1; iVar2 = FUN_00440367(iVar2 + -1)) {
        FUN_004c1d73();
        cVar1 = FUN_004f5fce(0);
        if (cVar1 != '\0') break;
      }
    }
  }
  FUN_00474d0f();
  ExceptionList = local_14;
  return;
}

