// rea decompile_all
// name: FUN_00532000
// address: 0x532000
// body: available
// range: 0x532000-0x53233e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char FUN_00532000(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  char cVar3;
  int in_ECX;
  ushort local_3c;
  ushort local_38;
  undefined1 local_28 [12];
  ushort local_1c;
  uint local_18;
  ushort *local_14;
  char local_d;
  ushort local_c;
  ushort *local_8;
  
  local_d = '\x01';
  FUN_0052f300();
  *(int *)(in_ECX + 0x3c) = param_1;
  local_8 = *(ushort **)(param_1 + 0x14);
  local_14 = (ushort *)((int)local_8 + *(int *)(param_1 + 0x10));
  if ((int)local_14 - (int)local_8 < 4) {
    FUN_0052f300();
    local_d = '\0';
  }
  else {
    local_c = *local_8;
    *(ushort *)(in_ECX + 0x4c) = local_8[1];
    uVar1 = *(ushort *)(in_ECX + 0x4c);
    local_18 = uVar1 & 0xff00;
    puVar2 = local_8 + 2;
    if ((uVar1 & 0x100) != 0) {
      *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(local_8 + 2);
      puVar2 = local_8 + 4;
    }
    local_8 = puVar2;
    if ((uVar1 & 0x200) != 0) {
      FUN_00507d00(in_ECX + 0x1c,&local_8);
      *(ushort *)(in_ECX + 0x28) = *local_8;
      local_8 = local_8 + 1;
      if ((*(ushort *)(in_ECX + 0x4c) & 0x10) == 0) {
        FUN_00503bc0();
        uVar1 = *local_8;
        local_8 = local_8 + 1;
        cVar3 = FUN_00537740(uVar1);
        if (cVar3 == '\0') {
          local_d = '\0';
        }
        else if ((uint)((int)local_14 - (int)local_8) < (uint)uVar1 * 0xc + 2) {
          local_d = '\0';
        }
        else {
          for (local_38 = 0; local_38 < uVar1; local_38 = local_38 + 1) {
            FUN_00507d00(local_28,&local_8);
            local_1c = *local_8;
            local_8 = local_8 + 1;
            FUN_00537840(local_28);
          }
          uVar1 = *local_8;
          local_8 = local_8 + 1;
          cVar3 = FUN_00537740(uVar1);
          if (cVar3 == '\0') {
            local_d = '\0';
          }
          else if ((uint)((int)local_14 - (int)local_8) < (uint)uVar1 * 0xc + 2) {
            local_d = '\0';
          }
          else {
            for (local_3c = 0; local_3c < uVar1; local_3c = local_3c + 1) {
              FUN_00507d00(local_28,&local_8);
              local_1c = *local_8;
              local_8 = local_8 + 1;
              FUN_00537840(local_28);
            }
          }
        }
      }
      local_8 = (ushort *)((uint)((int)local_8 + 3) & 0xfffffffc);
    }
    if ((((local_18 & 0x400) != 0) && ((*(ushort *)(in_ECX + 0x4c) & 0x20) != 0)) &&
       (local_d != '\0')) {
      *(char *)(in_ECX + 0x50) = (char)*local_8;
      puVar2 = local_8 + 2;
      if ((*(byte *)(in_ECX + 0x50) & 1) != 0) {
        *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(local_8 + 2);
        puVar2 = local_8 + 4;
      }
      local_8 = puVar2;
      if ((*(byte *)(in_ECX + 0x50) & 2) != 0) {
        *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)local_8;
        *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(local_8 + 2);
        local_8 = local_8 + 4;
      }
      if (local_14 < local_8) {
        local_d = '\0';
      }
    }
    *(ushort *)(in_ECX + 0x4e) = *local_8;
    local_8 = local_8 + 2;
    if (local_14 < local_8) {
      local_d = '\0';
    }
    if (local_d == '\0') {
      FUN_0052f300();
    }
    else {
      *(ushort **)(in_ECX + 0x40) = local_8;
    }
  }
  return local_d;
}

