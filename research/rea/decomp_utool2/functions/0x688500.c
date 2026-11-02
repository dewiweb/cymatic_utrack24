// rea decompile_all
// name: FUN_00688500
// address: 0x688500
// body: available
// range: 0x688500-0x6888db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688500(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  wint_t wVar9;
  wint_t wVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  wint_t _C;
  int in_ECX;
  int iVar15;
  int iVar16;
  int iVar18;
  int *piVar19;
  int local_58;
  int local_54;
  uint local_44;
  char local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined *puStack_2c;
  undefined *puStack_28;
  undefined *puStack_24;
  undefined *local_20;
  undefined *puStack_1c;
  undefined *puStack_18;
  undefined *puStack_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  uint uVar17;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_31 = 0;
  DVar11 = timeGetTime();
  if ((DAT_00c8a644 <= DVar11) || (DVar11 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar11;
  }
  iVar15 = *(int *)(in_ECX + 0x30) + -1;
  if (iVar15 < 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  do {
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + iVar15 * 4);
    if ((*(char *)(puVar2 + 4) != '\0') && (local_58 = puVar2[3] + -1, -1 < local_58)) {
      iVar16 = local_58 * 0xc;
      do {
        puVar12 = (undefined4 *)(puVar2[1] + iVar16);
        puVar3 = (undefined *)*puVar12;
        puVar4 = (undefined *)puVar12[1];
        puVar5 = (undefined *)puVar12[2];
        _C = (wint_t)puVar3;
        wVar9 = _C;
        if (((uint)puVar3 & 0x10000) == 0) {
          puVar1 = puVar3;
          if ((ushort)(_C - 0x61) < 0x1a) {
            puVar1 = puVar3 + -0x20;
          }
          uVar17 = (uint)puVar1 & 0xffff;
          iVar13 = 0;
          local_30 = &UNK_00bc002c;
          puStack_2c = &UNK_00bb002b;
          puStack_28 = &UNK_00bd002d;
          puStack_24 = &UNK_00be002e;
          local_10 = 0xdb005b;
          local_20 = &UNK_00ba003b;
          puStack_1c = &UNK_00ba003a;
          puStack_18 = &UNK_00bf002f;
          puStack_14 = &UNK_00bf003f;
          local_c = 0xdd005d;
          do {
            if ((short)uVar17 == *(short *)((int)&local_30 + iVar13 * 2)) {
              uVar17 = (uint)*(ushort *)((int)&local_30 + iVar13 * 2 + 2);
            }
            wVar9 = (wint_t)uVar17;
            iVar13 = iVar13 + 2;
          } while (iVar13 < 0x14);
        }
        uVar8 = GetAsyncKeyState((int)(short)wVar9);
        if (((uVar8 & 0x8000) == 0) || (local_32 = '\x01', (((uint)puVar4 ^ DAT_00c8a9c8) & 7) != 0)
           ) {
          local_32 = '\0';
        }
        uVar17 = *(uint *)(in_ECX + 0x3c);
        local_44 = 0;
        do {
          do {
            do {
              uVar17 = uVar17 - 1;
              if ((int)uVar17 < 0) {
                cVar7 = '\0';
                goto LAB_0068868f;
              }
              puVar12 = *(undefined4 **)(*(int *)(in_ECX + 0x34) + uVar17 * 4);
            } while ((puVar4 != (undefined *)puVar12[1]) ||
                    (((puVar5 != (undefined *)puVar12[2] && (puVar5 != (undefined *)0x0)) &&
                     ((undefined *)puVar12[2] != (undefined *)0x0))));
            if (puVar3 == (undefined *)*puVar12) goto LAB_00688728;
          } while ((0xff < (int)puVar3) || (0xff < (int)*puVar12));
          wVar9 = _towlower(_C);
          wVar10 = _towlower((wint_t)*puVar12);
        } while (wVar9 != wVar10);
LAB_00688728:
        cVar7 = '\x01';
        local_31 = 1;
        local_44 = uVar17;
LAB_0068868f:
        if (local_32 != cVar7) {
          local_54 = 0;
          if (local_32 == '\0') {
            uVar17 = *(uint *)(*(int *)(local_44 * 4 + *(int *)(in_ECX + 0x34)) + 0xc);
            if (uVar17 < DVar11) {
              local_54 = DVar11 - uVar17;
            }
            iVar13 = 0;
            if (local_44 < *(uint *)(in_ECX + 0x3c)) {
              piVar19 = (int *)(*(int *)(in_ECX + 0x34) + local_44 * 4);
              iVar18 = *piVar19;
              if (iVar18 != 0) {
                FUN_004bfe14(0,0x10);
                iVar13 = iVar18;
              }
              *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + -1;
              iVar18 = *(int *)(in_ECX + 0x3c) - local_44;
              if (0 < iVar18) {
                FUN_004c1df0(piVar19,piVar19 + 1,iVar18 * 4);
              }
            }
            iVar18 = *(int *)(in_ECX + 0x3c);
            iVar6 = *(int *)(in_ECX + 0x38);
            if (((iVar18 * 2 < iVar6) && (iVar18 < iVar6)) && (iVar6 != iVar18)) {
              if (iVar18 < 1) {
                FID_conflict__free(*(void **)(in_ECX + 0x34));
                *(undefined4 *)(in_ECX + 0x34) = 0;
              }
              else if (*(int *)(in_ECX + 0x34) == 0) {
                uVar14 = FUN_004c554b();
                *(undefined4 *)(in_ECX + 0x34) = uVar14;
              }
              else {
                uVar14 = FUN_004c553b(*(int *)(in_ECX + 0x34),iVar18 * 4);
                *(undefined4 *)(in_ECX + 0x34) = uVar14;
              }
              *(int *)(in_ECX + 0x38) = iVar18;
            }
            FUN_004bfe14(iVar13,0x10);
          }
          else {
            puVar12 = operator_new(0x10);
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            *puVar12 = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            *puVar12 = puVar3;
            puVar12[1] = puVar4;
            puVar12[2] = puVar5;
            puVar12[3] = DVar11;
            iVar13 = *(int *)(in_ECX + 0x3c);
            iVar18 = iVar13 + 1;
            if ((int)*(uint *)(in_ECX + 0x38) < iVar18) {
              if (iVar18 < 0) {
                iVar18 = iVar13 + 2;
              }
              uVar17 = iVar13 + 9 + (iVar18 >> 1) & 0xfffffff8;
              if (*(uint *)(in_ECX + 0x38) != uVar17) {
                if ((int)uVar17 < 1) {
                  FID_conflict__free(*(void **)(in_ECX + 0x34));
                  *(undefined4 *)(in_ECX + 0x34) = 0;
                }
                else if (*(int *)(in_ECX + 0x34) == 0) {
                  uVar14 = FUN_004c554b();
                  *(undefined4 *)(in_ECX + 0x34) = uVar14;
                }
                else {
                  uVar14 = FUN_004c553b(*(int *)(in_ECX + 0x34),uVar17 * 4);
                  *(undefined4 *)(in_ECX + 0x34) = uVar14;
                }
                *(uint *)(in_ECX + 0x38) = uVar17;
              }
            }
            iVar13 = *(int *)(in_ECX + 0x3c);
            *(int *)(in_ECX + 0x3c) = iVar13 + 1;
            *(undefined4 **)(*(int *)(in_ECX + 0x34) + iVar13 * 4) = puVar12;
          }
          puStack_28 = (undefined *)0x0;
          puStack_2c = (undefined *)*puVar2;
          local_10 = CONCAT31(local_10._1_3_,local_32);
          local_c = local_54;
          local_20 = param_2;
          puStack_24 = (undefined *)0x1;
          puStack_1c = puVar3;
          puStack_18 = puVar4;
          puStack_14 = puVar5;
          FUN_00689ae0(&puStack_2c,0);
          local_31 = 1;
        }
        local_58 = local_58 + -1;
        iVar16 = iVar16 + -0xc;
      } while (-1 < local_58);
    }
    iVar15 = iVar15 + -1;
    if (iVar15 < 0) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,local_31);
      return;
    }
  } while( true );
}

