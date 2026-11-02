// rea decompile_all
// name: FUN_0015c49c
// address: 0x15c49c
// body: available
// range: 0x15c49c-0x15c7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0015c610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0015c49c(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  undefined1 *puVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int *local_5c;
  uint local_58;
  int *local_54 [4];
  int *local_44;
  uint local_3c [3];
  int iStack_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  
  iStack_30 = param_1;
  puStack_2c = param_2;
  local_28 = param_3;
  FUN_0006de48(local_54,*param_2,0xffffffff);
  iVar11 = param_1 + 4;
  FUN_001a0700(iVar11);
  piVar1 = _DAT_0015c7ec;
  piVar10 = *(int **)(param_1 + 0x7c);
  if (*(int **)(param_1 + 0x80) != piVar10) {
    local_44 = _DAT_0015c7ec + 3;
    do {
      iVar9 = *piVar10;
      if (iVar9 != 0) {
        piVar2 = (int *)FUN_00003374(local_54[0],s_I__by_name__0015c7ee + 2);
        if ((piVar2 == (int *)0x0) || (piVar2 != local_54[0])) {
          piVar2 = (int *)FUN_00003374(local_54[0],s__by_id__0015c7fc);
          if ((piVar2 != (int *)0x0) &&
             ((piVar2 == local_54[0] && (pcVar8 = (char *)local_54[0][-1], pcVar8 != (char *)0x0))))
          {
            pcVar6 = (char *)((int)local_54[0] + (int)(pcVar8 + -1));
            iVar13 = 2 - ((int)local_54[0] - (int)pcVar6);
            iVar14 = iVar13;
            if (1 < iVar13) {
              iVar14 = (int)local_54[0] - (int)pcVar6;
            }
            iVar3 = 1;
            if (1 < iVar13) {
              do {
                if (*pcVar6 == '/') {
                  if (pcVar6 == (char *)0x0) goto LAB_0015c7bc;
                  uVar4 = (int)pcVar6 - (int)local_54[0];
                  goto LAB_0015c5f0;
                }
                iVar3 = iVar3 + 1;
                pcVar6 = pcVar6 + -1;
              } while (iVar3 < 2 - iVar14);
            }
            uVar4 = 0xffffffff;
LAB_0015c5f0:
            bVar15 = 0xfffffffe < uVar4;
            if (uVar4 != 0xffffffff) {
              pcVar6 = (char *)(uVar4 + 1);
              bVar15 = pcVar6 <= pcVar8;
            }
            if (bVar15 && (uVar4 != 0xffffffff && pcVar8 != pcVar6)) {
              uVar12 = (int)pcVar8 - (uVar4 + 1);
              iVar14 = uVar4 + 1 + (int)local_54[0];
              if (0xfffffff1 < uVar12) {
                FUN_0010f7cc(8,&DAT_0015c804,&DAT_0015c804,uVar12,0xfffffff1);
              }
              piVar2 = local_44;
              if (uVar12 != 0) {
                puVar5 = &local_58;
                local_58 = 0x80;
                if (0x80 < uVar12) {
                  puVar5 = local_3c;
                }
                local_3c[0] = uVar12;
                uVar4 = *puVar5;
                if (0xfffffff1 < uVar4) {
                  FUN_0010f7cc(8,DAT_0015c808,DAT_0015c808,uVar4,0xfffffff1);
                }
                if (uVar4 < uVar12) {
                  FUN_0010f7cc(8,DAT_0015c808,DAT_0015c808,uVar12,uVar4);
                }
                piVar2 = piVar1;
                if (uVar4 != 0) {
                  piVar2 = (int *)FUN_0010f82c(uVar4 + 0xe,0);
                  if (piVar2 != (int *)0x0) {
                    *piVar2 = 0;
                    piVar2[1] = 0;
                    piVar2[2] = 0;
                  }
                  piVar2[1] = uVar4;
                  piVar2[2] = uVar12;
                  *piVar2 = 0;
                  puVar7 = (undefined1 *)((int)piVar2 + uVar12 + 0xc);
                  if (puVar7 != (undefined1 *)0x0) {
                    *puVar7 = 0;
                  }
                }
                piVar2 = piVar2 + 3;
              }
              local_5c = piVar2;
              if (iVar14 != 0) {
                FUN_00003628(piVar2,iVar14,uVar12);
              }
              uVar4 = FUN_0000317c(local_5c);
              FUN_001da44c(&local_5c);
              if (uVar4 == *(byte *)(iVar9 + 0x54)) goto LAB_0015c74c;
            }
          }
        }
        else {
          uVar4 = *(uint *)(*(int *)(iVar9 + 0x44) + -4);
          if ((uint)local_54[0][-1] <= uVar4) {
            uVar4 = local_54[0][-1];
          }
          iVar14 = FUN_0000339c(local_54[0],*(int *)(iVar9 + 0x44),uVar4);
          if ((iVar14 == 0) && (local_54[0][-1] == *(int *)(*(int *)(iVar9 + 0x44) + -4))) {
LAB_0015c74c:
            FUN_00152ae8(iVar9,local_28,1);
            FUN_001a0d18(iVar11);
            if (local_54[0] != piVar1 + 3) {
              piVar10 = local_54[0] + -3;
              iVar11 = *piVar10;
              if ((iVar11 == -1) || ((piVar10 != piVar1 && (*piVar10 = iVar11 + -1, iVar11 == 0))))
              {
                FUN_0010fa20(local_54[0] + -3,local_54[0][-2] + 0xe,0);
              }
            }
            return 1;
          }
        }
      }
LAB_0015c7bc:
      piVar10 = piVar10 + 1;
    } while (*(int **)(param_1 + 0x80) != piVar10);
  }
  FUN_001a0d18(iVar11);
  FUN_001da44c(local_54);
  return 0;
}

