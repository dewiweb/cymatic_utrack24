// rea decompile_all
// name: FUN_00425eb8
// address: 0x425eb8
// body: available
// range: 0x425eb8-0x425fb1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00425eb8(int param_1,uint param_2,undefined4 *param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(ushort *)(param_1 + 0x108) <= param_2) {
    return 0x10;
  }
  iVar2 = *(int *)(param_1 + 0x218);
  if (iVar2 == 0) {
    return 7;
  }
  uVar3 = (**(code **)(iVar2 + 0x10))(0);
  *param_3 = uVar3;
  iVar4 = *(int *)(param_1 + 0x1d4);
  if (iVar4 == 0x10000) {
    if (0x101 < param_2) {
      return 0;
    }
  }
  else if (iVar4 == 0x20000) {
    if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_00425d79(), iVar4 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x278) <= param_2) {
      return 0;
    }
    uVar1 = *(ushort *)(*(int *)(param_1 + 0x27c) + param_2 * 2);
    param_2 = (uint)uVar1;
    if (0x101 < uVar1) {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x280) + -0x408 + param_2 * 4);
      goto LAB_00425fa9;
    }
  }
  else {
    if (iVar4 != 0x28000) {
      return 0;
    }
    if ((*(char *)(param_1 + 0x274) == '\0') && (iVar4 = FUN_00425d79(), iVar4 != 0)) {
      return 0;
    }
    if (*(ushort *)(param_1 + 0x278) <= param_2) {
      return 0;
    }
    param_2 = param_2 + (int)*(char *)(*(int *)(param_1 + 0x27c) + param_2);
  }
  uVar3 = (**(code **)(iVar2 + 0x10))(param_2);
LAB_00425fa9:
  *param_3 = uVar3;
  return 0;
}

