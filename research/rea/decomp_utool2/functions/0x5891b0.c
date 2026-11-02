// rea decompile_all
// name: FUN_005891b0
// address: 0x5891b0
// body: available
// range: 0x5891b0-0x589358 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_005891b0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar1 = DAT_00c8a5d8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007137ed;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar9 = 0;
  if (0 < *(int *)(DAT_00c8a5d8 + 0x48)) {
    bVar10 = *(int *)(DAT_00c8a5d8 + 0x48) != 0;
    iVar8 = *param_1;
    do {
      if (bVar10) {
        piVar5 = *(int **)(*(int *)(iVar1 + 0x40) + uVar9 * 4);
      }
      else {
        piVar5 = (int *)0x0;
      }
      if (*piVar5 == iVar8) {
LAB_00589235:
        if (uVar9 < *(uint *)(iVar1 + 0x48)) {
          iVar3 = *(int *)(*(int *)(iVar1 + 0x40) + uVar9 * 4);
        }
        else {
          iVar3 = 0;
        }
        if (*(int *)(iVar3 + 4) == 0) {
          if (*(uint *)(iVar1 + 0x48) <= uVar9) {
            ExceptionList = local_10;
            return (int *)0x0;
          }
          ExceptionList = local_10;
          return *(int **)(*(int *)(iVar1 + 0x40) + uVar9 * 4);
        }
      }
      else {
        do {
          iVar3 = FUN_00443260(uVar2);
          iVar4 = FUN_00443260();
          if ((iVar3 - iVar4 != 0) &&
             (iVar4 = (iVar3 - iVar4 >> 0x1f & 0xfffffffeU) + 1, iVar4 != 0)) goto LAB_00589231;
        } while (iVar3 != 0);
        iVar4 = 0;
LAB_00589231:
        if (iVar4 == 0) goto LAB_00589235;
      }
      uVar9 = uVar9 + 1;
      bVar10 = uVar9 < *(uint *)(iVar1 + 0x48);
    } while ((int)uVar9 < (int)*(uint *)(iVar1 + 0x48));
  }
  piVar5 = operator_new(0x50);
  iVar8 = *param_1;
  *piVar5 = iVar8;
  piVar7 = (int *)(iVar8 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
  }
  local_8 = 1;
  piVar5[1] = 0;
  FUN_0062fac0(param_1,piVar7,iVar1 + 0x24);
  iVar8 = *(int *)(iVar1 + 0x48) + 1;
  if ((*(int *)(iVar1 + 0x44) < iVar8) &&
     (uVar2 = *(int *)(iVar1 + 0x48) + 9 + iVar8 / 2 & 0xfffffff8, *(uint *)(iVar1 + 0x44) != uVar2)
     ) {
    if ((int)uVar2 < 1) {
      FID_conflict__free(*(void **)(iVar1 + 0x40));
      *(undefined4 *)(iVar1 + 0x40) = 0;
    }
    else if (*(int *)(iVar1 + 0x40) == 0) {
      uVar6 = FUN_004c554b();
      *(undefined4 *)(iVar1 + 0x40) = uVar6;
    }
    else {
      uVar6 = FUN_004c553b(*(int *)(iVar1 + 0x40),uVar2 * 4);
      *(undefined4 *)(iVar1 + 0x40) = uVar6;
    }
    *(uint *)(iVar1 + 0x44) = uVar2;
  }
  iVar8 = *(int *)(iVar1 + 0x48);
  *(int *)(iVar1 + 0x48) = iVar8 + 1;
  *(int **)(*(int *)(iVar1 + 0x40) + iVar8 * 4) = piVar5;
  ExceptionList = local_10;
  return piVar5;
}

