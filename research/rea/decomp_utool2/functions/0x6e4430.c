// rea decompile_all
// name: FUN_006e4430
// address: 0x6e4430
// body: available
// range: 0x6e4430-0x6e4817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e4430(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *in_ECX;
  int iVar5;
  int iVar6;
  int local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  int local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  float local_48;
  float local_44;
  undefined4 local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728599;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_50 = param_3;
  local_5c = 0;
  local_58 = 0;
  local_54 = param_2;
  cVar4 = (**(code **)(*(int *)*in_ECX + 0x28))(&local_5c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar4 != '\0') {
    piVar3 = (int *)*in_ECX;
    (**(code **)(*piVar3 + 0x34))();
    iVar6 = param_4 + -1;
    if (-1 < iVar6) {
      local_1c = param_4;
      iVar5 = param_4 - iVar6;
      local_18 = (param_2 - iVar6) + -1;
      local_70 = (float)param_4;
      local_14 = param_3 + iVar6 * -2 + -2;
      param_3 = param_3 - param_2;
      param_2 = param_2 + iVar6 * -2;
      do {
        local_44 = (float)iVar5 / local_70;
        FUN_00684d10(&local_60);
        local_40 = local_60;
        local_3c = 0;
        local_38 = (undefined4 *)0x0;
        local_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        local_24 = 0x3f800000;
        local_20 = 0;
        local_8 = 0;
        (**(code **)(*piVar3 + 0x44))(&local_40);
        local_8 = 0xffffffff;
        if (local_38 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_38 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_38)(1);
          }
        }
        iVar2 = local_3c;
        if (local_3c != 0) {
          FID_conflict__free(*(void **)(local_3c + 0x14));
          FUN_004bfe14(iVar2,0x20);
        }
        local_54 = param_2;
        local_50 = 1;
        local_5c = iVar6;
        local_58 = iVar6;
        (**(code **)(*piVar3 + 0x54))(&local_5c,0);
        local_48 = local_44 * 0.75;
        FUN_00684d10(&local_64);
        local_40 = local_64;
        local_3c = 0;
        local_38 = (undefined4 *)0x0;
        local_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        local_24 = 0x3f800000;
        local_20 = 0;
        local_8 = 1;
        (**(code **)(*piVar3 + 0x44))(&local_40);
        local_8 = 0xffffffff;
        if (local_38 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_38 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_38)(1);
          }
        }
        iVar2 = local_3c;
        if (local_3c != 0) {
          FID_conflict__free(*(void **)(local_3c + 0x14));
          FUN_004bfe14(iVar2,0x20);
        }
        local_7c = local_1c;
        local_74 = local_14;
        local_78 = 1;
        local_80 = iVar6;
        (**(code **)(*piVar3 + 0x54))(&local_80,0);
        FUN_00684d10(&local_68);
        local_40 = local_68;
        local_3c = 0;
        local_38 = (undefined4 *)0x0;
        local_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        local_24 = 0x3f800000;
        local_20 = 0;
        local_8 = 2;
        (**(code **)(*piVar3 + 0x44))(&local_40);
        local_8 = 0xffffffff;
        if (local_38 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_38 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_38)(1);
          }
        }
        iVar2 = local_3c;
        if (local_3c != 0) {
          FID_conflict__free(*(void **)(local_3c + 0x14));
          FUN_004bfe14(iVar2,0x20);
        }
        local_8c = local_18 + param_3;
        local_88 = param_2;
        local_84 = 1;
        local_90 = iVar6;
        (**(code **)(*piVar3 + 0x54))(&local_90,0);
        FUN_00684d10(&local_6c);
        local_40 = local_6c;
        local_3c = 0;
        local_38 = (undefined4 *)0x0;
        local_34 = 0x3f800000;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_28 = 0;
        local_24 = 0x3f800000;
        local_20 = 0;
        local_8 = 3;
        (**(code **)(*piVar3 + 0x44))(&local_40);
        local_8 = 0xffffffff;
        if (local_38 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_38 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_38)(1);
          }
        }
        iVar2 = local_3c;
        if (local_3c != 0) {
          FID_conflict__free(*(void **)(local_3c + 0x14));
          FUN_004bfe14(iVar2,0x20);
        }
        iVar2 = local_1c;
        local_a0 = local_18;
        local_94 = local_14;
        local_9c = local_1c;
        local_98 = 1;
        (**(code **)(*piVar3 + 0x54))(&local_a0,0);
        local_1c = iVar2 + -1;
        param_2 = param_2 + 2;
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 2;
        local_18 = local_18 + 1;
        iVar6 = iVar6 + -1;
      } while (-1 < iVar6);
    }
    (**(code **)(*piVar3 + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

