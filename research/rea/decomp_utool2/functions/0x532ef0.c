// rea decompile_all
// name: FUN_00532ef0
// address: 0x532ef0
// body: available
// range: 0x532ef0-0x53318d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00532ef0(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int *_Memory;
  uint uVar8;
  undefined **ppuVar9;
  int iVar10;
  undefined1 local_1c [4];
  uint local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070d12d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  if (param_2[1] != 0) {
    FID_conflict__free((void *)*param_2);
    *param_2 = 0;
    param_2[1] = 0;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x4e0);
  param_2[2] = 0;
  FUN_0040f7f0();
  if (*(int *)(in_ECX + 0x4e4) != 0) {
    FID_conflict__free((void *)*puVar1);
    *puVar1 = 0;
    *(undefined4 *)(in_ECX + 0x4e4) = 0;
  }
  *(undefined4 *)(in_ECX + 0x4e8) = 0;
  if (*(code **)(*(int *)*param_1 + 0x40) != FUN_004133b0) {
    puVar4 = (undefined4 *)FUN_00635650();
    local_8 = 0;
    FUN_00635720(*puVar4,&DAT_0073bd94);
    local_8 = 0xffffffff;
    _Memory = param_2 + -2;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar7 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    if (*(int *)(in_ECX + 0x4e8) != 0) {
      if ((param_1[5] == 0) && (param_1[6] == 0)) {
        uVar6 = 0;
        uVar8 = 0;
      }
      else {
        puVar5 = (uint *)FUN_006e1ae0(local_1c,in_ECX,param_1[5]);
        uVar6 = *puVar5;
        uVar8 = puVar5[1];
      }
      if ((*(uint *)(in_ECX + 0x194) <= uVar6) ||
         (uVar6 = (int)((*(int *)(*(int *)(in_ECX + 0x1f8) + 0x80) -
                        *(int *)(*(int *)(in_ECX + 0x1f8) + 0x14)) + uVar8) /
                  *(int *)(in_ECX + 0x208), *(uint *)(local_14 + 0x204) <= uVar6)) {
        uVar6 = 0xffffffff;
      }
      if (uVar6 < *(uint *)(local_14 + 0x4bc)) {
        if (*(int *)(in_ECX + 0x4e8) == 0) {
          ppuVar9 = &PTR_DAT_00c7ed68;
        }
        else {
          ppuVar9 = (undefined **)*puVar1;
        }
        if ((*ppuVar9 == DAT_00c8a6c0) || (iVar7 = FUN_00448730(*ppuVar9), iVar7 == 0)) {
          param_1 = (undefined4 *)0x1;
        }
        else {
          cVar3 = FUN_006356b0();
          param_1 = (undefined4 *)0x0;
          if (cVar3 != '\0') {
            param_1 = (undefined4 *)0x2;
          }
        }
        iVar10 = 0;
        iVar7 = *(int *)(local_14 + 0x4e8) + -1;
        if (0 < iVar7) {
          do {
            if (*(int *)(local_14 + 0x4bc) <= (int)uVar6) break;
            local_18 = uVar6;
            if (param_2[1] < param_2[2] + 1) {
              FUN_00409cf0();
            }
            iVar2 = param_2[2];
            param_2[2] = iVar2 + 1;
            puVar5 = (uint *)(*param_2 + iVar2 * 4);
            if (puVar5 != (uint *)0x0) {
              *puVar5 = local_18;
            }
            iVar10 = iVar10 + 1;
            uVar6 = uVar6 + 1;
          } while (iVar10 < iVar7);
        }
        if (param_2[2] == iVar7) goto LAB_00533172;
        if (param_2[1] != 0) {
          FID_conflict__free((void *)*param_2);
          *param_2 = 0;
          param_2[1] = 0;
        }
        param_2[2] = 0;
      }
    }
  }
  param_1 = (undefined4 *)0x0;
LAB_00533172:
  if (param_2[2] == 0) {
    param_1 = (undefined4 *)0x0;
  }
  ExceptionList = local_10;
  return param_1;
}

