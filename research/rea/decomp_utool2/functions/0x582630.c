// rea decompile_all
// name: FUN_00582630
// address: 0x582630
// body: available
// range: 0x582630-0x58284f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00582630(undefined **param_1,int *param_2)

{
  int *_Memory;
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *_Memory_00;
  bool bVar7;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00712c88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("============ WEBSERVICE ===============",DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_005893a0();
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_14 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_00631e00(&local_14,1);
  local_8 = 1;
  FUN_005893a0();
  local_8 = 0xffffffff;
  piVar5 = (int *)(local_14 - 8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = param_2;
  local_14 = 0;
  if (0 < param_2[2]) {
    bVar7 = param_2[2] != 0;
    do {
      if (bVar7) {
        ppuVar3 = (undefined **)(*piVar5 + local_14 * 4);
      }
      else {
        ppuVar3 = &PTR_DAT_00c7ed68;
      }
      param_2 = (int *)*ppuVar3;
      _Memory = param_2 + -2;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        *_Memory = *_Memory + 1;
        UNLOCK();
      }
      local_8 = 2;
      uVar4 = FUN_0062c730(param_2,(char)piVar5[6],0);
      uVar6 = (uint)(uVar4 < (uint)piVar5[5]);
      if (uVar4 < (uint)piVar5[5]) {
        uVar6 = piVar5[3];
        param_1 = (undefined **)(uVar6 + uVar4 * 4);
      }
      else {
        param_1 = &PTR_DAT_00c7ed68;
      }
      uVar4 = uVar6;
      FUN_00637690(&param_2);
      FUN_006377c0(uVar6);
      FUN_00637730(uVar4);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_005893a0();
      _Memory_00 = (int *)(local_18 + -8);
      if (_Memory_00 != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory_00;
        *_Memory_00 = *_Memory_00 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory_00);
        }
      }
      local_8 = 0xffffffff;
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar1 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar1 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      local_14 = local_14 + 1;
      bVar7 = local_14 < (uint)piVar5[2];
    } while ((int)local_14 < piVar5[2]);
  }
  FUN_0045c990("--> Response: ");
  local_8 = 4;
  FUN_005893a0();
  local_8 = 0xffffffff;
  param_1 = param_1 + -2;
  if (param_1 != (undefined **)&DAT_00bfe124) {
    LOCK();
    puVar2 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (puVar2 == (undefined *)0x0) {
      FID_conflict__free(param_1);
    }
  }
  FUN_005893a0();
  ExceptionList = local_10;
  return;
}

