// rea decompile_all
// name: FUN_000781f8
// address: 0x781f8
// body: available
// range: 0x781f8-0x78337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78334 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00078328) */
/* WARNING: Removing unreachable block (ram,0x00078248) */

void FUN_000781f8(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  
  FUN_001a0700(param_1 + 0x148);
  piVar6 = *(int **)(param_1 + 0x2e8);
  for (piVar4 = (int *)*piVar6; piVar4 != piVar6; piVar4 = (int *)*piVar4) {
    if (piVar4[2] == param_2) goto LAB_0007832c;
  }
  piVar4 = (int *)(param_1 + 0x2d8);
  puVar5 = *(undefined4 **)(param_1 + 0x2dc);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_1 + 0x2e0);
    if (puVar5 == *(undefined4 **)(param_1 + 0x2e4)) {
      uVar7 = 1;
      if (*piVar4 != 0) {
        uVar1 = *(uint *)(*piVar4 + 4);
        uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar7 < uVar1 + 1) {
          uVar7 = uVar1 + 1;
        }
      }
      piVar2 = (int *)FUN_0010f82c(0xc,0);
      iVar3 = FUN_0010f82c(uVar7 * 0xc,0);
      piVar2[2] = iVar3;
      *piVar2 = *piVar4;
      piVar2[1] = uVar7;
      *piVar4 = (int)piVar2;
      puVar5 = (undefined4 *)piVar2[2];
      *(undefined4 **)(param_1 + 0x2e0) = puVar5;
      *(undefined4 **)(param_1 + 0x2e4) = puVar5 + uVar7 * 3;
    }
    *(undefined4 **)(param_1 + 0x2e0) = puVar5 + 3;
  }
  else {
    *(undefined4 *)(param_1 + 0x2dc) = *puVar5;
  }
  if (puVar5 + 2 != (int *)0x0) {
    puVar5[2] = param_2;
  }
  *puVar5 = piVar6;
  puVar5[1] = piVar6[1];
  *(undefined4 **)piVar6[1] = puVar5;
  piVar6[1] = (int)puVar5;
  *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
LAB_0007832c:
  FUN_001a0d18(param_1 + 0x148);
  return;
}

