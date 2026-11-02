// rea decompile_all
// name: FUN_000520ec
// address: 0x520ec
// body: available
// range: 0x520ec-0x5248b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000520ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  undefined1 auStack_84 [12];
  uint local_78;
  uint local_74 [10];
  int *local_4c;
  undefined1 auStack_48 [36];
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) {
    pcVar2 = (char *)FUN_001b0c14(param_1);
    if (pcVar2 == (char *)0x0) {
      FUN_00002898(s_ERROR__ConfigNode__addSibling__I_000524bc,param_2);
    }
    else {
      cVar1 = *pcVar2;
      uVar12 = 0;
      if (cVar1 != '\0') {
        do {
          uVar10 = uVar12 + 1;
          if (cVar1 == '/') {
            if (uVar10 == 1) {
              return 0;
            }
            if (0xfffffff1 < uVar12) {
              FUN_00173800(8,DAT_000524f8,DAT_000524f8,uVar12,0xfffffff1);
            }
            puVar7 = &local_78;
            local_78 = 0x80;
            if (0x80 < uVar12) {
              puVar7 = local_74;
            }
            local_74[0] = uVar12;
            iVar3 = FUN_002328a0(&local_4c,*puVar7,uVar12);
            local_4c = (int *)(iVar3 + 0xc);
            if (pcVar2 != (char *)0x0) {
              FUN_000039e0();
            }
            iVar3 = FUN_00052700(param_1,local_4c);
            if (iVar3 == 0) {
              FUN_00052944(auStack_84,local_4c,param_1);
              piVar11 = *(int **)(param_1 + 0x10);
              iVar3 = *(int *)(param_1 + 0x1c);
              piVar9 = (int *)(param_1 + 0xc);
              if (piVar11 == (int *)0x0) {
                piVar11 = *(int **)(param_1 + 0x14);
                if (piVar11 == *(int **)(param_1 + 0x18)) {
                  uVar12 = 1;
                  if (*piVar9 != 0) {
                    uVar8 = *(uint *)(*piVar9 + 4);
                    uVar4 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
                    uVar12 = uVar8 + 1;
                    if (uVar8 + 1 <= uVar4) {
                      uVar12 = uVar4;
                    }
                  }
                  piVar11 = (int *)FUN_00173860(0xc,0);
                  iVar6 = FUN_00173860(uVar12 * 0x2c,0);
                  piVar11[2] = iVar6;
                  *piVar11 = *piVar9;
                  piVar11[1] = uVar12;
                  *piVar9 = (int)piVar11;
                  piVar11 = (int *)piVar11[2];
                  *(int **)(param_1 + 0x14) = piVar11;
                  *(int **)(param_1 + 0x18) = piVar11 + uVar12 * 0xb;
                }
                *(int **)(param_1 + 0x14) = piVar11 + 0xb;
              }
              else {
                *(int *)(param_1 + 0x10) = *piVar11;
              }
              if (piVar11 + 2 != (int *)0x0) {
                FUN_00052a38(piVar11 + 2,auStack_84);
              }
              *piVar11 = iVar3;
              piVar11[1] = *(int *)(iVar3 + 4);
              **(undefined4 **)(iVar3 + 4) = piVar11;
              *(int **)(iVar3 + 4) = piVar11;
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
              iVar3 = FUN_00052700(param_1,local_4c);
              FUN_00052d84(auStack_84);
            }
            uVar5 = FUN_000520ec(iVar3,pcVar2 + uVar10,param_3);
            if (local_4c != DAT_000524fc + 3) {
              piVar11 = local_4c + -3;
              iVar3 = *piVar11;
              if ((iVar3 == -1) ||
                 ((piVar11 != DAT_000524fc && (*piVar11 = iVar3 + -1, iVar3 == 0)))) {
                FUN_00173a54(local_4c + -3,local_4c[-2] + 0xe,0);
              }
            }
            return uVar5;
          }
          cVar1 = pcVar2[uVar10];
          uVar12 = uVar10;
        } while (cVar1 != '\0');
        if ((uVar10 != 0) && (iVar3 = FUN_00052700(param_1,pcVar2), iVar3 == 0)) {
          FUN_00052944(auStack_48,pcVar2,param_1);
          FUN_00052874(auStack_48,param_3);
          piVar9 = (int *)(param_1 + 0xc);
          piVar11 = *(int **)(param_1 + 0x10);
          iVar3 = *(int *)(param_1 + 0x1c);
          if (piVar11 == (int *)0x0) {
            piVar11 = *(int **)(param_1 + 0x14);
            if (piVar11 == *(int **)(param_1 + 0x18)) {
              uVar12 = 1;
              if (*piVar9 != 0) {
                uVar10 = *(uint *)(*piVar9 + 4);
                uVar12 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
                if (uVar12 < uVar10 + 1) {
                  uVar12 = uVar10 + 1;
                }
              }
              piVar11 = (int *)FUN_00173860(0xc,0);
              iVar6 = FUN_00173860(uVar12 * 0x2c,0);
              piVar11[2] = iVar6;
              *piVar11 = *piVar9;
              piVar11[1] = uVar12;
              *piVar9 = (int)piVar11;
              piVar11 = (int *)piVar11[2];
              *(int **)(param_1 + 0x14) = piVar11;
              *(int **)(param_1 + 0x18) = piVar11 + uVar12 * 0xb;
            }
            *(int **)(param_1 + 0x14) = piVar11 + 0xb;
          }
          else {
            *(int *)(param_1 + 0x10) = *piVar11;
          }
          if (piVar11 + 2 != (int *)0x0) {
            FUN_00052a38(piVar11 + 2,auStack_48);
          }
          *piVar11 = iVar3;
          piVar11[1] = *(int *)(iVar3 + 4);
          **(undefined4 **)(iVar3 + 4) = piVar11;
          *(int **)(iVar3 + 4) = piVar11;
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
          FUN_00052d84(auStack_48);
          return 1;
        }
      }
    }
  }
  else {
    FUN_00002898(s_ERROR__ConfigNode__addSibling__V_0005248c);
  }
  return 0;
}

