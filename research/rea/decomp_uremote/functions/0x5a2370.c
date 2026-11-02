// rea decompile_all
// name: FUN_005a2370
// address: 0x5a2370
// body: available
// range: 0x5a2370-0x5a2517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_005a2370(undefined4 param_1,undefined4 *param_2,ushort *param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  switch(param_2) {
  case (undefined4 *)0x1:
    param_2 = in_ECX;
    local_8 = (undefined4 *)*in_ECX;
    break;
  case (undefined4 *)0x2:
    for (local_8 = (undefined4 *)*in_ECX;
        (local_8 != (undefined4 *)0x0 &&
        ((param_2 = (undefined4 *)(uint)*param_3,
         (undefined4 *)(uint)*(ushort *)(local_8 + 0x12) != param_2 ||
         (param_2 = (undefined4 *)(uint)param_3[2],
         (undefined4 *)(uint)*(ushort *)(local_8 + 0x13) != param_2))));
        local_8 = (undefined4 *)local_8[0x1c]) {
    }
    if (local_8 != (undefined4 *)0x0) {
      param_2 = local_8;
      local_8 = (undefined4 *)local_8[0x1c];
    }
    break;
  case (undefined4 *)0x3:
    param_2 = (undefined4 *)*in_ECX;
    for (local_8 = (undefined4 *)*in_ECX;
        (local_8 != (undefined4 *)0x0 &&
        ((*(ushort *)(local_8 + 0x12) != *param_3 ||
         (param_2 = (undefined4 *)(uint)*(ushort *)(local_8 + 0x13),
         param_2 != (undefined4 *)(uint)param_3[2])))); local_8 = (undefined4 *)local_8[0x1c]) {
      local_c = local_8;
      param_2 = local_8;
    }
    if (local_8 != (undefined4 *)0x0) {
      local_8 = local_c;
    }
    break;
  case (undefined4 *)0x4:
    for (param_2 = (undefined4 *)*in_ECX;
        (local_8 = param_2, param_2 != (undefined4 *)0x0 && (local_8 = param_2, param_2[0x1c] != 0))
        ; param_2 = (undefined4 *)param_2[0x1c]) {
    }
    break;
  case (undefined4 *)0x5:
    for (local_8 = (undefined4 *)*in_ECX;
        (param_2 = in_ECX, local_8 != (undefined4 *)0x0 &&
        ((*(ushort *)(local_8 + 0x12) != *param_3 ||
         (param_2 = (undefined4 *)CONCAT22((short)((uint)local_8 >> 0x10),param_3[2]),
         *(ushort *)(local_8 + 0x13) != param_3[2])))); local_8 = (undefined4 *)local_8[0x1c]) {
      in_ECX = local_8;
    }
  }
  if (local_8 == (undefined4 *)0x0) {
    uVar1 = (uint)param_2 & 0xffffff00;
  }
  else {
    uVar1 = FUN_005a4020(param_1);
  }
  return uVar1;
}

