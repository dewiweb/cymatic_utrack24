// rea decompile_all
// name: FUN_004648e0
// address: 0x4648e0
// body: available
// range: 0x4648e0-0x4649c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004648e0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  uint uVar3;
  char *pcVar4;
  char *local_28;
  uint uStack_24;
  undefined8 uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d995c;
  local_14 = ExceptionList;
  uVar2 = DAT_00955fd4 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_14;
  uVar3 = 0;
  local_28 = (char *)0x0;
  FUN_0046443e(&local_28,0x100,0);
  pcVar4 = local_28;
  local_c = 0;
  cVar1 = (**(code **)(*in_ECX + 0x10))(uVar2);
  *pcVar4 = cVar1;
  while( true ) {
    if ((cVar1 == '\0') ||
       (uStack_20 = CONCAT44(uStack_20._4_4_,(undefined4)uStack_20), pcVar4[uVar3] == '\n'))
    goto LAB_00464997;
    if (pcVar4[uVar3] == '\r') break;
    uVar3 = uVar3 + 1;
    if (uStack_24 <= uVar3) {
      FUN_004644f3();
      pcVar4 = local_28;
    }
    cVar1 = (**(code **)(*in_ECX + 0x10))();
    pcVar4[uVar3] = cVar1;
  }
  uStack_20 = (**(code **)(*in_ECX + 0x54))();
  cVar1 = (**(code **)(*in_ECX + 0x10))();
  if (cVar1 != '\n') {
    (**(code **)(*in_ECX + 0x58))(uStack_20);
  }
LAB_00464997:
  FUN_00466c04();
  FUN_004f7994();
  ExceptionList = local_14;
  return param_1;
}

