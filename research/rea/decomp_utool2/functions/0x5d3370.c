// rea decompile_all
// name: FUN_005d3370
// address: 0x5d3370
// body: available
// range: 0x5d3370-0x5d372d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005d3370(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int in_ECX;
  int *piVar5;
  int extraout_ECX;
  int iVar6;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar7;
  bool bVar8;
  int local_50;
  int local_48;
  uint local_44;
  uint local_40;
  int local_34;
  int local_30;
  uint local_2c;
  uint uStack_28;
  int iStack_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_c;
  int local_8;
  
  iVar2 = local_34;
  local_1c = in_ECX;
  do {
    while( true ) {
      if ((*(int *)(in_ECX + 0x58) == 3) && (iVar1 = FUN_005d38f0(), iVar1 < 0)) {
        return iVar1;
      }
      if (*(int *)(in_ECX + 0x58) == 4) {
        local_18 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x48) + 0x1c) + 0xe48);
        while( true ) {
          iVar1 = FUN_005e9d40(1);
          if (iVar1 == -1) {
            return -3;
          }
          if (iVar1 < 1) break;
          iVar1 = FUN_005d7030();
          if (iVar1 == 0) {
            iVar2 = *(int *)(in_ECX + 0x1f8);
            if (((-1 < iVar2) && (iVar2 < *(int *)(in_ECX + 500))) &&
               (*(int *)(in_ECX + 500) != iVar2)) {
              return -0x81;
            }
            FUN_005e7d00();
            iVar2 = *(int *)(in_ECX + 0x1f8);
            if ((iVar2 < 0) || (*(int *)(in_ECX + 500) <= iVar2)) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(in_ECX + 500) - iVar2;
            }
            *(double *)(in_ECX + 0x70) =
                 (double)(iVar2 << ((byte)local_18 & 0x1f)) + *(double *)(in_ECX + 0x70);
            *(double *)(in_ECX + 0x68) = (double)(local_50 << 3) + *(double *)(in_ECX + 0x68);
            if (((local_44 & local_40) != 0xffffffff) && (local_48 == 0)) {
              uStack_28 = local_40;
              local_2c = local_44;
              if (*(int *)(in_ECX + 4) == 0) {
                iVar2 = 0;
              }
              else {
                iVar2 = *(int *)(in_ECX + 0x60);
                if (0 < iVar2) {
                  puVar4 = (uint *)(iVar2 * 0x10 + *(int *)(in_ECX + 0x44));
                  local_2c = local_44 - *puVar4;
                  uStack_28 = (local_40 - *(int *)(iVar2 * 0x10 + 4 + *(int *)(in_ECX + 0x44))) -
                              (uint)(local_44 < *puVar4);
                }
              }
              if (((int)uStack_28 < 1) && ((int)uStack_28 < 0)) {
                uStack_28 = 0;
                local_2c = 0;
              }
              iVar1 = *(int *)(in_ECX + 0x1f8);
              if ((iVar1 < 0) || (*(int *)(in_ECX + 500) <= iVar1)) {
                iVar1 = 0;
              }
              else {
                iVar1 = *(int *)(in_ECX + 500) - iVar1;
              }
              local_8 = 0;
              uVar3 = iVar1 << ((byte)local_18 & 0x1f);
              uVar7 = local_2c - uVar3;
              iVar1 = (uStack_28 - ((int)uVar3 >> 0x1f)) - (uint)(local_2c < uVar3);
              local_2c = 0;
              uStack_28 = 0;
              iStack_20 = 0;
              if (iVar2 < 2) {
                local_18 = 0;
                local_c = 0;
              }
              else {
                puVar4 = (uint *)(*(int *)(in_ECX + 0x44) + 0x18);
                iVar6 = (iVar2 - 2U >> 1) + 1;
                local_8 = iVar6 * 2;
                local_c = 0;
                local_14 = 0;
                do {
                  local_18 = iVar6;
                  bVar8 = CARRY4(local_c,puVar4[-4]);
                  local_c = local_c + puVar4[-4];
                  iStack_20 = iStack_20 + puVar4[-3] + (uint)bVar8;
                  bVar8 = CARRY4(local_2c,*puVar4);
                  local_2c = local_2c + *puVar4;
                  uStack_28 = local_14 + puVar4[1] + (uint)bVar8;
                  puVar4 = puVar4 + 8;
                  iVar6 = local_18 + -1;
                  in_ECX = local_1c;
                  local_18 = iStack_20;
                  local_14 = uStack_28;
                } while (iVar6 != 0);
              }
              if (local_8 < iVar2) {
                puVar4 = (uint *)(local_8 * 0x10 + 8 + *(int *)(in_ECX + 0x44));
                bVar8 = CARRY4(uVar7,*puVar4);
                uVar7 = uVar7 + *puVar4;
                iVar1 = iVar1 + *(int *)(local_8 * 0x10 + 0xc + *(int *)(in_ECX + 0x44)) +
                        (uint)bVar8;
                in_ECX = local_1c;
              }
              *(uint *)(in_ECX + 0x50) = local_2c + local_c + uVar7;
              *(uint *)(in_ECX + 0x54) =
                   uStack_28 + local_18 + (uint)CARRY4(local_2c,local_c) + iVar1 +
                   (uint)CARRY4(local_2c + local_c,uVar7);
            }
            return 1;
          }
        }
      }
      if (*(int *)(in_ECX + 0x58) < 2) break;
      do {
        FUN_005d4950(0xffffffff,0xffffffff);
        iVar2 = local_34;
        if (extraout_EDX < 0) {
          return -2;
        }
        *(double *)(in_ECX + 0x68) = (double)(local_30 << 3) + *(double *)(in_ECX + 0x68);
        if (*(int *)(in_ECX + 0x58) != 4) goto LAB_005d34cb;
        if (*(int *)(in_ECX + 0x5c) == *(int *)(local_34 + 0xe)) goto LAB_005d34c1;
      } while ((*(byte *)(local_34 + 5) & 2) == 0);
      FUN_005e8a50();
      FUN_005e9260();
      *(undefined4 *)(in_ECX + 0x58) = 2;
      if (*(int *)(in_ECX + 4) == 0) {
        FUN_005e2a80();
        FUN_005e2cf0();
        break;
      }
LAB_005d34db:
      iVar1 = *(int *)(in_ECX + 0x34);
      iVar6 = 0;
      if (0 < iVar1) {
        piVar5 = *(int **)(in_ECX + 0x40);
        do {
          if (*piVar5 == *(int *)(iVar2 + 0xe)) break;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar6 < iVar1);
      }
      if (iVar6 != iVar1) {
        *(int *)(in_ECX + 0x5c) = *(int *)(iVar2 + 0xe);
        *(int *)(in_ECX + 0x60) = iVar6;
        FUN_005e9e70();
        *(undefined4 *)(extraout_ECX + 0x150) = extraout_EDX_00;
        *(undefined4 *)(in_ECX + 0x58) = 3;
        FUN_005e9f20();
      }
    }
LAB_005d34c1:
    if (*(int *)(in_ECX + 0x58) != 4) {
LAB_005d34cb:
      if (*(int *)(in_ECX + 0x58) < 3) {
        if (*(int *)(in_ECX + 4) != 0) goto LAB_005d34db;
        iVar2 = FUN_005d40a0(*(undefined4 *)(in_ECX + 0x4c),0,0,&local_34);
        if (iVar2 != 0) {
          return iVar2;
        }
        *(int *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x60) + 1;
        *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(in_ECX + 0x1c8);
        iVar2 = local_34;
      }
    }
    FUN_005e9f20();
  } while( true );
}

