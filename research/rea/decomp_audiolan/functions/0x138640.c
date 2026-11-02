// rea decompile_all
// name: FUN_00138640
// address: 0x138640
// body: available
// range: 0x138640-0x138e7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x138e5c to 0xfb8bc FUN_000fb8bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00138640(int *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined1 **ppuVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined2 *puVar11;
  int iVar12;
  uint unaff_r8;
  bool bVar13;
  undefined1 *local_50;
  uint *local_4c;
  undefined1 *puStack_48;
  uint local_44;
  undefined1 auStack_40 [4];
  uint local_3c;
  uint local_38 [5];
  
  uVar1 = (ushort)*(byte *)(param_2 + 0x6d);
  bVar13 = uVar1 == 0x50;
  if (bVar13) {
    uVar1 = *(ushort *)(param_2 + 0xdc);
  }
  if (bVar13 && uVar1 == 0) {
    uVar1 = *(ushort *)(param_2 + 0xe0);
    if (uVar1 == 0x8a) {
      if (*(int *)(param_2 + 0xe4) != 0) {
        FUN_0010e7e0(&puStack_48);
        FUN_00146638(*(undefined4 *)(param_2 + 0xe4));
        FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
        FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),&puStack_48);
        FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
        uVar9 = FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
        local_50 = (undefined1 *)(uVar9 & 0xff);
        (**(code **)(*(int *)param_1[0x24] + 0x10))
                  ((int *)param_1[0x24],param_1,0x81,(short)param_1[0x1f]);
        FUN_0010e7f4(&puStack_48);
        goto LAB_00138e50;
      }
    }
    else if (uVar1 < 0x8b) {
      if (uVar1 == 0x82) {
        if (*(int *)(param_2 + 0xe4) != 0) {
          uVar3 = FUN_00146600();
          FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
          FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
          FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
          FUN_0010e7e0(&puStack_48);
          FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),&puStack_48);
          FUN_0010e7e0(auStack_40);
          FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),auStack_40);
          FUN_0010e7e0(local_38);
          FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),local_38);
          local_4c = local_38;
          local_50 = auStack_40;
          (**(code **)(*(int *)param_1[0x24] + 8))((int *)param_1[0x24],param_1,0x81,uVar3);
          FUN_0010e7f4(local_38);
          FUN_0010e7f4(auStack_40);
          FUN_0010e7f4(&puStack_48);
          goto LAB_00138e50;
        }
      }
      else {
        if (uVar1 == 0x84) {
          (**(code **)(*(int *)param_1[0x24] + 8))((int *)param_1[0x24],param_1,0x81,1);
          goto LAB_00138e50;
        }
        if (uVar1 == 0x85) {
          (**(code **)(*(int *)param_1[0x24] + 8))((int *)param_1[0x24],param_1,0x81,0);
          goto LAB_00138e50;
        }
        if (uVar1 != 0x87) goto LAB_00138e50;
        if (*(int *)(param_2 + 0xe4) != 0) {
          FUN_0010e7e0(&local_50);
          FUN_00146638(*(undefined4 *)(param_2 + 0xe4));
          FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
          FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),&local_50);
          (**(code **)(*(int *)param_1[0x24] + 0xc))
                    ((int *)param_1[0x24],param_1,0x81,(short)param_1[0x1f]);
          ppuVar4 = &local_50;
          goto LAB_00138960;
        }
      }
    }
    else if (uVar1 == 0x8c) {
      if (*(int *)(param_2 + 0xe4) != 0) {
        FUN_00146638();
        FUN_0010e7e0(&puStack_48);
        FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),&puStack_48);
        FUN_0010e7e0(&local_50);
        FUN_001465b8(*(undefined4 *)(param_2 + 0xe4),&local_50);
        FUN_00146600(*(undefined4 *)(param_2 + 0xe4));
        (**(code **)(*(int *)param_1[0x24] + 0x14))
                  ((int *)param_1[0x24],param_1,0x81,(short)param_1[0x1f]);
        FUN_0010e7f4(&local_50);
        ppuVar4 = &puStack_48;
LAB_00138960:
        FUN_0010e7f4(ppuVar4);
        goto LAB_00138e50;
      }
    }
    else {
      if (uVar1 == 0x93) {
        iVar7 = *(int *)(param_2 + 0xe4);
        if (iVar7 == 0) goto LAB_00138968;
        iVar5 = FUN_00146600(iVar7);
        iVar6 = FUN_00146600(iVar7);
        puVar8 = (undefined4 *)FUN_0016d774(iVar5 * 0x14 + 8,DAT_00138e7c);
        if (puVar8 == (undefined4 *)0x0) {
          iVar12 = 0;
LAB_00138a84:
          (**(code **)(*param_1 + 0x10))(param_1,1,0);
        }
        else {
          *puVar8 = 0x14;
          uVar3 = DAT_00138e80;
          puVar8[1] = iVar5;
          iVar12 = FUN_0016dd70(puVar8 + 2,uVar3,0x14,iVar5);
          if (iVar12 == 0) goto LAB_00138a84;
          unaff_r8 = 0;
          if (0 < iVar5) {
            do {
              uVar2 = FUN_00146600(iVar7);
              puVar11 = (undefined2 *)(iVar12 + unaff_r8 * 0x14);
              puVar11[8] = uVar2;
              uVar2 = FUN_00146600(iVar7);
              puVar11[1] = uVar2;
              uVar2 = FUN_00146600(iVar7);
              *puVar11 = uVar2;
              uVar2 = FUN_00146600(iVar7);
              puVar11[2] = uVar2;
              uVar2 = FUN_00146600(iVar7);
              puVar11[9] = uVar2;
              FUN_001465b8(iVar7,puVar11 + 4);
              unaff_r8 = unaff_r8 + 1;
            } while ((int)unaff_r8 < iVar5);
          }
        }
        if (iVar6 != 0) {
          unaff_r8 = 1;
        }
        if (iVar6 != 0) {
          uVar3 = 0x81;
        }
        else {
          unaff_r8 = 0;
          uVar3 = 2;
        }
        (**(code **)(*(int *)param_1[0x24] + 8))((int *)param_1[0x24],param_1,uVar3,iVar12);
LAB_00138e38:
        FUN_00003c70(iVar12,DAT_00138e84);
LAB_00138e44:
        if (unaff_r8 == 0) {
          return;
        }
        goto LAB_00138e50;
      }
      if (uVar1 == 0x95) {
        local_50 = *(undefined1 **)(param_2 + 0xe4);
        if (local_50 != (undefined1 *)0x0) {
          local_3c = FUN_00146600();
          iVar7 = FUN_00146600(local_50);
          uVar9 = local_3c;
          puVar8 = (undefined4 *)FUN_0016d774(local_3c * 0x14 + 8,DAT_00138e7c);
          if (puVar8 == (undefined4 *)0x0) {
            iVar12 = 0;
          }
          else {
            *puVar8 = 0x14;
            uVar3 = DAT_00138e80;
            puVar8[1] = uVar9;
            iVar12 = FUN_0016dd70(puVar8 + 2,uVar3,0x14,uVar9);
          }
          unaff_r8 = (uint)(iVar7 != 0);
          if (iVar12 != 0) {
            uVar9 = FUN_00146600(local_50);
            iVar7 = FUN_00146600(local_50);
            local_44 = uVar9 | iVar7 << 0x10;
            FUN_0014602c(local_50,0xfffffffc);
            uVar9 = 0;
            if (local_3c != 0) {
              local_38[0] = local_3c - 1;
              do {
                uVar10 = FUN_00146600(local_50);
                iVar7 = FUN_00146600(local_50);
                uVar10 = uVar10 | iVar7 << 0x10;
                uVar2 = FUN_00146600(local_50);
                puVar11 = (undefined2 *)(iVar12 + uVar9 * 0x14);
                puVar11[8] = uVar2;
                uVar2 = FUN_00146600(local_50);
                puVar11[1] = uVar2;
                uVar2 = FUN_00146600(local_50);
                *puVar11 = uVar2;
                uVar2 = FUN_00146600(local_50);
                puVar11[2] = uVar2;
                uVar2 = FUN_00146600(local_50);
                puVar11[9] = uVar2;
                FUN_001465b8(local_50,puVar11 + 4);
                if (uVar10 != local_44) {
                  (**(code **)(*(int *)param_1[0x24] + 0xc))
                            ((int *)param_1[0x24],param_1,2,local_44);
                  local_44 = uVar10;
                }
                if (uVar9 == local_38[0]) {
                  (**(code **)(*(int *)param_1[0x24] + 0xc))((int *)param_1[0x24],param_1);
                }
                uVar9 = uVar9 + 1 & 0xfffeffff;
              } while (uVar9 < local_3c);
            }
            goto LAB_00138e38;
          }
LAB_00138e60:
          (**(code **)(*param_1 + 0x10))(param_1,1,0);
          goto LAB_00138e44;
        }
      }
      else {
        if (uVar1 != 0x97) goto LAB_00138e50;
        local_50 = *(undefined1 **)(param_2 + 0xe4);
        if (local_50 != (undefined1 *)0x0) {
          local_3c = FUN_00146600();
          iVar7 = FUN_00146600(local_50);
          uVar9 = local_3c;
          puVar8 = (undefined4 *)FUN_0016d774(local_3c * 0x14 + 8,DAT_00138e7c);
          if (puVar8 == (undefined4 *)0x0) {
            iVar12 = 0;
          }
          else {
            *puVar8 = 0x14;
            uVar3 = DAT_00138e80;
            puVar8[1] = uVar9;
            iVar12 = FUN_0016dd70(puVar8 + 2,uVar3,0x14,uVar9);
          }
          unaff_r8 = (uint)(iVar7 != 0);
          if (iVar12 != 0) {
            uVar9 = FUN_00146600(local_50);
            iVar7 = FUN_00146600(local_50);
            local_44 = uVar9 | iVar7 << 0x10;
            FUN_0014602c(local_50,0xfffffffc);
            uVar9 = 0;
            if (local_3c != 0) {
              local_38[0] = local_3c - 1;
              do {
                uVar10 = FUN_00146600(local_50);
                iVar7 = FUN_00146600(local_50);
                uVar10 = uVar10 | iVar7 << 0x10;
                uVar2 = FUN_00146600(local_50);
                puVar11 = (undefined2 *)(iVar12 + uVar9 * 0x14);
                puVar11[8] = uVar2;
                uVar2 = FUN_00146600(local_50);
                puVar11[1] = uVar2;
                uVar2 = FUN_00146600(local_50);
                *puVar11 = uVar2;
                uVar2 = FUN_00146600(local_50);
                puVar11[2] = uVar2;
                uVar2 = FUN_00146600(local_50);
                puVar11[9] = uVar2;
                FUN_001465b8(local_50,puVar11 + 4);
                if (uVar10 != local_44) {
                  (**(code **)(*(int *)param_1[0x24] + 0x10))
                            ((int *)param_1[0x24],param_1,2,local_44);
                  local_44 = uVar10;
                }
                if (uVar9 == local_38[0]) {
                  (**(code **)(*(int *)param_1[0x24] + 0x10))((int *)param_1[0x24],param_1);
                }
                uVar9 = uVar9 + 1 & 0xfffeffff;
              } while (uVar9 < local_3c);
            }
            goto LAB_00138e38;
          }
          goto LAB_00138e60;
        }
      }
    }
  }
LAB_00138968:
  (**(code **)(*param_1 + 0x10))(param_1,1,0);
LAB_00138e50:
  FUN_000fb8bc(param_1);
  return;
}

