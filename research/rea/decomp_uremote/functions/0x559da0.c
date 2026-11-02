// rea decompile_all
// name: FUN_00559da0
// address: 0x559da0
// body: available
// range: 0x559da0-0x55a059 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00559da0(int param_1,undefined2 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int in_ECX;
  int iVar3;
  undefined2 *local_40;
  undefined2 *local_3c;
  int local_34;
  undefined2 *local_30;
  int local_2c;
  undefined2 *local_28;
  uint local_8;
  
  for (local_8 = 0; local_8 < *(ushort *)(in_ECX + 10); local_8 = local_8 + 1) {
    iVar3 = param_1;
    FUN_0055af60(*(undefined2 *)(*(int *)(in_ECX + 4) + local_8 * 8));
    cVar1 = FUN_005034a0(iVar3);
    if ((cVar1 != '\0') &&
       (*(short *)(*(int *)(in_ECX + 4) + 2 + local_8 * 8) == *(short *)(param_1 + 0xc))) {
      *(undefined1 *)(*(int *)(in_ECX + 4) + 4 + local_8 * 8) = 4;
      return 0;
    }
  }
  if (*(short *)(in_ECX + 10) == *(short *)(in_ECX + 8)) {
    if (*(int *)(in_ECX + 4) == 0) {
      local_3c = (undefined2 *)FUN_005b04d6(0x10);
      if (local_3c == (undefined2 *)0x0) {
        local_3c = (undefined2 *)0x0;
      }
      else {
        local_2c = 2;
        local_28 = local_3c;
        while (local_2c = local_2c + -1, -1 < local_2c) {
          *local_28 = 0;
          local_28[1] = 0;
          *(undefined1 *)(local_28 + 2) = 0;
          local_28[3] = 0;
          local_28 = local_28 + 4;
        }
      }
      *(undefined2 **)(in_ECX + 4) = local_3c;
      _memset(*(void **)(in_ECX + 4),0,0x10);
      *(undefined2 *)(in_ECX + 8) = 2;
    }
    else {
      local_34 = *(ushort *)(in_ECX + 8) + 2;
      local_40 = (undefined2 *)FUN_005b04d6(local_34 * 8);
      local_30 = local_40;
      if (local_40 == (undefined2 *)0x0) {
        local_40 = (undefined2 *)0x0;
      }
      else {
        while (local_34 = local_34 + -1, -1 < local_34) {
          *local_30 = 0;
          local_30[1] = 0;
          *(undefined1 *)(local_30 + 2) = 0;
          local_30[3] = 0;
          local_30 = local_30 + 4;
        }
      }
      if (local_40 == (undefined2 *)0x0) {
        return 0;
      }
      _memcpy(local_40,*(void **)(in_ECX + 4),(uint)*(ushort *)(in_ECX + 8) << 3);
      _memset(local_40 + (uint)*(ushort *)(in_ECX + 8) * 4,0,0x10);
      FUN_005b13e8(*(undefined4 *)(in_ECX + 4));
      *(undefined2 **)(in_ECX + 4) = local_40;
      *(short *)(in_ECX + 8) = *(short *)(in_ECX + 8) + 2;
    }
  }
  uVar2 = FUN_0055a930(param_1);
  *(undefined2 *)(*(int *)(in_ECX + 4) + (uint)*(ushort *)(in_ECX + 10) * 8) = uVar2;
  *(undefined2 *)(*(int *)(in_ECX + 4) + 2 + (uint)*(ushort *)(in_ECX + 10) * 8) =
       *(undefined2 *)(param_1 + 0xc);
  *(undefined1 *)(*(int *)(in_ECX + 4) + 4 + (uint)*(ushort *)(in_ECX + 10) * 8) = 4;
  *(undefined2 *)(*(int *)(in_ECX + 4) + 6 + (uint)*(ushort *)(in_ECX + 10) * 8) = param_2;
  *(short *)(in_ECX + 10) = *(short *)(in_ECX + 10) + 1;
  return 1;
}

