// rea decompile_all
// name: FUN_00676c40
// address: 0x676c40
// body: available
// range: 0x676c40-0x676e8c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00676c40(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7,int param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 in_stack_ffffff58;
  undefined4 uVar11;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60 [16];
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  undefined4 *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = param_5;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007207ad;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((0 < param_5) && (0 < param_6)) {
    local_18 = in_ECX;
    (**(code **)(*(int *)*in_ECX + 0x34))(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (param_7 == param_8) {
      FUN_0067e8f0(param_7);
      local_8 = 0;
      (**(code **)(*(int *)*in_ECX + 0x44))(&local_84);
      local_8 = 0xffffffff;
      FUN_0067e690();
      (**(code **)(*(int *)*in_ECX + 0x54))(&param_1,0);
    }
    else {
      uVar11 = 0x676ce9;
      (**(code **)(*(int *)*in_ECX + 0x2c))(local_60,&local_40,&param_1);
      FUN_0044db90(in_stack_ffffff58,uVar11);
      if ((0 < local_38) && (0 < local_34)) {
        (**(code **)(*(int *)*in_ECX + 0x14))(&local_40);
        uVar2 = (local_40 - param_1) / iVar4;
        iVar7 = local_40 + local_38;
        uVar3 = (local_3c - param_2) / param_6;
        local_1c = 0;
        local_2c = uVar2 * iVar4 + param_1;
        local_28 = uVar3 * param_6 + param_2;
        local_24 = local_34 + local_3c;
        local_14 = (uVar3 ^ uVar2) & 1;
        puVar9 = local_18;
        local_20 = iVar7;
        do {
          local_84 = param_8;
          if (local_1c == local_14) {
            local_84 = param_7;
          }
          local_80 = 0;
          local_7c = (undefined4 *)0x0;
          local_78 = 0x3f800000;
          uStack_74 = 0;
          uStack_70 = 0;
          uStack_6c = 0;
          local_68 = 0x3f800000;
          local_64 = 0;
          local_8 = 1;
          (**(code **)(*(int *)*puVar9 + 0x44))(&local_84);
          local_8 = 0xffffffff;
          if (local_7c != (undefined4 *)0x0) {
            LOCK();
            piVar1 = local_7c + 1;
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)*local_7c)(1);
            }
          }
          iVar4 = local_80;
          if (local_80 != 0) {
            FID_conflict__free(*(void **)(local_80 + 0x14));
            FUN_004bfe14(iVar4,0x20);
          }
          iVar4 = param_5;
          iVar6 = param_6;
          uVar2 = local_1c;
          iVar10 = local_28;
          if (local_28 < local_24) {
            do {
              local_30 = uVar2 + 1;
              iVar8 = (uVar2 & 1) * iVar4 + local_2c;
              iVar5 = iVar4;
              if (iVar8 < iVar7) {
                do {
                  local_44 = param_6;
                  local_50 = iVar8;
                  local_4c = iVar10;
                  local_48 = iVar5;
                  (**(code **)(*(int *)*local_18 + 0x54))(&local_50,0);
                  iVar8 = iVar8 + iVar4 * 2;
                  iVar5 = param_5;
                  iVar6 = param_6;
                  iVar7 = local_20;
                } while (iVar8 < local_20);
              }
              iVar10 = iVar10 + iVar6;
              iVar4 = iVar5;
              uVar2 = local_30;
              puVar9 = local_18;
            } while (iVar10 < local_24);
          }
          local_1c = local_1c + 1;
          in_ECX = local_18;
        } while ((int)local_1c < 2);
      }
    }
    (**(code **)(*(int *)*in_ECX + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

