// rea decompile_all
// name: FUN_0042a025
// address: 0x42a025
// body: available
// range: 0x42a025-0x42a141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0042a025(undefined2 *param_1)

{
  undefined2 uVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (in_ECX < 0) {
    in_ECX = -in_ECX;
  }
  if (in_ECX < 0x10000) {
    iVar2 = in_EAX;
    if (in_EAX < 0) {
      iVar2 = -in_EAX;
    }
    if (iVar2 < 0x10000) {
      iVar2 = FUN_00429862(in_EAX << 8);
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar1 = FUN_0040d230(0x4000);
        *param_1 = uVar1;
        uVar3 = FUN_0040d230(0x4000);
        param_1[1] = (short)uVar3;
      }
      goto LAB_0042a13b;
    }
  }
  FUN_00429862();
  iVar2 = FUN_0040d230(0x4000);
  uVar3 = FUN_0040d230(0x4000);
  iVar4 = iVar2 * iVar2 + uVar3 * uVar3;
  bVar5 = iVar2 < 0;
  if (bVar5) {
    iVar2 = -iVar2;
  }
  bVar6 = (int)uVar3 < 0;
  if (bVar6) {
    uVar3 = -uVar3;
  }
  while (iVar4 < 0x10000000) {
    if (iVar2 < (int)uVar3) {
      iVar2 = iVar2 + 1;
    }
    else {
      uVar3 = uVar3 + 1;
    }
    iVar4 = iVar2 * iVar2 + uVar3 * uVar3;
  }
  while (0x10003fff < iVar4) {
    if (iVar2 < (int)uVar3) {
      iVar2 = iVar2 + -1;
    }
    else {
      uVar3 = uVar3 - 1;
    }
    iVar4 = iVar2 * iVar2 + uVar3 * uVar3;
  }
  if (bVar5) {
    iVar2 = -iVar2;
  }
  if (bVar6) {
    uVar3 = -uVar3;
  }
  *param_1 = (short)iVar2;
  param_1[1] = (short)uVar3;
LAB_0042a13b:
  return uVar3 & 0xffffff00;
}

