// rea decompile_all
// name: FUN_0050c960
// address: 0x50c960
// body: available
// range: 0x50c960-0x50cc8d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050c960(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 local_8;
  
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(in_ECX + 0x9e4);
  if (*(int *)(param_1 + 0x10) != 0) {
    FID_conflict__free(*(void **)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FID_conflict__free(*(void **)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FID_conflict__free(*(void **)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    FID_conflict__free(*(void **)(param_1 + 0x24));
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  local_8 = 0;
  if (0 < *(int *)(in_ECX + 0x140)) {
    bVar9 = *(int *)(in_ECX + 0x140) != 0;
    do {
      if (bVar9) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x138) + local_8 * 4);
      }
      else {
        iVar7 = 0;
      }
      if (*(char *)(iVar7 + 0x7b8) == '\0') {
        uVar10 = *(undefined4 *)(iVar7 + 0x7bc);
      }
      else {
        uVar10 = 0;
      }
      iVar5 = *(int *)(param_1 + 0x14);
      iVar4 = iVar5 + 1;
      if ((int)*(uint *)(param_1 + 0x10) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar5 + 2;
        }
        uVar8 = iVar5 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (*(uint *)(param_1 + 0x10) != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free(*(void **)(param_1 + 0xc));
            *(undefined4 *)(param_1 + 0xc) = 0;
          }
          else if (*(int *)(param_1 + 0xc) == 0) {
            uVar2 = FUN_004c554b();
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          else {
            uVar2 = FUN_004c553b(*(int *)(param_1 + 0xc),uVar8 * 4);
            *(undefined4 *)(param_1 + 0xc) = uVar2;
          }
          *(uint *)(param_1 + 0x10) = uVar8;
        }
      }
      iVar5 = *(int *)(param_1 + 0x14);
      *(int *)(param_1 + 0x14) = iVar5 + 1;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xc) + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar10;
      }
      if (*(char *)(iVar7 + 0x7b8) == '\0') {
        uVar10 = *(undefined4 *)(iVar7 + 0x7c0);
      }
      else {
        uVar10 = 0;
      }
      iVar5 = *(int *)(param_1 + 0x20);
      iVar4 = iVar5 + 1;
      if ((int)*(uint *)(param_1 + 0x1c) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar5 + 2;
        }
        uVar8 = iVar5 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (*(uint *)(param_1 + 0x1c) != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free(*(void **)(param_1 + 0x18));
            *(undefined4 *)(param_1 + 0x18) = 0;
          }
          else if (*(int *)(param_1 + 0x18) == 0) {
            uVar2 = FUN_004c554b();
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          else {
            uVar2 = FUN_004c553b(*(int *)(param_1 + 0x18),uVar8 * 4);
            *(undefined4 *)(param_1 + 0x18) = uVar2;
          }
          *(uint *)(param_1 + 0x1c) = uVar8;
        }
      }
      iVar5 = *(int *)(param_1 + 0x20);
      *(int *)(param_1 + 0x20) = iVar5 + 1;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = uVar10;
      }
      iVar5 = *(int *)(param_1 + 0x38);
      uVar6 = *(undefined1 *)(iVar7 + 0x7ba);
      iVar4 = iVar5 + 1;
      if ((int)*(uint *)(param_1 + 0x34) < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar5 + 2;
        }
        uVar8 = iVar5 + 9 + (iVar4 >> 1) & 0xfffffff8;
        if (*(uint *)(param_1 + 0x34) != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free(*(void **)(param_1 + 0x30));
            *(undefined4 *)(param_1 + 0x30) = 0;
          }
          else if (*(int *)(param_1 + 0x30) == 0) {
            uVar10 = FUN_004c554b();
            *(undefined4 *)(param_1 + 0x30) = uVar10;
          }
          else {
            uVar10 = FUN_004c553b(*(int *)(param_1 + 0x30),uVar8);
            *(undefined4 *)(param_1 + 0x30) = uVar10;
          }
          *(uint *)(param_1 + 0x34) = uVar8;
        }
      }
      iVar5 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = iVar5 + 1;
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0x30) + iVar5);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = uVar6;
      }
      if (*(char *)(iVar7 + 0x7b8) == '\0') {
        uVar6 = *(undefined1 *)(iVar7 + 0x7bb);
      }
      else {
        uVar6 = 0;
      }
      iVar7 = *(int *)(param_1 + 0x2c);
      iVar5 = iVar7 + 1;
      if ((int)*(uint *)(param_1 + 0x28) < iVar5) {
        if (iVar5 < 0) {
          iVar5 = iVar7 + 2;
        }
        uVar8 = iVar7 + 9 + (iVar5 >> 1) & 0xfffffff8;
        if (*(uint *)(param_1 + 0x28) != uVar8) {
          if ((int)uVar8 < 1) {
            FID_conflict__free(*(void **)(param_1 + 0x24));
            *(undefined4 *)(param_1 + 0x24) = 0;
          }
          else if (*(int *)(param_1 + 0x24) == 0) {
            uVar10 = FUN_004c554b();
            *(undefined4 *)(param_1 + 0x24) = uVar10;
          }
          else {
            uVar10 = FUN_004c553b(*(int *)(param_1 + 0x24),uVar8);
            *(undefined4 *)(param_1 + 0x24) = uVar10;
          }
          *(uint *)(param_1 + 0x28) = uVar8;
        }
      }
      iVar7 = *(int *)(param_1 + 0x2c);
      *(int *)(param_1 + 0x2c) = iVar7 + 1;
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0x24) + iVar7);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = uVar6;
      }
      local_8 = local_8 + 1;
      bVar9 = local_8 < *(uint *)(in_ECX + 0x140);
    } while ((int)local_8 < (int)*(uint *)(in_ECX + 0x140));
  }
  return;
}

