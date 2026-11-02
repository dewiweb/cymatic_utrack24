// rea decompile_all
// name: FUN_00155c08
// address: 0x155c08
// body: available
// range: 0x155c08-0x155e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x155e04 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00155df0) */
/* WARNING: Removing unreachable block (ram,0x00155df4) */

void FUN_00155c08(int param_1,int *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_30 [8];
  int local_28;
  
  FUN_001a0700(param_1 + 0x124);
  iVar7 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  if (iVar7 != *(int *)(param_1 + 0x1a0)) {
    do {
      sVar1 = *(short *)(iVar7 + 0x26);
      if (sVar1 != 0) {
        bVar10 = *(int *)(*(int *)(iVar7 + 0x28) + -4) != 0;
        sVar2 = 0;
        if (bVar10) {
          sVar2 = *(short *)(iVar7 + 0x2c);
        }
        if (bVar10 && sVar2 != 0) {
          bVar10 = *(int *)(*(int *)(iVar7 + 0x30) + -4) != 0;
          uVar6 = 0;
          if (bVar10) {
            uVar6 = *(uint *)(iVar7 + 0x34);
          }
          bVar11 = uVar6 != 0;
          if (bVar10 && bVar11) {
            uVar6 = (uint)*(byte *)(iVar7 + 0x38);
          }
          if (((bVar10 && bVar11) && uVar6 != 0) && (*(int *)(*(int *)(iVar7 + 0x44) + -4) != 0)) {
            local_28 = FUN_001da408(auStack_30,iVar7 + 0x1c);
            *(short *)(local_28 + 4) = sVar1;
            iVar9 = param_2[4];
            piVar8 = (int *)param_2[1];
            if (piVar8 == (int *)0x0) {
              if (param_2[2] == param_2[3]) {
                uVar6 = 1;
                if (*param_2 != 0) {
                  uVar3 = *(uint *)(*param_2 + 4);
                  uVar6 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
                  if (uVar6 < uVar3 + 1) {
                    uVar6 = uVar3 + 1;
                  }
                }
                piVar8 = (int *)FUN_0010f82c(0xc,0);
                iVar4 = FUN_0010f82c(uVar6 << 4,0);
                piVar8[2] = iVar4;
                *piVar8 = *param_2;
                piVar8[1] = uVar6;
                *param_2 = (int)piVar8;
                iVar4 = piVar8[2];
                param_2[2] = iVar4;
                param_2[3] = iVar4 + uVar6 * 0x10;
              }
              piVar8 = (int *)param_2[2];
              param_2[2] = (int)(piVar8 + 4);
            }
            else {
              param_2[1] = *piVar8;
            }
            iVar4 = local_28;
            if (piVar8 + 2 != (int *)0x0) {
              iVar5 = FUN_001da408(piVar8 + 2,local_28);
              *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar4 + 4);
            }
            *piVar8 = iVar9;
            piVar8[1] = *(int *)(iVar9 + 4);
            **(undefined4 **)(iVar9 + 4) = piVar8;
            *(int **)(iVar9 + 4) = piVar8;
            param_2[5] = param_2[5] + 1;
            FUN_001da44c(auStack_30);
          }
        }
      }
      iVar9 = *(int *)(iVar7 + 0xc);
      if (*(int *)(iVar7 + 0xc) == 0) {
        iVar9 = *(int *)(iVar7 + 4);
        while (iVar4 = iVar9, iVar7 == *(int *)(iVar4 + 0xc)) {
          iVar7 = iVar4;
          iVar9 = *(int *)(iVar4 + 4);
        }
        if (*(int *)(iVar7 + 0xc) != iVar4) {
          iVar7 = iVar4;
        }
      }
      else {
        do {
          iVar7 = iVar9;
          iVar9 = *(int *)(iVar7 + 8);
        } while (*(int *)(iVar7 + 8) != 0);
      }
    } while (iVar7 != *(int *)(param_1 + 0x1a0));
  }
  FUN_001a0d18(param_1 + 0x124);
  return;
}

