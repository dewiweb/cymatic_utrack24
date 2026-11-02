// rea decompile_all
// name: FUN_00684760
// address: 0x684760
// body: available
// range: 0x684760-0x684950 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00684760(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  undefined4 local_7c;
  int local_78;
  undefined4 *local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int *local_2c;
  float local_28;
  float local_24;
  int *local_20;
  float local_1c;
  float local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720b6e;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_34 = in_ECX[4];
  local_38 = in_ECX[3];
  local_40 = 0;
  local_3c = 0;
  local_2c = in_ECX;
  pfVar6 = (float *)FUN_00473030(local_50,&local_40,param_2);
  local_14 = 0;
  fVar9 = *pfVar6;
  fVar10 = pfVar6[1];
  piVar2 = (int *)*param_1;
  local_28 = fVar10;
  local_24 = fVar9;
  if (0 < in_ECX[2]) {
    do {
      local_20 = *(int **)(*in_ECX + local_14 * 4);
      param_1 = (undefined4 *)0x0;
      local_18 = fVar9 + (float)local_20[5];
      local_1c = fVar10 + (float)local_20[6];
      if (0 < local_20[2]) {
        do {
          iVar3 = *(int *)(*local_20 + (int)param_1 * 4);
          (**(code **)(*piVar2 + 0x68))(iVar3,uVar5);
          local_7c = *(undefined4 *)(iVar3 + 4);
          local_78 = 0;
          local_74 = (undefined4 *)0x0;
          local_70 = 0x3f800000;
          uStack_6c = 0;
          uStack_68 = 0;
          uStack_64 = 0;
          local_60 = 0x3f800000;
          local_5c = 0;
          local_8 = 0;
          (**(code **)(*piVar2 + 0x44))(&local_7c);
          local_8 = 0xffffffff;
          if (local_74 != (undefined4 *)0x0) {
            LOCK();
            piVar1 = local_74 + 1;
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)*local_74)(1);
            }
          }
          iVar8 = local_78;
          if (local_78 != 0) {
            FID_conflict__free(*(void **)(local_78 + 0x14));
            FUN_004bfe14(iVar8,0x20);
          }
          iVar8 = 0;
          if (0 < *(int *)(iVar3 + 0x10)) {
            iVar7 = 0;
            do {
              iVar4 = *(int *)(iVar3 + 8);
              local_58 = 0x3f800000;
              local_54 = 0;
              local_50[0] = *(float *)(iVar4 + 4 + iVar7) + local_18;
              local_50[1] = 0.0;
              local_50[3] = *(float *)(iVar4 + 8 + iVar7) + local_1c;
              local_50[2] = 1.0;
              (**(code **)(*piVar2 + 0x70))(*(undefined4 *)(iVar4 + iVar7),&local_58);
              iVar8 = iVar8 + 1;
              iVar7 = iVar7 + 0x10;
            } while (iVar8 < *(int *)(iVar3 + 0x10));
          }
          param_1 = (undefined4 *)((int)param_1 + 1);
          in_ECX = local_2c;
          fVar9 = local_24;
          fVar10 = local_28;
        } while ((int)param_1 < local_20[2]);
      }
      local_14 = local_14 + 1;
    } while (local_14 < in_ECX[2]);
  }
  ExceptionList = local_10;
  return;
}

