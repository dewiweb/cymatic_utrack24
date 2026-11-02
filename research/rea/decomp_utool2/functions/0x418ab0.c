// rea decompile_all
// name: FUN_00418ab0
// address: 0x418ab0
// body: available
// range: 0x418ab0-0x418c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00418ab0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  int *piVar9;
  int *piVar10;
  
  uVar2 = *(uint *)(in_ECX + 0xc);
  uVar5 = FUN_0045cfe0(*param_1);
  piVar10 = (int *)(in_ECX + 4);
  uVar5 = uVar5 % uVar2;
  piVar3 = *(int **)(uVar5 * 4 + *piVar10);
  if (piVar3 != (int *)0x0) {
    iVar4 = *param_1;
    piVar8 = piVar3;
    do {
      if (*piVar8 == iVar4) {
LAB_00418b3e:
        piVar8[1] = *param_2;
        return;
      }
      while( true ) {
        iVar6 = FUN_00443260();
        iVar7 = FUN_00443260();
        if ((iVar6 - iVar7 != 0) && ((iVar6 - iVar7 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
        if (iVar6 == 0) goto LAB_00418b3e;
      }
      piVar8 = (int *)piVar8[2];
    } while (piVar8 != (int *)0x0);
  }
  piVar8 = operator_new(0xc);
  iVar4 = *param_1;
  *piVar8 = iVar4;
  piVar9 = (int *)(iVar4 + -8);
  if (piVar9 != &DAT_00bfe124) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
  }
  piVar8[1] = *param_2;
  piVar8[2] = (int)piVar3;
  uVar2 = *(uint *)(in_ECX + 0xc);
  if (uVar5 < uVar2) {
    *(int **)(uVar5 * 4 + *piVar10) = piVar8;
  }
  else if (-1 < (int)uVar5) {
    if (*(int *)(in_ECX + 8) < (int)(uVar2 + 1)) {
      FUN_00409cf0((int)(uVar2 + 1) / 2 + uVar2 + 9 & 0xfffffff8);
    }
    iVar4 = *(int *)(in_ECX + 0xc);
    *(int *)(in_ECX + 0xc) = iVar4 + 1;
    puVar1 = (undefined4 *)(*piVar10 + iVar4 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = piVar8;
    }
  }
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  if ((*(int *)(in_ECX + 0xc) * 3) / 2 < *(int *)(in_ECX + 0x10)) {
    FUN_00418dd0(*(int *)(in_ECX + 0xc) * 2);
  }
  return;
}

