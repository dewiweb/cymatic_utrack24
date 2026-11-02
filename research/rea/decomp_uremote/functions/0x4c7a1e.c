// rea decompile_all
// name: FUN_004c7a1e
// address: 0x4c7a1e
// body: available
// range: 0x4c7a1e-0x4c7b1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c7a1e(char param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de774;
  local_14 = ExceptionList;
  if (param_1 == (char)in_ECX[0x35]) {
    return;
  }
  ExceptionList = &local_14;
  FUN_004f5fb6(DAT_00955fd4 ^ (uint)&stack0xffffffc0);
  local_c = 0;
  if (param_1 != '\0') {
    FUN_004c7b1b(param_2);
    cVar1 = FUN_004f5fce(0);
    if (cVar1 != '\0') goto LAB_004c7afd;
  }
  cVar1 = FUN_004bf38c(in_ECX);
  if (cVar1 != param_1) {
    uVar2 = FUN_0046163a();
    local_c._0_1_ = 1;
    FUN_004718fd(uVar2);
    local_c = (uint)local_c._1_3_ << 8;
    FUN_004615f7();
  }
  *(char *)(in_ECX + 0x35) = param_1;
  FUN_004c1613(in_ECX);
  if (param_2 == 0) {
    (**(code **)(*in_ECX + 0xc0))();
  }
  else {
    uVar2 = FUN_004c751d();
    FUN_004c7d9f(uVar2);
    cVar1 = FUN_004f5fce(0);
    if (cVar1 == '\0') {
      FUN_004c7e27();
    }
  }
LAB_004c7afd:
  FUN_00474d0f();
  ExceptionList = local_14;
  return;
}

