// rea decompile_all
// name: FUN_000148ac
// address: 0x148ac
// body: available
// range: 0x148ac-0x14a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14a58 to 0x14b7c FUN_00014b7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000148ac(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    iVar1 = FUN_00014bac(*(undefined4 *)(param_1 + 0x164),0);
    if (iVar1 != 0) {
      iVar6 = *(int *)(param_1 + 0x198);
      uVar2 = *(undefined4 *)(param_1 + 0x17c);
      uVar4 = *(undefined4 *)(param_1 + 0x180);
      uVar9 = *(uint *)(param_1 + 0x16c);
      iVar12 = *(int *)(param_1 + 0x174);
      pcVar10 = *(char **)(param_1 + 0x178);
      *(undefined4 *)(iVar1 + 4) = param_4;
      FUN_000122ec(*(undefined4 *)(param_1 + 0x44),iVar1,param_3,param_4,iVar12,uVar9,uVar2,uVar4);
      if (-1 < *pcVar10) {
        iVar8 = (uint)*(ushort *)(iVar1 + -2) + iVar1 + 0x14;
        iVar5 = (uint)*(ushort *)(param_2 + -2) + param_2 + 0x14;
        pcVar3 = pcVar10;
        iVar11 = param_3;
        while( true ) {
          while( true ) {
            if (*pcVar3 < 0) break;
            uVar7 = *(uint *)(iVar5 + *pcVar3 * 4);
            if (uVar9 != 0) {
              uVar7 = uVar9 | uVar7 >> 8;
            }
            *(uint *)(iVar8 + pcVar3[1] * 4) = uVar7;
            pcVar3 = pcVar3 + 2;
          }
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) break;
          iVar8 = iVar8 + iVar12 * 4;
          iVar5 = iVar5 + iVar6 * 4;
          pcVar3 = pcVar10;
        }
      }
      FUN_000157bc(param_1 + 0xe8,iVar1,param_3,param_4);
    }
    iVar1 = FUN_00014bac(*(undefined4 *)(param_1 + 0x168),0);
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x194);
      iVar12 = *(int *)(param_1 + 0x198);
      uVar4 = *(undefined4 *)(param_1 + 400);
      pcVar10 = *(char **)(param_1 + 0x18c);
      iVar6 = *(int *)(param_1 + 0x188);
      *(undefined4 *)(iVar1 + 4) = param_4;
      FUN_000122ec(*(undefined4 *)(param_1 + 0x44),iVar1,param_3,param_4,iVar6,0,uVar4,uVar2);
      if (-1 < *pcVar10) {
        iVar8 = (uint)*(ushort *)(param_2 + -2) + param_2 + 0x14;
        iVar5 = (uint)*(ushort *)(iVar1 + -2) + iVar1 + 0x14;
        pcVar3 = pcVar10;
        iVar11 = param_3;
        while( true ) {
          while( true ) {
            if (*pcVar3 < 0) break;
            *(undefined4 *)(iVar5 + pcVar3[1] * 4) = *(undefined4 *)(iVar8 + *pcVar3 * 4);
            pcVar3 = pcVar3 + 2;
          }
          iVar11 = iVar11 + -1;
          if (iVar11 == 0) break;
          iVar5 = iVar5 + iVar6 * 4;
          iVar8 = iVar8 + iVar12 * 4;
          pcVar3 = pcVar10;
        }
      }
      FUN_00012680(param_1 + 0x48,iVar1,param_3,param_4);
    }
  }
  FUN_00014b7c(param_2);
  return;
}

