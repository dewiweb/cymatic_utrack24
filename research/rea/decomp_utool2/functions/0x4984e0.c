// rea decompile_all
// name: FUN_004984e0
// address: 0x4984e0
// body: available
// range: 0x4984e0-0x49879f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004986e8) */
/* WARNING: Removing unreachable block (ram,0x00498730) */

int FUN_004984e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int local_14;
  uint local_10;
  int local_8;
  
  iVar7 = 0;
  local_14 = 0;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  local_8 = 0;
  local_10 = 0;
  if (0 < *(int *)(in_ECX + 0xcc)) {
    do {
      iVar5 = 0;
      iVar1 = *(int *)(in_ECX + 0x98);
      iVar7 = (*(int *)(in_ECX + 0xcc) + -1 + *(int *)(in_ECX + 0xa4)) / *(int *)(in_ECX + 0xcc);
      iVar3 = *(int *)(in_ECX + 0xa4) - local_8;
      if (iVar7 < iVar3) {
        iVar3 = iVar7;
      }
      iVar7 = iVar3 + -1;
      if (-1 < iVar7) {
        iVar5 = 0;
        piVar6 = (int *)(*(int *)(in_ECX + 0x9c) + (local_8 + iVar7) * 4);
        do {
          iVar4 = *piVar6;
          piVar6 = piVar6 + -1;
          if (iVar1 < *(int *)(iVar4 + 0x18)) {
            iVar1 = *(int *)(iVar4 + 0x18);
          }
          iVar5 = iVar5 + *(int *)(iVar4 + 0x1c);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      iVar7 = *(int *)(in_ECX + 0xcc) + -2;
      iVar4 = 1;
      if (1 < iVar7) {
        iVar4 = iVar7;
      }
      uVar8 = *(uint *)(in_ECX + 0xe8);
      iVar7 = param_1 / iVar4;
      if (iVar1 + 4 < param_1 / iVar4) {
        iVar7 = iVar1 + 4;
      }
      if (local_10 < uVar8) {
        *(int *)(*(int *)(in_ECX + 0xe0) + local_10 * 4) = iVar7;
      }
      else if (-1 < (int)local_10) {
        iVar1 = uVar8 + 1;
        if (*(int *)(in_ECX + 0xe4) < iVar1) {
          if (iVar1 < 0) {
            iVar1 = uVar8 + 2;
          }
          uVar8 = uVar8 + 9 + (iVar1 >> 1) & 0xfffffff8;
          if (*(uint *)(in_ECX + 0xe4) != uVar8) {
            if ((int)uVar8 < 1) {
              FID_conflict__free(*(void **)(in_ECX + 0xe0));
              *(undefined4 *)(in_ECX + 0xe0) = 0;
            }
            else if (*(int *)(in_ECX + 0xe0) == 0) {
              uVar2 = FUN_004c554b();
              *(undefined4 *)(in_ECX + 0xe0) = uVar2;
            }
            else {
              uVar2 = FUN_004c553b(*(int *)(in_ECX + 0xe0),uVar8 * 4);
              *(undefined4 *)(in_ECX + 0xe0) = uVar2;
            }
            *(uint *)(in_ECX + 0xe4) = uVar8;
          }
        }
        iVar1 = *(int *)(in_ECX + 0xe8);
        *(int *)(in_ECX + 0xe8) = iVar1 + 1;
        piVar6 = (int *)(*(int *)(in_ECX + 0xe0) + iVar1 * 4);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar7;
        }
      }
      iVar7 = local_14 + iVar7;
      iVar1 = *(int *)(in_ECX + 0xd0);
      if (*(int *)(in_ECX + 0xd0) < iVar5) {
        iVar1 = iVar5;
      }
      local_10 = local_10 + 1;
      *(int *)(in_ECX + 0xd0) = iVar1;
      local_8 = local_8 + iVar3;
      local_14 = iVar7;
    } while ((int)local_10 < *(int *)(in_ECX + 0xcc));
  }
  if (*(int *)(in_ECX + 0x90) < param_1) {
    param_1 = *(int *)(in_ECX + 0x90);
  }
  if (param_1 <= iVar7) {
    return iVar7;
  }
  iVar7 = 0;
  if (*(int *)(in_ECX + 0xcc) < 1) {
    return param_1;
  }
  do {
    iVar1 = param_1 / *(int *)(in_ECX + 0xcc);
    if (*(int *)(in_ECX + 0xe8) == 0) {
      if ((*(int *)(in_ECX + 0xe4) < 1) && (*(int *)(in_ECX + 0xe4) != 8)) {
        if (*(int *)(in_ECX + 0xe0) == 0) {
          uVar2 = FUN_004c554b();
          *(undefined4 *)(in_ECX + 0xe0) = uVar2;
        }
        else {
          uVar2 = FUN_004c553b(*(int *)(in_ECX + 0xe0),0x20);
          *(undefined4 *)(in_ECX + 0xe0) = uVar2;
        }
        *(undefined4 *)(in_ECX + 0xe4) = 8;
      }
      iVar5 = *(int *)(in_ECX + 0xe8);
      *(int *)(in_ECX + 0xe8) = iVar5 + 1;
      piVar6 = (int *)(*(int *)(in_ECX + 0xe0) + iVar5 * 4);
      if (piVar6 != (int *)0x0) {
        *piVar6 = iVar1;
      }
    }
    else {
      **(int **)(in_ECX + 0xe0) = iVar1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < *(int *)(in_ECX + 0xcc));
  return param_1;
}

