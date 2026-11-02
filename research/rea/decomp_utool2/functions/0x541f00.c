// rea decompile_all
// name: FUN_00541f00
// address: 0x541f00
// body: available
// range: 0x541f00-0x542158 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00541f00(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  undefined4 *local_24;
  int local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_0070e8e7;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  local_8 = 0;
  local_18 = 1;
  if (*(int *)(in_ECX + 0xc) == 0) {
    local_24 = operator_new(0x1c);
    local_8 = 2;
    iVar5 = FUN_00542250(in_ECX + 8);
  }
  else {
    local_24 = operator_new(0x1c);
    local_8 = 1;
    iVar5 = FUN_00542360(*(undefined4 *)(in_ECX + 0xc));
  }
  local_8 = local_8 & 0xffffff00;
  if (*param_1 != iVar5) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
      UNLOCK();
    }
    puVar1 = (undefined4 *)*param_1;
    *param_1 = iVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LOCK();
      piVar7 = puVar1 + 1;
      iVar5 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar1)(1,uVar4);
      }
    }
  }
  local_14 = 0;
  if (0 < *(int *)(in_ECX + 0x18)) {
    do {
      iVar5 = local_14;
      FUN_004110e0(&local_1c,local_14);
      puVar1 = local_1c;
      local_8 = 3;
      if (local_1c[3] == 0) {
        if (((char)param_2 != '\0') || (0 < (int)local_1c[6])) {
          piVar7 = (int *)FUN_00541f00(&local_24,param_2);
          iVar2 = *param_1;
          local_20 = *piVar7;
          iVar3 = *(int *)(iVar2 + 0x18);
          iVar8 = iVar3 + 1;
          if (*(int *)(iVar2 + 0x14) < iVar8) {
            if (iVar8 < 0) {
              iVar8 = iVar3 + 2;
            }
            FUN_00409cf0((iVar8 >> 1) + iVar3 + 9 & 0xfffffff8);
          }
          iVar3 = *(int *)(iVar2 + 0x18);
          *(int *)(iVar2 + 0x18) = iVar3 + 1;
          *(int *)(*(int *)(iVar2 + 0x10) + iVar3 * 4) = local_20;
          if (local_20 != 0) {
            LOCK();
            *(int *)(local_20 + 4) = *(int *)(local_20 + 4) + 1;
            UNLOCK();
          }
          if (local_24 != (undefined4 *)0x0) {
            LOCK();
            piVar7 = local_24 + 1;
            iVar2 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (**(code **)*local_24)(1);
            }
          }
        }
      }
      else {
        operator_new(0x1c);
        local_8 = CONCAT31(local_8._1_3_,4);
        local_20 = FUN_00542360(puVar1[3]);
        iVar2 = *param_1;
        iVar3 = *(int *)(iVar2 + 0x18);
        iVar8 = iVar3 + 1;
        if (*(int *)(iVar2 + 0x14) < iVar8) {
          if (iVar8 < 0) {
            iVar8 = iVar3 + 2;
          }
          uVar4 = iVar3 + 9 + (iVar8 >> 1) & 0xfffffff8;
          iVar5 = local_14;
          if (*(uint *)(iVar2 + 0x14) != uVar4) {
            if ((int)uVar4 < 1) {
              FID_conflict__free(*(void **)(iVar2 + 0x10));
              *(undefined4 *)(iVar2 + 0x10) = 0;
            }
            else if (*(int *)(iVar2 + 0x10) == 0) {
              uVar6 = FUN_004c554b();
              *(undefined4 *)(iVar2 + 0x10) = uVar6;
            }
            else {
              uVar6 = FUN_004c553b(*(int *)(iVar2 + 0x10),uVar4 * 4);
              *(undefined4 *)(iVar2 + 0x10) = uVar6;
            }
            *(uint *)(iVar2 + 0x14) = uVar4;
            iVar5 = local_14;
          }
        }
        iVar3 = *(int *)(iVar2 + 0x18);
        *(int *)(iVar2 + 0x18) = iVar3 + 1;
        *(int *)(*(int *)(iVar2 + 0x10) + iVar3 * 4) = local_20;
        if (local_20 != 0) {
          LOCK();
          *(int *)(local_20 + 4) = *(int *)(local_20 + 4) + 1;
          UNLOCK();
        }
      }
      local_8 = local_8 & 0xffffff00;
      LOCK();
      piVar7 = puVar1 + 1;
      iVar2 = *piVar7;
      *piVar7 = *piVar7 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar1)(1);
      }
      local_14 = iVar5 + 1;
    } while (local_14 < *(int *)(in_ECX + 0x18));
  }
  ExceptionList = local_10;
  return param_1;
}

