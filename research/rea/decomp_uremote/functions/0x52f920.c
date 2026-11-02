// rea decompile_all
// name: FUN_0052f920
// address: 0x52f920
// body: available
// range: 0x52f920-0x52fc97 inclusive
// range: 0x52fc9a-0x52fcb6 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0052f920(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int local_54;
  uint local_2c;
  uint local_28;
  int *local_24;
  undefined4 *local_20;
  uint local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0594;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = *(ushort *)(in_ECX + 0x13) & 0xff00;
  local_18 = 0;
  if (*(char *)((int)in_ECX + 0x51) != '\0') {
    uVar4 = FUN_0052f7e0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
    in_ECX[0x11] = uVar4;
    *(undefined1 *)((int)in_ECX + 0x51) = 0;
  }
  local_14 = in_ECX[0x11];
  if (local_14 != 0) {
    iVar5 = FUN_005af82d(0x18);
    local_8 = 0;
    if (iVar5 == 0) {
      local_54 = 0;
    }
    else {
      local_54 = FUN_0052efc0();
    }
    local_8 = 0xffffffff;
    local_18 = local_54;
    if ((local_54 != 0) && (cVar3 = FUN_0052f0c0(local_14), cVar3 != '\0')) {
      puVar1 = *(undefined2 **)(local_18 + 0x14);
      *puVar1 = 0x100;
      puVar1[1] = *(undefined2 *)(in_ECX + 0x13);
      local_20 = (undefined4 *)(puVar1 + 2);
      if ((local_1c & 0x100) != 0) {
        *local_20 = in_ECX[0x12];
        local_20 = (undefined4 *)(puVar1 + 4);
      }
      if ((local_1c & 0x200) != 0) {
        FUN_00507bf0(&local_20,in_ECX + 7);
        *(undefined2 *)local_20 = *(undefined2 *)(in_ECX + 10);
        puVar2 = (undefined4 *)((int)local_20 + 2);
        if ((*(ushort *)(in_ECX + 0x13) & 0x10) == 0) {
          *(undefined2 *)((int)local_20 + 2) = *(undefined2 *)((int)in_ECX + 0x1a);
          local_20 = local_20 + 1;
          for (local_28 = 0; local_28 < *(ushort *)((int)in_ECX + 0x1a); local_28 = local_28 + 1) {
            iVar5 = FUN_005378a0(local_28);
            FUN_00507bf0(&local_20,iVar5);
            *(undefined2 *)local_20 = *(undefined2 *)(iVar5 + 0xc);
            local_20 = (undefined4 *)((int)local_20 + 2);
          }
          *(undefined2 *)local_20 = *(undefined2 *)((int)in_ECX + 0x12);
          for (local_2c = 0; local_20 = (undefined4 *)((int)local_20 + 2), puVar2 = local_20,
              local_2c < *(ushort *)((int)in_ECX + 0x12); local_2c = local_2c + 1) {
            iVar5 = FUN_005378a0(local_2c);
            FUN_00507bf0(&local_20,iVar5);
            *(undefined2 *)local_20 = *(undefined2 *)(iVar5 + 0xc);
          }
        }
        local_20 = puVar2;
        local_20 = (undefined4 *)((int)local_20 + 3U & 0xfffffffc);
      }
      if (((local_1c & 0x400) != 0) && ((*(ushort *)(in_ECX + 0x13) & 0x20) != 0)) {
        *(undefined1 *)local_20 = *(undefined1 *)(in_ECX + 0x14);
        *(undefined1 *)((int)local_20 + 1) = 0;
        *(undefined2 *)((int)local_20 + 2) = 0;
        puVar2 = local_20 + 1;
        if ((*(byte *)(in_ECX + 0x14) & 1) != 0) {
          local_20[1] = in_ECX[0xe];
          puVar2 = local_20 + 2;
        }
        local_20 = puVar2;
        if ((*(byte *)(in_ECX + 0x14) & 2) != 0) {
          *local_20 = in_ECX[0xc];
          local_20[1] = in_ECX[0xd];
          local_20 = local_20 + 2;
        }
      }
      *(undefined2 *)local_20 = *(undefined2 *)((int)in_ECX + 0x4e);
      *(undefined2 *)((int)local_20 + 2) = 0;
      local_20 = local_20 + 1;
      local_24 = (int *)*in_ECX;
      while (local_24 != (int *)0x0) {
        (**(code **)(*local_24 + 8))(&local_20);
        local_20 = (undefined4 *)((int)local_20 + 3U & 0xfffffffc);
        if (local_24 == (int *)0x0) {
          local_24 = (int *)*in_ECX;
        }
        else {
          local_24 = (int *)local_24[3];
        }
      }
    }
  }
  ExceptionList = local_10;
  return local_18;
}

