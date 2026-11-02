// rea decompile_all
// name: FUN_005c1b80
// address: 0x5c1b80
// body: available
// range: 0x5c1b80-0x5c1ec6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005c1b80(undefined4 param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *_Memory;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int local_28;
  int local_24;
  int *local_1c;
  uint local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071a630;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar6 = *(int *)(in_ECX + 0x38);
  local_14 = (int *)0x0;
  local_1c = (int *)0x0;
  if (0 < iVar6) {
    FUN_00409cf0(iVar6 / 2 + iVar6 + 8 & 0xfffffff8);
  }
  local_18 = 0;
  uVar10 = 0;
  _Memory = (void *)0x0;
  local_24 = 0;
  piVar8 = (int *)0x0;
  uVar9 = uVar10;
  if (0 < *(int *)(in_ECX + 0x38)) {
    do {
      piVar8 = *(int **)(*(int *)(in_ECX + 0x30) + local_24 * 4);
      uVar4 = FUN_005be320(piVar8,local_24,uVar9,uVar3);
      uVar10 = uVar9 + 1;
      if ((int)local_18 < (int)uVar10) {
        uVar5 = uVar10;
        if ((int)uVar10 < 0) {
          uVar5 = uVar9 + 2;
        }
        uVar5 = ((int)uVar5 >> 1) + 8 + uVar10 & 0xfffffff8;
        if (local_18 != uVar5) {
          local_18 = uVar5;
          if ((int)uVar5 < 1) {
            FID_conflict__free(_Memory);
            _Memory = (void *)0x0;
          }
          else if (_Memory == (void *)0x0) {
            _Memory = (void *)FUN_004c554b();
          }
          else {
            _Memory = (void *)FUN_004c553b(_Memory,uVar5 << 2);
          }
        }
      }
      if (uVar4 < uVar9) {
        piVar7 = (int *)((int)_Memory + uVar4 * 4);
        if (0 < (int)(uVar9 - uVar4)) {
          FUN_004c1df0(piVar7 + 1,piVar7,(uVar9 - uVar4) * 4);
        }
        if (piVar7 != (int *)0x0) {
          *piVar7 = (int)piVar8;
        }
      }
      else {
        piVar7 = (int *)((int)_Memory + uVar9 * 4);
        if (piVar7 != (int *)0x0) {
          *piVar7 = (int)piVar8;
        }
      }
      local_8 = 0;
      cVar2 = (**(code **)(*piVar8 + 4))();
      if ((cVar2 == '\0') || (piVar8[0xc] != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      local_8 = 0xffffffff;
      if (!bVar1) {
        if ((local_14 == (int *)0x0) || ((uint)piVar8[4] >> 0x18 < (uint)local_14[4] >> 0x18)) {
          local_14 = piVar8;
        }
        if ((local_1c == (int *)0x0) || ((uint)local_1c[4] >> 0x18 < (uint)piVar8[4] >> 0x18)) {
          local_1c = piVar8;
        }
      }
      local_24 = local_24 + 1;
      piVar8 = local_1c;
      uVar9 = uVar10;
    } while (local_24 < *(int *)(in_ECX + 0x38));
  }
  piVar7 = (int *)0x0;
  if (piVar8 != local_14) {
    piVar7 = piVar8;
  }
  if ((((byte)(param_1._2_1_ - 1U) < 0x10) && (param_1._3_1_ < 0x80)) &&
     (iVar6 = 0, 0 < (int)uVar10)) {
    do {
      piVar8 = *(int **)((int)_Memory + iVar6 * 4);
      if (*(byte *)((int)piVar8 + 0x13) == param_1._3_1_) goto LAB_005c1ea8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar10);
  }
  local_28 = 0;
  if (0 < (int)uVar10) {
    do {
      piVar8 = *(int **)((int)_Memory + local_28 * 4);
      if ((piVar8 != local_14) && (piVar8 != piVar7)) {
        local_8 = 1;
        cVar2 = (**(code **)(*piVar8 + 4))();
        if ((cVar2 == '\0') || (piVar8[0xc] != 0)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        local_8 = 0xffffffff;
        if (bVar1) goto LAB_005c1ea8;
      }
      local_28 = local_28 + 1;
    } while (local_28 < (int)uVar10);
  }
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      piVar8 = *(int **)((int)_Memory + iVar6 * 4);
      if (((piVar8 != local_14) && (piVar8 != piVar7)) && ((piVar8[0xc] != 1 && (piVar8[0xc] != 3)))
         ) goto LAB_005c1ea8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar10);
  }
  iVar6 = 0;
  if (0 < (int)uVar10) {
    do {
      piVar8 = *(int **)((int)_Memory + iVar6 * 4);
      if ((piVar8 != local_14) && (piVar8 != piVar7)) goto LAB_005c1ea8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)uVar10);
  }
  piVar8 = piVar7;
  if (piVar7 == (int *)0x0) {
    piVar8 = local_14;
  }
LAB_005c1ea8:
  FID_conflict__free(_Memory);
  ExceptionList = local_10;
  return piVar8;
}

