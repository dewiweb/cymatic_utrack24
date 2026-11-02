// rea decompile_all
// name: FUN_005652a0
// address: 0x5652a0
// body: available
// range: 0x5652a0-0x565621 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005652a0(undefined4 param_1,int *param_2,ushort *param_3,ushort *param_4)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  short sVar4;
  int in_ECX;
  int iVar5;
  void *local_a8;
  uint local_90;
  void *local_8c;
  undefined1 local_70 [12];
  short local_64;
  int local_60;
  int local_5c;
  int local_54;
  void *local_50;
  void *local_4c;
  uint local_48;
  void *local_38;
  int local_34;
  int local_30;
  int local_2c;
  ushort local_28;
  char local_19;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4412;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0x32;
  local_18 = FUN_0056a060(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  do {
    if ((local_18 == 0) || (0x31 < *param_3)) {
      ExceptionList = local_10;
      return 1;
    }
    (**(code **)(*(int *)(local_18 + 0x28 + *(int *)(*(int *)(local_18 + 0x28) + 0xc)) + 0x18))
              (&local_30);
    local_19 = '\0';
    for (local_34 = 0; local_34 < (int)(uint)*param_3; local_34 = local_34 + 1) {
      FUN_005033e0(local_34 * 0x18 + *param_2);
      cVar3 = FUN_005034a0(in_ECX + 0x48);
      if (((cVar3 != '\0') && (*(int *)(*param_2 + 0x10 + local_34 * 0x18) == local_30)) &&
         (*(int *)(*param_2 + 0x14 + local_34 * 0x18) == local_2c)) {
        if (*(ushort *)(*param_2 + 0xc + local_34 * 0x18) <= local_28) {
          *(ushort *)(local_34 * 0x18 + *param_2 + 0xc) = local_28 + 1;
        }
        local_19 = '\x01';
        break;
      }
    }
    if (local_19 == '\0') {
      if (*param_3 == *param_4) {
        sVar4 = FUN_00568ee0();
        *param_4 = *param_4 + sVar4;
        local_48 = (uint)*param_4;
        local_8c = (void *)FUN_005b04d6(local_48 * 0x18);
        local_8 = 0;
        local_50 = local_8c;
        if (local_8c == (void *)0x0) {
          local_a8 = (void *)0x0;
        }
        else {
          local_90 = local_48;
          while (local_90 = local_90 - 1, -1 < (int)local_90) {
            FUN_00503380();
            FUN_00503650(&DAT_0095c848);
            *(undefined4 *)((int)local_8c + 0x10) = 0;
            *(undefined4 *)((int)local_8c + 0x14) = 0;
            *(undefined2 *)((int)local_8c + 0xc) = 0;
            local_8c = (void *)((int)local_8c + 0x18);
          }
          local_a8 = local_50;
        }
        local_4c = local_a8;
        local_8 = 0xffffffff;
        local_38 = local_a8;
        if (local_a8 == (void *)0x0) {
          ExceptionList = local_10;
          return 0;
        }
        _memcpy(local_a8,(void *)*param_2,(uint)*param_3 * 0x18);
        local_54 = *param_2;
        FUN_005b13e8(local_54);
        *param_2 = (int)local_38;
      }
      uVar2 = local_28;
      iVar1 = local_2c;
      iVar5 = local_30;
      FUN_00503380();
      FUN_00503650(in_ECX + 0x48);
      local_60 = iVar5;
      local_5c = iVar1;
      local_64 = uVar2 + 1;
      iVar5 = (uint)*param_3 * 0x18 + *param_2;
      FUN_00503650(local_70);
      *(short *)(iVar5 + 0xc) = local_64;
      *(int *)(iVar5 + 0x10) = local_60;
      *(int *)(iVar5 + 0x14) = local_5c;
      *param_3 = *param_3 + 1;
    }
    local_18 = FUN_0056a0a0(local_18);
  } while( true );
}

