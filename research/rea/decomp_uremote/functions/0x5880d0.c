// rea decompile_all
// name: FUN_005880d0
// address: 0x5880d0
// body: available
// range: 0x5880d0-0x58822e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005880d0(int *param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_2 - *param_1 < 0x1e) {
    return 0;
  }
  FUN_005813b0(param_1);
  *(undefined2 *)(in_ECX + 0x34) = *(undefined2 *)*param_1;
  *param_1 = *param_1 + 2;
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)*param_1;
  *param_1 = *param_1 + 4;
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)*param_1;
  *param_1 = *param_1 + 4;
  *(undefined1 *)(in_ECX + 0x28) = *(undefined1 *)*param_1;
  *param_1 = *param_1 + 1;
  *(undefined1 *)(in_ECX + 0x36) = *(undefined1 *)*param_1;
  *param_1 = *param_1 + 1;
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_005b13e8(*(undefined4 *)(in_ECX + 0x38));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(short *)(in_ECX + 0x34) != 0) {
    if (param_2 - *param_1 < (int)(uint)*(ushort *)(in_ECX + 0x34)) {
      return 0;
    }
    uVar2 = FUN_005b04d6(*(undefined2 *)(in_ECX + 0x34));
    *(undefined4 *)(in_ECX + 0x38) = uVar2;
    if (*(int *)(in_ECX + 0x38) == 0) {
      return 0;
    }
    uVar1 = *(ushort *)(in_ECX + 0x34);
    _memcpy(*(void **)(in_ECX + 0x38),(void *)*param_1,(uint)uVar1);
    *param_1 = *param_1 + (uint)uVar1;
  }
  return 1;
}

