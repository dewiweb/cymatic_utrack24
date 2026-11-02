// rea decompile_all
// name: FUN_001536b0
// address: 0x1536b0
// body: available
// range: 0x1536b0-0x1536bf inclusive
// range: 0x153d0c-0x153eb3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x153eb0 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001536b0(int param_1,int *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_30 [8];
  uint local_28;
  
  uVar2 = *(uint *)(param_1 + 300);
  if (uVar2 == 0) {
    return;
  }
  FUN_001a0700(uVar2 + 0xd8);
  local_28 = uVar2 & 0xffffff00 | 1;
  iVar6 = *(int *)(*(int *)(uVar2 + 0x10c) + 8);
  if (iVar6 != *(int *)(uVar2 + 0x10c)) {
    do {
      uVar1 = *(undefined2 *)(iVar6 + 0x36);
      iVar3 = FUN_001da408(auStack_30,iVar6 + 0x1c);
      *(undefined2 *)(iVar3 + 4) = uVar1;
      piVar7 = (int *)param_2[1];
      iVar9 = param_2[4];
      if (piVar7 == (int *)0x0) {
        if (param_2[2] == param_2[3]) {
          uVar8 = 1;
          if (*param_2 != 0) {
            uVar4 = *(uint *)(*param_2 + 4);
            uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar8 < uVar4 + 1) {
              uVar8 = uVar4 + 1;
            }
          }
          piVar7 = (int *)FUN_0010f82c(0xc,0);
          iVar5 = FUN_0010f82c(uVar8 << 4,0);
          piVar7[2] = iVar5;
          *piVar7 = *param_2;
          piVar7[1] = uVar8;
          *param_2 = (int)piVar7;
          iVar5 = piVar7[2];
          param_2[2] = iVar5;
          param_2[3] = iVar5 + uVar8 * 0x10;
        }
        piVar7 = (int *)param_2[2];
        param_2[2] = (int)(piVar7 + 4);
      }
      else {
        param_2[1] = *piVar7;
      }
      if (piVar7 + 2 != (int *)0x0) {
        iVar5 = FUN_001da408(piVar7 + 2,iVar3);
        *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(iVar3 + 4);
      }
      *piVar7 = iVar9;
      piVar7[1] = *(int *)(iVar9 + 4);
      **(undefined4 **)(iVar9 + 4) = piVar7;
      *(int **)(iVar9 + 4) = piVar7;
      param_2[5] = param_2[5] + 1;
      FUN_001da44c(auStack_30);
      iVar3 = *(int *)(iVar6 + 0xc);
      if (*(int *)(iVar6 + 0xc) == 0) {
        iVar3 = *(int *)(iVar6 + 4);
        while (iVar9 = iVar3, iVar6 == *(int *)(iVar9 + 0xc)) {
          iVar6 = iVar9;
          iVar3 = *(int *)(iVar9 + 4);
        }
        if (*(int *)(iVar6 + 0xc) != iVar9) {
          iVar6 = iVar9;
        }
      }
      else {
        do {
          iVar6 = iVar3;
          iVar3 = *(int *)(iVar6 + 8);
        } while (*(int *)(iVar6 + 8) != 0);
      }
    } while (iVar6 != *(int *)(uVar2 + 0x10c));
  }
  if ((local_28 & 0xff) == 0) {
    return;
  }
  FUN_001a0d18(uVar2 + 0xd8);
  return;
}

