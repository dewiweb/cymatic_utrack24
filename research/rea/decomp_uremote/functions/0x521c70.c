// rea decompile_all
// name: FUN_00521c70
// address: 0x521c70
// body: available
// range: 0x521c70-0x521f1a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00521c70(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  undefined1 *puVar3;
  int local_60;
  int local_5c;
  undefined1 local_40 [12];
  int local_34;
  int local_30;
  undefined1 local_2c [12];
  int local_20;
  int local_1c;
  undefined4 local_18;
  short local_14 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfdbd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x10) == '\0') {
    if (param_2 == (int *)0x0) {
      local_18 = 0x80;
    }
    else {
      local_14[0] = 0;
      cVar1 = (**(code **)(*param_2 + 0x18))
                        (param_1,local_14,1,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
      if (cVar1 == '\0') {
        local_18 = 1;
      }
      else {
        local_18 = 0x80;
        if ((*(byte *)(param_2 + 0x1d) & 1) != 0) {
          for (local_1c = 0; local_1c < (int)(uint)*(ushort *)(param_1 + 0x12);
              local_1c = local_1c + 1) {
            puVar3 = local_2c;
            FUN_005378a0(local_1c);
            FUN_00503b30(puVar3);
            local_20 = FUN_00522bb0(local_2c);
            if (local_20 == 0) {
              iVar2 = FUN_005af82d(0x24);
              local_8 = 0;
              if (iVar2 == 0) {
                local_5c = 0;
              }
              else {
                local_5c = FUN_005228a0(local_2c);
              }
              local_8 = 0xffffffff;
              local_20 = local_5c;
              if (local_5c == 0) {
                ExceptionList = local_10;
                return 2;
              }
              FUN_00522c40(local_5c);
            }
            if (*(int *)(local_20 + 0x10) == 0) {
              *(undefined2 *)(local_20 + 0xc) = 0;
            }
            else {
              *(short *)(local_20 + 0xc) = *(short *)(local_20 + 0xc) + local_14[0];
            }
            if (*(uint *)(local_20 + 0x10) < (uint)*(ushort *)(local_20 + 0xc)) {
              local_18 = 0x81;
            }
          }
          for (local_30 = 0; local_30 < (int)(uint)*(ushort *)(param_1 + 0x1a);
              local_30 = local_30 + 1) {
            puVar3 = local_40;
            FUN_005378a0(local_30);
            FUN_00503b30(puVar3);
            local_34 = FUN_00522bb0(local_40);
            if (local_34 == 0) {
              iVar2 = FUN_005af82d(0x24);
              local_8 = 1;
              if (iVar2 == 0) {
                local_60 = 0;
              }
              else {
                local_60 = FUN_005228a0(local_40);
              }
              local_8 = 0xffffffff;
              local_34 = local_60;
              if (local_60 == 0) {
                ExceptionList = local_10;
                return 2;
              }
              FUN_00522c40(local_60);
            }
            if (*(int *)(local_34 + 0x10) == 0) {
              *(undefined2 *)(local_34 + 0xc) = 0;
            }
            else {
              *(short *)(local_34 + 0xc) = *(short *)(local_34 + 0xc) + local_14[0];
            }
            if (*(uint *)(local_34 + 0x10) < (uint)*(ushort *)(local_34 + 0xc)) {
              local_18 = 0x81;
            }
          }
        }
      }
    }
  }
  else {
    local_18 = 0;
  }
  ExceptionList = local_10;
  return local_18;
}

