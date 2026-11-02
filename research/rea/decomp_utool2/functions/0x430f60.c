// rea decompile_all
// name: FUN_00430f60
// address: 0x430f60
// body: available
// range: 0x430f60-0x43110c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00430f60(int param_1,int param_2,int param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  if ((int)param_4 < 0) {
    iVar5 = 0x12;
    uVar7 = 1;
    do {
      if ((param_1 <= (int)uVar7) && ((int)uVar7 <= param_2)) {
        iVar6 = *(int *)(in_ECX + 0x80);
        iVar4 = iVar6 + 1;
        if (*(int *)(in_ECX + 0x7c) < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar6 + 2;
          }
          FUN_00409cf0((iVar4 >> 1) + iVar6 + 9 & 0xfffffff8);
        }
        iVar6 = *(int *)(in_ECX + 0x80);
        *(int *)(in_ECX + 0x80) = iVar6 + 1;
        puVar2 = (uint *)(*(int *)(in_ECX + 0x78) + iVar6 * 4);
        if (puVar2 != (uint *)0x0) {
          *puVar2 = uVar7;
        }
      }
      uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  else {
    uVar7 = 0x10;
    if (0x10 < (int)param_4) {
      uVar7 = param_4;
    }
    uVar8 = param_1 + 0xfU & 0xfffffff0;
    if ((int)uVar8 < (int)uVar7) {
      uVar8 = uVar7;
    }
    param_1 = 0x1900;
    if (param_2 < 0x1900) {
      param_1 = param_2;
    }
    param_4 = uVar7;
    if ((int)uVar8 < param_1) {
      do {
        piVar3 = *(int **)(in_ECX + 0x78);
        iVar6 = uVar8 - (int)uVar8 % (int)param_4;
        iVar5 = *(int *)(in_ECX + 0x80);
        piVar1 = piVar3 + iVar5;
        for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
          if (iVar6 == *piVar3) goto LAB_0043101a;
        }
        iVar4 = iVar5 + 1;
        if (*(int *)(in_ECX + 0x7c) < iVar4) {
          if (iVar4 < 0) {
            iVar4 = iVar5 + 2;
          }
          FUN_00409cf0((iVar4 >> 1) + iVar5 + 9 & 0xfffffff8);
        }
        iVar5 = *(int *)(in_ECX + 0x80);
        *(int *)(in_ECX + 0x80) = iVar5 + 1;
        piVar1 = (int *)(*(int *)(in_ECX + 0x78) + iVar5 * 4);
        if (piVar1 != (int *)0x0) {
          *piVar1 = iVar6;
        }
LAB_0043101a:
        uVar8 = uVar8 + param_4;
      } while ((int)uVar8 < param_1);
    }
  }
  iVar6 = param_3;
  piVar3 = *(int **)(in_ECX + 0x78);
  iVar5 = *(int *)(in_ECX + 0x80);
  piVar1 = piVar3 + iVar5;
  for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
    if (param_3 == *piVar3) goto LAB_004310de;
  }
  if (*(int *)(in_ECX + 0x7c) < iVar5 + 1) {
    FUN_00409cf0((iVar5 + 1) / 2 + iVar5 + 9 & 0xfffffff8);
  }
  iVar5 = *(int *)(in_ECX + 0x80);
  *(int *)(in_ECX + 0x80) = iVar5 + 1;
  piVar1 = (int *)(*(int *)(in_ECX + 0x78) + iVar5 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = iVar6;
  }
LAB_004310de:
  param_2 = (int)&param_1 + 3;
  FUN_00413a90(*(int *)(in_ECX + 0x80) * 4 >> 2,&param_2);
  return;
}

