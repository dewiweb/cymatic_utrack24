// rea decompile_all
// name: FUN_0040fdfd
// address: 0x40fdfd
// body: available
// range: 0x40fdfd-0x40ff70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040fdfd(byte *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *unaff_EBX;
  uint local_c;
  undefined4 *local_8;
  
  if (unaff_EBX == (undefined4 *)0x0) {
    return 0x21;
  }
  if (param_1 == (byte *)0x0) {
    local_8 = (undefined4 *)0x6;
  }
  else if (*(int *)(param_1 + 0x10) < 0x20005) {
    local_c = 0;
    if (unaff_EBX[4] != 0) {
      local_8 = unaff_EBX + 5;
      do {
        piVar1 = (int *)*local_8;
        iVar4 = _strcmp(*(char **)(*piVar1 + 8),*(char **)(param_1 + 8));
        if (iVar4 == 0) {
          if (*(int *)(param_1 + 0xc) <= *(int *)(*piVar1 + 0xc)) {
            return 5;
          }
          FUN_0041001f();
          break;
        }
        local_c = local_c + 1;
        local_8 = local_8 + 1;
      } while (local_c < (uint)unaff_EBX[4]);
    }
    uVar2 = *unaff_EBX;
    local_8 = (undefined4 *)0x0;
    if ((uint)unaff_EBX[4] < 0x20) {
      puVar5 = (undefined4 *)FUN_00411912(*(undefined4 *)(param_1 + 4),&local_8);
      if (local_8 == (undefined4 *)0x0) {
        puVar5[1] = unaff_EBX;
        puVar5[2] = uVar2;
        *puVar5 = param_1;
        if (((*param_1 & 2) == 0) ||
           (local_8 = (undefined4 *)FUN_0040fbad(), local_8 == (undefined4 *)0x0)) {
          if ((*(byte *)*puVar5 & 4) != 0) {
            unaff_EBX[0x28] = puVar5;
          }
          puVar3 = (uint *)*puVar5;
          if (((((*puVar3 & 1) == 0) || (puVar5[3] = puVar3, (*puVar3 & 0x200) != 0)) ||
              (local_8 = (undefined4 *)FUN_0040d5b8(puVar5 + 6), local_8 == (undefined4 *)0x0)) &&
             ((*(code **)(param_1 + 0x18) == (code *)0x0 ||
              (local_8 = (undefined4 *)(**(code **)(param_1 + 0x18))(puVar5),
              local_8 == (undefined4 *)0x0)))) {
            unaff_EBX[unaff_EBX[4] + 5] = puVar5;
            unaff_EBX[4] = unaff_EBX[4] + 1;
            return (int)local_8;
          }
        }
        if (((*(uint *)*puVar5 & 1) != 0) && ((*(uint *)*puVar5 & 0x200) == 0)) {
          FUN_0040d658();
        }
        if ((((*(byte *)*puVar5 & 2) != 0) && (*(int *)(puVar5[3] + 0x24) == 0x6f75746c)) &&
           (puVar5[0xd] != 0)) {
          (**(code **)(*(int *)(puVar5[3] + 0x38) + 0x14))(puVar5[0xd]);
        }
        FUN_00411a5c(puVar5);
      }
    }
    else {
      local_8 = (undefined4 *)0x30;
    }
  }
  else {
    local_8 = (undefined4 *)0x4;
  }
  return (int)local_8;
}

