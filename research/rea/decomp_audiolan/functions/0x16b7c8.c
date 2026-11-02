// rea decompile_all
// name: FUN_0016b7c8
// address: 0x16b7c8
// body: available
// range: 0x16b7c8-0x16b897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016b7c8(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  iVar4 = *(int *)(*param_1 + -0x14);
  (**(code **)(**(int **)((int)param_1 + iVar4 + 0x24) + 0x48))();
  piVar6 = (int *)((int)param_1 + iVar4 + 0x34);
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + iVar4 + 0x38) = 0;
    if (*piVar6 != 0) {
      FUN_0016d744();
    }
    *piVar6 = 0;
  }
  else {
    uVar3 = (uint)*(ushort *)((int)param_1 + iVar4 + 0x38);
    bVar1 = false;
    if (uVar3 != 0) {
      uVar2 = 0;
      do {
        iVar5 = *piVar6;
        if (*(int *)(iVar5 + uVar2 * 4) == param_2) {
          bVar1 = true;
LAB_0016b82c:
          if (uVar2 < *(ushort *)((int)param_1 + iVar4 + 0x38) - 1) {
            uVar7 = *(undefined4 *)(iVar5 + uVar2 * 4 + 4);
          }
          else {
            uVar7 = 0;
          }
          *(undefined4 *)(iVar5 + uVar2 * 4) = uVar7;
        }
        else if (bVar1) goto LAB_0016b82c;
        uVar3 = uVar3 - 1;
        uVar2 = uVar2 + 1;
      } while (uVar3 != 0);
      if (bVar1) {
        *(short *)((int)param_1 + iVar4 + 0x38) = *(short *)((int)param_1 + iVar4 + 0x38) + -1;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0016b878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)param_1 + iVar4 + 0x24) + 0x4c))();
  return;
}

