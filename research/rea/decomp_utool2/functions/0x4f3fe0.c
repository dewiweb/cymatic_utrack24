// rea decompile_all
// name: FUN_004f3fe0
// address: 0x4f3fe0
// body: available
// range: 0x4f3fe0-0x4f4263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004f3fe0(void)

{
  int *piVar1;
  void *_Memory;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  void *pvStack_28;
  uint local_10;
  int local_8;
  
  local_8 = 0;
  uVar7 = 0;
  if (0 < *(int *)(in_ECX + 0x874)) {
    bVar9 = *(int *)(in_ECX + 0x874) != 0;
    do {
      if (bVar9) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x86c) + uVar7 * 4);
      }
      else {
        iVar2 = 0;
      }
      if (*(int *)(iVar2 + 0x10) != 0) {
        pvStack_28 = (void *)0x4f4022;
        FID_conflict__free(*(void **)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      bVar9 = uVar7 < *(uint *)(in_ECX + 0x874);
    } while ((int)uVar7 < (int)*(uint *)(in_ECX + 0x874));
  }
  local_10 = 0;
  iVar2 = FUN_004ae6c0();
  if (0 < iVar2) {
    do {
      uVar7 = FUN_004ae6c0();
      if (local_10 < uVar7) {
        iVar2 = 0;
        if (0 < *(int *)(in_ECX + 0x224)) {
          uVar7 = local_10;
          do {
            iVar8 = *(int *)(*(int *)(in_ECX + 0x21c) + iVar2 * 4);
            iVar6 = *(int *)(*(int *)(in_ECX + 0x21c) + 4 + iVar2 * 4) - iVar8;
            if ((int)uVar7 < iVar6) {
              uVar7 = iVar8 + uVar7;
              goto LAB_004f40a8;
            }
            iVar2 = iVar2 + 2;
            uVar7 = uVar7 - iVar6;
          } while (iVar2 < *(int *)(in_ECX + 0x224));
        }
        uVar7 = 0;
      }
      else {
        uVar7 = 0xffffffff;
      }
LAB_004f40a8:
      if (uVar7 < *(uint *)(in_ECX + 0x880)) {
        iVar2 = **(int **)(*(int *)(in_ECX + 0x878) + uVar7 * 4);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
          if (uVar7 < *(uint *)(in_ECX + 0x880)) {
            iVar8 = *(int *)(*(int *)(in_ECX + 0x878) + uVar7 * 4);
          }
          else {
            iVar8 = 0;
          }
          if (*(int *)(iVar8 + 4) < 0) {
            iVar8 = 0;
            if (0 < *(int *)(*(int *)(iVar2 + 4) + 0x24)) {
              do {
                piVar3 = *(int **)(iVar2 + 0xc);
                iVar6 = *(int *)(iVar2 + 0x14);
                piVar1 = piVar3 + iVar6;
                for (; piVar3 != piVar1; piVar3 = piVar3 + 1) {
                  if (iVar8 == *piVar3) goto LAB_004f41b8;
                }
                iVar4 = iVar6 + 1;
                if ((int)*(uint *)(iVar2 + 0x10) < iVar4) {
                  if (iVar4 < 0) {
                    iVar4 = iVar6 + 2;
                  }
                  uVar7 = iVar6 + 9 + (iVar4 >> 1) & 0xfffffff8;
                  if (*(uint *)(iVar2 + 0x10) != uVar7) {
                    _Memory = *(void **)(iVar2 + 0xc);
                    if ((int)uVar7 < 1) {
                      pvStack_28 = (void *)0x4f4196;
                      FID_conflict__free(_Memory);
                      *(undefined4 *)(iVar2 + 0xc) = 0;
                    }
                    else if (_Memory == (void *)0x0) {
                      pvStack_28 = (void *)0x4f417a;
                      uVar5 = FUN_004c554b();
                      *(undefined4 *)(iVar2 + 0xc) = uVar5;
                    }
                    else {
                      uStack_2c = 0x4f4188;
                      pvStack_28 = _Memory;
                      uVar5 = FUN_004c553b();
                      *(undefined4 *)(iVar2 + 0xc) = uVar5;
                    }
                    *(uint *)(iVar2 + 0x10) = uVar7;
                  }
                }
                iVar6 = *(int *)(iVar2 + 0x14);
                *(int *)(iVar2 + 0x14) = iVar6 + 1;
                piVar1 = (int *)(*(int *)(iVar2 + 0xc) + iVar6 * 4);
                if (piVar1 != (int *)0x0) {
                  *piVar1 = iVar8;
                }
LAB_004f41b8:
                iVar8 = iVar8 + 1;
              } while (iVar8 < *(int *)(*(int *)(iVar2 + 4) + 0x24));
            }
          }
          else if (uVar7 < *(uint *)(in_ECX + 0x880)) {
            pvStack_28 = (void *)0x4f4103;
            FUN_004097d0();
          }
          else {
            pvStack_28 = (void *)0x4f4115;
            FUN_004097d0();
          }
          local_8 = local_8 + 1;
        }
      }
      local_10 = local_10 + 1;
      iVar2 = FUN_004ae6c0();
    } while ((int)local_10 < iVar2);
  }
  FUN_004f4670();
  if ((*(int *)(in_ECX + 500) == 0) && (*(int *)(in_ECX + 500) != *(int *)(in_ECX + 0x7c))) {
    *(int *)(in_ECX + 500) = *(int *)(in_ECX + 0x7c);
    FUN_006e6400(auStack_30);
    FUN_006ce9f0(1);
    FUN_006e7e60();
  }
  FUN_006e7e60();
  FUN_006e6400(auStack_30);
  FUN_006ce9f0(1);
  return local_8;
}

