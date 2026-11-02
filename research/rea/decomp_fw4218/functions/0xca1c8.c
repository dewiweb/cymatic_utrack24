// rea decompile_all
// name: FUN_000ca1c8
// address: 0xca1c8
// body: available
// range: 0xca1c8-0xca35f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xca35c to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000ca350) */
/* WARNING: Removing unreachable block (ram,0x000ca2f4) */

void FUN_000ca1c8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  FUN_001f00bc(param_1 + 0x118);
  iVar3 = *(int *)(*(int *)(param_1 + 0x16c) + 8);
  if (iVar3 != *(int *)(param_1 + 0x16c)) {
    do {
      if ((*(int *)(iVar3 + 0x14) != 0) && (iVar1 = FUN_0000a388(), iVar1 == param_2)) {
        piVar5 = *(int **)(iVar3 + 0x1c);
        if (*(int **)(iVar3 + 0x20) != piVar5) {
          do {
            (**(code **)(*(int *)(*piVar5 + 4) + 0x18))((int *)(*piVar5 + 4),param_3);
            piVar5 = piVar5 + 1;
          } while (*(int **)(iVar3 + 0x20) != piVar5);
        }
        piVar5 = *(int **)(iVar3 + 0x28);
        if (*(int **)(iVar3 + 0x2c) != piVar5) {
          do {
            (**(code **)(*(int *)(*piVar5 + 4) + 0x18))((int *)(*piVar5 + 4),param_3);
            piVar5 = piVar5 + 1;
          } while (*(int **)(iVar3 + 0x2c) != piVar5);
        }
        puVar4 = *(undefined4 **)(param_1 + 0x178);
        if (*(undefined4 **)(param_1 + 0x17c) != puVar4) {
          do {
            (**(code **)(*(int *)*puVar4 + 0x18))
                      ((int *)*puVar4,*(undefined4 *)(iVar3 + 0x10),param_3);
            puVar4 = puVar4 + 1;
          } while (*(undefined4 **)(param_1 + 0x17c) != puVar4);
        }
        iVar1 = FUN_001b6c4c(param_1 + 0x150);
        if (iVar1 != 0) {
          (**(code **)(**(int **)(param_1 + 0x158) + 0x44))
                    (*(int **)(param_1 + 0x158),*(undefined4 *)(iVar3 + 0x10),param_3);
        }
        break;
      }
      iVar1 = *(int *)(iVar3 + 0xc);
      if (*(int *)(iVar3 + 0xc) == 0) {
        iVar1 = *(int *)(iVar3 + 4);
        while (iVar2 = iVar1, iVar3 == *(int *)(iVar2 + 0xc)) {
          iVar3 = iVar2;
          iVar1 = *(int *)(iVar2 + 4);
        }
        if (*(int *)(iVar3 + 0xc) != iVar2) {
          iVar3 = iVar2;
        }
      }
      else {
        do {
          iVar3 = iVar1;
          iVar1 = *(int *)(iVar3 + 8);
        } while (*(int *)(iVar3 + 8) != 0);
      }
    } while (iVar3 != *(int *)(param_1 + 0x16c));
  }
  FUN_001f06d4(param_1 + 0x118);
  return;
}

