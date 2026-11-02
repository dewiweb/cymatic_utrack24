// rea decompile_all
// name: FUN_004f3060
// address: 0x4f3060
// body: available
// range: 0x4f3060-0x4f356a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f3060(void)

{
  undefined4 *puVar1;
  uint uVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  DWORD DVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  float fVar13;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705ef0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  DVar7 = timeGetTime();
  if ((DAT_00c8a644 <= DVar7) || (DVar7 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar7;
  }
  uVar2 = *(uint *)(in_ECX + 0x84);
  do {
    if (DVar7 <= uVar2) {
LAB_004f3302:
      local_18 = 0;
      if (0 < *(int *)(in_ECX + 0xb0)) {
        do {
          if (local_18 < *(uint *)(in_ECX + 0xb0)) {
            piVar11 = *(int **)(*(int *)(in_ECX + 0xa8) + local_18 * 4);
          }
          else {
            piVar11 = (int *)0x0;
          }
          fVar13 = (float)((double)(int)(DVar7 - piVar11[2]) +
                          (double)(&DAT_00c24bb0)[-((int)(DVar7 - piVar11[2]) >> 0x1f)]) /
                   (float)((int *)*piVar11)[0xc];
          bVar6 = fVar13 <= 1.0;
          if (!bVar6) {
            fVar13 = 1.0;
          }
          iVar9 = *(int *)*piVar11;
          if (iVar9 == 2) {
            *(float *)(piVar11[1] + 0x10) = fVar13;
          }
          else if (iVar9 == 3) {
            *(float *)(piVar11[1] + 0x10) = 1.0 - fVar13;
          }
          else if (iVar9 == 4) {
            if (0.5 <= fVar13) {
              fVar3 = (float)piVar11[8];
              fVar13 = (((float)piVar11[9] - fVar3) * (fVar13 - 0.5) + fVar3) * (fVar13 - 0.5) +
                       ((fVar3 - (float)piVar11[7]) * 0.5 + (float)piVar11[7]) * 0.5;
            }
            else {
              fVar13 = (((float)piVar11[8] - (float)piVar11[7]) * fVar13 + (float)piVar11[7]) *
                       fVar13;
            }
            *(float *)(piVar11[1] + 8) =
                 ((float)piVar11[5] - (float)piVar11[3]) * fVar13 + (float)piVar11[3];
            *(float *)(piVar11[1] + 0xc) =
                 ((float)piVar11[6] - (float)piVar11[4]) * fVar13 + (float)piVar11[4];
          }
          if (bVar6) {
            local_18 = local_18 + 1;
          }
          else {
            puVar12 = (undefined4 *)0x0;
            if (local_18 < *(uint *)(in_ECX + 0xb0)) {
              puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xa8) + local_18 * 4);
              puVar4 = (undefined4 *)*puVar1;
              if (puVar4 != (undefined4 *)0x0) {
                puStack_34 = (undefined4 *)0x0;
                puStack_38 = (undefined4 *)0x4f3484;
                FUN_004bfe14();
                puVar12 = puVar4;
              }
              *(int *)(in_ECX + 0xb0) = *(int *)(in_ECX + 0xb0) + -1;
              if (0 < (int)(*(int *)(in_ECX + 0xb0) - local_18)) {
                puStack_34 = puVar1 + 1;
                uStack_3c = 0x4f34aa;
                puStack_38 = puVar1;
                FUN_004c1df0();
              }
            }
            iVar9 = *(int *)(in_ECX + 0xb0);
            iVar5 = *(int *)(in_ECX + 0xac);
            if (((iVar9 * 2 < iVar5) && (iVar9 < iVar5)) && (iVar5 != iVar9)) {
              if (iVar9 < 1) {
                puStack_34 = (undefined4 *)0x4f350a;
                FID_conflict__free(*(void **)(in_ECX + 0xa8));
                *(undefined4 *)(in_ECX + 0xa8) = 0;
              }
              else {
                puStack_34 = *(undefined4 **)(in_ECX + 0xa8);
                if (puStack_34 == (undefined4 *)0x0) {
                  puStack_34 = (undefined4 *)0x4f34e3;
                  uVar8 = FUN_004c554b();
                  *(undefined4 *)(in_ECX + 0xa8) = uVar8;
                }
                else {
                  puStack_38 = (undefined4 *)0x4f34f4;
                  uVar8 = FUN_004c553b();
                  *(undefined4 *)(in_ECX + 0xa8) = uVar8;
                }
              }
              *(int *)(in_ECX + 0xac) = iVar9;
            }
            puStack_38 = (undefined4 *)0x4f3525;
            puStack_34 = puVar12;
            FUN_004bfe14();
          }
        } while ((int)local_18 < *(int *)(in_ECX + 0xb0));
      }
      FUN_006e6400(&uStack_3c);
      FUN_006ce9f0(1);
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(in_ECX + 0x88) == 0) {
      FUN_0040f080();
      if (*(int *)(in_ECX + 0xa0) != 0) {
        puStack_34 = (undefined4 *)0x4f30e7;
        FID_conflict__free(*(void **)(in_ECX + 0x9c));
        *(undefined4 *)(in_ECX + 0x9c) = 0;
        *(undefined4 *)(in_ECX + 0xa0) = 0;
      }
      *(undefined4 *)(in_ECX + 0xa4) = 0;
      iVar9 = *(int *)(in_ECX + 0xb0);
      while (0 < iVar9) {
        iVar9 = *(int *)(in_ECX + 0xb0) + -1;
        *(int *)(in_ECX + 0xb0) = iVar9;
        puStack_34 = *(undefined4 **)(*(int *)(in_ECX + 0xa8) + iVar9 * 4);
        puStack_38 = (undefined4 *)0x4f312d;
        FUN_004bfe14();
        iVar9 = *(int *)(in_ECX + 0xb0);
      }
      if (*(int *)(in_ECX + 0xac) != 0) {
        puStack_34 = (undefined4 *)0x4f314d;
        FID_conflict__free(*(void **)(in_ECX + 0xa8));
        *(undefined4 *)(in_ECX + 0xa8) = 0;
        *(undefined4 *)(in_ECX + 0xac) = 0;
      }
      *(undefined4 *)(in_ECX + 0xb0) = 0;
    }
    if ((*(uint *)(in_ECX + 0x94) <= *(uint *)(in_ECX + 0x88)) ||
       (puVar12 = *(undefined4 **)(*(int *)(in_ECX + 0x8c) + *(uint *)(in_ECX + 0x88) * 4),
       puVar12 == (undefined4 *)0x0)) goto LAB_004f3302;
    switch(*puVar12) {
    case 0:
    case 1:
      puStack_34 = (undefined4 *)0x4f31ad;
      operator_new(0x24);
      local_8 = 0;
      puStack_38 = (undefined4 *)0x4f31c3;
      puStack_34 = puVar12;
      uVar8 = FUN_004f2d60();
      piVar11 = (int *)(in_ECX + 0x9c);
      local_8 = 0xffffffff;
      if (*(int *)(in_ECX + 0xa0) < *(int *)(in_ECX + 0xa4) + 1) {
        puStack_34 = (undefined4 *)0x4f31f6;
        FUN_00409cf0();
      }
LAB_004f31f6:
      iVar9 = piVar11[2];
      piVar11[2] = iVar9 + 1;
      *(undefined4 *)(*piVar11 + iVar9 * 4) = uVar8;
      break;
    case 2:
    case 3:
    case 4:
      uVar2 = *(uint *)(in_ECX + 0xa4);
      uVar10 = 0;
      if (0 < (int)uVar2) {
        do {
          if (uVar10 < uVar2) {
            piVar11 = *(int **)(*(int *)(in_ECX + 0x9c) + uVar10 * 4);
          }
          else {
            piVar11 = (int *)0x0;
          }
          if (*(int *)(*piVar11 + 4) == puVar12[1]) {
            if ((uVar10 < uVar2) && (*(int *)(*(int *)(in_ECX + 0x9c) + uVar10 * 4) != 0)) {
              puStack_34 = (undefined4 *)0x4f325c;
              operator_new(0x28);
              puStack_38 = (undefined4 *)0x4f326b;
              puStack_34 = puVar12;
              uVar8 = FUN_004f2af0();
              piVar11 = (int *)(in_ECX + 0xa8);
              if (*(int *)(in_ECX + 0xb0) + 1 <= *(int *)(in_ECX + 0xac)) goto LAB_004f31f6;
              puStack_34 = (undefined4 *)0x4f329e;
              FUN_00409cf0();
              iVar9 = *(int *)(in_ECX + 0xb0);
              *(int *)(in_ECX + 0xb0) = iVar9 + 1;
              *(undefined4 *)(*piVar11 + iVar9 * 4) = uVar8;
            }
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar2);
      }
      break;
    case 5:
      *(DWORD *)(in_ECX + 0x84) = puVar12[0xc] + DVar7;
      break;
    case 6:
      FUN_0063eab0();
      ExceptionList = local_10;
      return;
    }
    *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
    if (*(int *)(in_ECX + 0x94) <= *(int *)(in_ECX + 0x88)) {
      *(undefined4 *)(in_ECX + 0x88) = 0;
      goto LAB_004f3302;
    }
    uVar2 = *(uint *)(in_ECX + 0x84);
  } while( true );
}

