// rea decompile_all
// name: FUN_004452e0
// address: 0x4452e0
// body: available
// range: 0x4452e0-0x4454ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004452e0(char param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  
  iVar5 = 1;
  if (param_1 == '\0') {
    iVar2 = *(int *)(in_ECX + 0x1c);
    if (1 < iVar2) {
      piVar3 = *(int **)(in_ECX + 0x14);
      do {
        piVar3 = piVar3 + 1;
        if (*piVar3 == -1) {
          return iVar5;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar2);
    }
    if (((int)*(uint *)(in_ECX + 0x18) < iVar2 + 1) &&
       (uVar6 = iVar2 + 9 + (iVar2 + 1) / 2 & 0xfffffff8, *(uint *)(in_ECX + 0x18) != uVar6)) {
      if ((int)uVar6 < 1) {
        FID_conflict__free(*(void **)(in_ECX + 0x14));
        *(undefined4 *)(in_ECX + 0x14) = 0;
      }
      else if (*(int *)(in_ECX + 0x14) == 0) {
        uVar4 = FUN_004c554b();
        *(undefined4 *)(in_ECX + 0x14) = uVar4;
      }
      else {
        uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x14),uVar6 * 4);
        *(undefined4 *)(in_ECX + 0x14) = uVar4;
      }
      *(uint *)(in_ECX + 0x18) = uVar6;
    }
    iVar5 = *(int *)(in_ECX + 0x1c);
    *(int *)(in_ECX + 0x1c) = iVar5 + 1;
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x14) + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0xffffffff;
    }
    iVar5 = *(int *)(in_ECX + 0x10) + 1;
    if (((int)*(uint *)(in_ECX + 0xc) < iVar5) &&
       (uVar6 = *(int *)(in_ECX + 0x10) + 9 + iVar5 / 2 & 0xfffffff8,
       *(uint *)(in_ECX + 0xc) != uVar6)) {
      if ((int)uVar6 < 1) {
        FID_conflict__free(*(void **)(in_ECX + 8));
        *(undefined4 *)(in_ECX + 8) = 0;
      }
      else if (*(int *)(in_ECX + 8) == 0) {
        uVar4 = FUN_004c554b();
        *(undefined4 *)(in_ECX + 8) = uVar4;
      }
      else {
        uVar4 = FUN_004c553b(*(int *)(in_ECX + 8),uVar6 * 4);
        *(undefined4 *)(in_ECX + 8) = uVar4;
      }
      *(uint *)(in_ECX + 0xc) = uVar6;
    }
    iVar5 = *(int *)(in_ECX + 0x10);
    *(int *)(in_ECX + 0x10) = iVar5 + 1;
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    return *(int *)(in_ECX + 0x1c) + -1;
  }
  iVar2 = *(int *)(in_ECX + 0x28);
  if (1 < iVar2) {
    piVar3 = *(int **)(in_ECX + 0x20);
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 == -1) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar2);
  }
  if (((int)*(uint *)(in_ECX + 0x24) < iVar2 + 1) &&
     (uVar6 = iVar2 + 9 + (iVar2 + 1) / 2 & 0xfffffff8, *(uint *)(in_ECX + 0x24) != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free(*(void **)(in_ECX + 0x20));
      *(undefined4 *)(in_ECX + 0x20) = 0;
    }
    else if (*(int *)(in_ECX + 0x20) == 0) {
      uVar4 = FUN_004c554b();
      *(undefined4 *)(in_ECX + 0x20) = uVar4;
    }
    else {
      uVar4 = FUN_004c553b(*(int *)(in_ECX + 0x20),uVar6 * 4);
      *(undefined4 *)(in_ECX + 0x20) = uVar4;
    }
    *(uint *)(in_ECX + 0x24) = uVar6;
  }
  iVar5 = *(int *)(in_ECX + 0x28);
  *(int *)(in_ECX + 0x28) = iVar5 + 1;
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0x20) + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
  }
  return *(int *)(in_ECX + 0x28) + -1;
}

