// rea decompile_all
// name: FUN_0016ae28
// address: 0x16ae28
// body: available
// range: 0x16ae28-0x16af27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016ae28(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = *(int *)(*param_1 + -0x10);
  (**(code **)(**(int **)((int)param_1 + iVar2 + 0x24) + 0x48))();
  piVar5 = (int *)((int)param_1 + iVar2 + 0x34);
  if (param_2 == 0) {
    *(undefined2 *)((int)param_1 + iVar2 + 0x38) = 0;
    if (*piVar5 != 0) {
      FUN_0016d744();
    }
    *piVar5 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)((int)param_1 + iVar2 + 0x38);
    iVar3 = -1;
    iVar1 = 0;
    if (uVar4 != 0) {
      do {
        iVar6 = *(int *)(*piVar5 + iVar1 * 4);
        if (iVar6 == param_2) goto LAB_0016aef8;
        if ((iVar3 < 0) && (iVar6 == 0)) {
          iVar3 = iVar1;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < (int)uVar4);
      if (-1 < iVar3) {
        *(int *)(*piVar5 + iVar3 * 4) = param_2;
        goto LAB_0016aef8;
      }
    }
    iVar3 = FUN_0016d774(uVar4 * 4 + 4,DAT_0016af28);
    if (iVar3 != 0) {
      if (*piVar5 != 0) {
        FUN_000037d0(iVar3,*piVar5,(uint)*(ushort *)((int)param_1 + iVar2 + 0x38) << 2);
        FUN_0016d744(*piVar5);
      }
      *piVar5 = iVar3;
      *(int *)(iVar3 + (uint)*(ushort *)((int)param_1 + iVar2 + 0x38) * 4) = param_2;
      *(short *)((int)param_1 + iVar2 + 0x38) = *(short *)((int)param_1 + iVar2 + 0x38) + 1;
    }
  }
LAB_0016aef8:
                    /* WARNING: Could not recover jumptable at 0x0016af08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)param_1 + iVar2 + 0x24) + 0x4c))();
  return;
}

