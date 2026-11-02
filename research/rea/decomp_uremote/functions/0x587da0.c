// rea decompile_all
// name: FUN_00587da0
// address: 0x587da0
// body: available
// range: 0x587da0-0x587e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1
FUN_00587da0(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,undefined1 param_7,void *param_8)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_5;
  
  local_5 = 1;
  *(undefined1 *)(in_ECX + 0x28) = param_1;
  *(undefined1 *)(in_ECX + 0x29) = param_2;
  *(undefined1 *)(in_ECX + 0x2a) = param_3;
  *(undefined4 *)(in_ECX + 0x2c) = param_4;
  *(undefined4 *)(in_ECX + 0x30) = param_5;
  *(undefined2 *)(in_ECX + 0x34) = param_6;
  *(undefined1 *)(in_ECX + 0x36) = param_7;
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_005b13e8(*(undefined4 *)(in_ECX + 0x38));
  }
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (*(short *)(in_ECX + 0x34) != 0) {
    uVar1 = FUN_005b04d6(*(undefined2 *)(in_ECX + 0x34));
    *(undefined4 *)(in_ECX + 0x38) = uVar1;
    if (*(int *)(in_ECX + 0x38) == 0) {
      local_5 = 0;
    }
    else {
      _memcpy(*(void **)(in_ECX + 0x38),param_8,(uint)*(ushort *)(in_ECX + 0x34));
    }
  }
  return local_5;
}

