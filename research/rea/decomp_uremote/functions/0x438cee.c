// rea decompile_all
// name: FUN_00438cee
// address: 0x438cee
// body: available
// range: 0x438cee-0x438df6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00438cee(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  cVar1 = '\0';
  iVar2 = FUN_0040f9ab(param_1,DAT_00955fd4 ^ (uint)&stack0xffffffa0);
  if (iVar2 != 0) {
    iVar2 = FUN_0040ddcc(iVar2,*(undefined4 *)(in_ECX + 0x160));
    if (iVar2 == 0) {
      FUN_0047888f();
      local_c = 0;
      cVar1 = FUN_0043886b(extraout_ECX);
      if (cVar1 != '\0') {
        iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x15c) + 0x54) + 0x28);
        uVar3 = FUN_00477435(*(undefined4 *)(in_ECX + 0x150),-*(float *)(in_ECX + 0x150));
        FUN_0047a42b(uVar3);
        FUN_0049e911(in_ECX,local_38,*(float *)(in_ECX + 0x150) * (float)iVar2);
      }
      FUN_004f7994();
    }
  }
  ExceptionList = local_14;
  return cVar1;
}

