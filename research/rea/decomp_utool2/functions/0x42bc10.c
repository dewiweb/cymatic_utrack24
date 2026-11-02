// rea decompile_all
// name: FUN_0042bc10
// address: 0x42bc10
// body: available
// range: 0x42bc10-0x42beb4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bc10(undefined4 *param_1)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  HWND pHVar5;
  undefined4 *puVar6;
  ushort *in_ECX;
  ushort *puVar7;
  undefined4 uVar8;
  void *local_80;
  size_t local_7c;
  int *local_78;
  ushort *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 *puStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined2 local_1c;
  ushort local_1a;
  undefined2 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fdc58;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = in_ECX + 0x16;
  local_74 = in_ECX + 0x18;
  puVar1[0] = 0;
  puVar1[1] = 0;
  local_74[0] = 0;
  local_74[1] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  local_8 = 0;
  puVar7 = local_74;
  if ((DAT_00c8a5fc != (code *)0x0) &&
     (iVar3 = (*DAT_00c8a5fc)(in_ECX + 6,puVar1,0,local_14), puVar7 = local_74, -1 < iVar3)) {
    uVar8 = 2;
    uVar4 = (*(int *)in_ECX >> 2) * *(int *)(in_ECX + 0x10) & 0xfffffff0;
    *(uint *)(in_ECX + 0x1e) = uVar4;
    *(uint *)(in_ECX + 0x1c) = uVar4 << 4;
    iVar3 = **(int **)puVar1;
    pHVar5 = GetDesktopWindow();
    iVar3 = (**(code **)(iVar3 + 0x18))(*(undefined4 *)(in_ECX + 0x16),pHVar5,uVar8);
    puVar7 = local_74;
    if (-1 < iVar3) {
      local_4c = 0x24;
      uStack_40 = 0;
      local_38 = 0;
      uStack_34 = 0;
      uStack_30 = 0;
      uStack_2c = 0;
      local_48 = 1;
      uStack_44 = 0;
      uStack_3c = 0;
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x16) + 0xc))
                        (*(int **)(in_ECX + 0x16),&local_4c,&local_78,0);
      puVar7 = local_74;
      if (-1 < iVar3) {
        local_1a = *in_ECX;
        local_24 = *(int *)(in_ECX + 0xe);
        local_28 = 0x20001;
        local_20 = (int)((uint)local_1a * 2) >> 3;
        local_1c = (undefined2)local_20;
        local_20 = local_20 * local_24;
        local_18 = 0;
        iVar3 = (**(code **)(*local_78 + 0x38))(local_78,&local_28);
        puVar7 = local_74;
        if (-1 < iVar3) {
          uStack_68 = *(undefined4 *)(in_ECX + 0x1c);
          local_70 = 0x24;
          uStack_64 = 0;
          puStack_60 = &local_28;
          local_6c = 0x18000;
          local_5c = 0;
          uStack_58 = 0;
          uStack_54 = 0;
          uStack_50 = 0;
          iVar3 = (**(code **)(**(int **)(in_ECX + 0x16) + 0xc))
                            (*(int **)(in_ECX + 0x16),&local_70,in_ECX + 0x18,0);
          puVar7 = local_74;
          if ((-1 < iVar3) &&
             (piVar2 = *(int **)(in_ECX + 0x18),
             iVar3 = (**(code **)(*piVar2 + 0x2c))
                               (piVar2,0,*(undefined4 *)(in_ECX + 0x1c),&local_80,&local_7c,0,0,0),
             puVar7 = local_74, -1 < iVar3)) {
            _memset(local_80,0,local_7c);
            puVar7 = local_74;
            iVar3 = (**(code **)(**(int **)local_74 + 0x4c))
                              (*(int **)local_74,local_80,local_7c,0,0);
            if ((-1 < iVar3) &&
               ((iVar3 = (**(code **)(**(int **)puVar7 + 0x34))(*(int **)puVar7,0), -1 < iVar3 &&
                (iVar3 = (**(code **)(**(int **)puVar7 + 0x30))(*(int **)puVar7,0,0,1), -1 < iVar3))
               )) {
              *param_1 = &DAT_00bfe12c;
              FUN_00637c10();
              goto LAB_0042be98;
            }
          }
        }
      }
    }
  }
  puVar6 = (undefined4 *)FUN_005c9400();
  uVar8 = *puVar6;
  *puVar6 = &DAT_00bfe12c;
  local_78 = local_78 + -2;
  if (local_78 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *local_78;
    *local_78 = *local_78 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(local_78);
    }
  }
  piVar2 = *(int **)puVar7;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x48))(piVar2);
    (**(code **)(**(int **)puVar7 + 8))(*(int **)puVar7);
    puVar7[0] = 0;
    puVar7[1] = 0;
  }
  piVar2 = *(int **)puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    puVar1[0] = 0;
    puVar1[1] = 0;
  }
  *param_1 = uVar8;
LAB_0042be98:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

