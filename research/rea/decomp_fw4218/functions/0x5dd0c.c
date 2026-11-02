// rea decompile_all
// name: FUN_0005dd0c
// address: 0x5dd0c
// body: available
// range: 0x5dd0c-0x5de01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0005dd44) */

void FUN_0005dd0c(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = DAT_0005de04;
  FUN_001f00bc(DAT_0005de04);
  iVar2 = FUN_0005de08(param_2);
  *param_1 = iVar2;
  if (iVar2 == 0) {
    piVar3 = (int *)FUN_00046c3c();
    iVar2 = piVar3[4];
    piVar6 = (int *)piVar3[1];
    if (piVar6 == (int *)0x0) {
      if (piVar3[2] == piVar3[3]) {
        uVar8 = 1;
        if (*piVar3 != 0) {
          uVar7 = *(uint *)(*piVar3 + 4);
          uVar4 = (uVar7 >> 1) + uVar7 + (uVar7 >> 3);
          uVar8 = uVar7 + 1;
          if (uVar7 + 1 <= uVar4) {
            uVar8 = uVar4;
          }
        }
        piVar6 = (int *)FUN_00173860(0xc,0);
        iVar5 = FUN_00173860(uVar8 * 0x18,0);
        piVar6[2] = iVar5;
        iVar5 = *piVar3;
        piVar6[1] = uVar8;
        *piVar6 = iVar5;
        *piVar3 = (int)piVar6;
        iVar5 = piVar6[2];
        piVar3[2] = iVar5;
        piVar3[3] = iVar5 + uVar8 * 0x18;
      }
      piVar6 = (int *)piVar3[2];
      piVar3[2] = (int)(piVar6 + 6);
    }
    else {
      piVar3[1] = *piVar6;
    }
    if (piVar6 + 2 != (int *)0x0) {
      piVar6[2] = param_2;
      piVar6[3] = 1;
      piVar6[4] = param_3;
      piVar6[5] = param_3;
    }
    *piVar6 = iVar2;
    piVar6[1] = *(int *)(iVar2 + 4);
    **(undefined4 **)(iVar2 + 4) = piVar6;
    *(int **)(iVar2 + 4) = piVar6;
    piVar3[5] = piVar3[5] + 1;
    *param_1 = *(int *)(piVar3[4] + 4) + 8;
  }
  else {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  FUN_001f06d4(uVar1);
  return;
}

