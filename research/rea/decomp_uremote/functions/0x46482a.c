// rea decompile_all
// name: FUN_0046482a
// address: 0x46482a
// body: available
// range: 0x46482a-0x4648df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0046482a(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  char *pcVar3;
  uint uVar4;
  char *local_20;
  uint uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d997f;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_14;
  uVar4 = 0;
  FUN_0046443e(&local_20,0x100,0);
  pcVar3 = local_20;
  local_c = 0;
  cVar1 = (**(code **)(*in_ECX + 0x10))(uVar2);
  *pcVar3 = cVar1;
  while (cVar1 != '\0') {
    uVar4 = uVar4 + 1;
    if (uStack_1c <= uVar4) {
      FUN_004644f3();
      pcVar3 = local_20;
    }
    cVar1 = (**(code **)(*in_ECX + 0x10))();
    pcVar3[uVar4] = cVar1;
  }
  FUN_00466c04();
  FUN_004f7994();
  ExceptionList = local_14;
  return param_1;
}

