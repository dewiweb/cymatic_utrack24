// rea decompile_all
// name: FUN_0016af2c
// address: 0x16af2c
// body: available
// range: 0x16af2c-0x16b01b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16affc to 0x1179d0 FUN_001179d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016af2c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(*param_1 + -0xac) + (int)param_1;
  FUN_001179e0(iVar5);
  piVar4 = (int *)(iVar5 + 0x104);
  if (param_2 == 0) {
    *(undefined2 *)(iVar5 + 0x108) = 0;
    if (*piVar4 != 0) {
      FUN_0016d744();
    }
    *piVar4 = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)(iVar5 + 0x108);
    iVar3 = -1;
    iVar2 = 0;
    if (uVar1 != 0) {
      do {
        iVar6 = *(int *)(*piVar4 + iVar2 * 4);
        if (iVar6 == param_2) goto LAB_0016aff4;
        if ((iVar3 < 0) && (iVar6 == 0)) {
          iVar3 = iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)uVar1);
      if (-1 < iVar3) {
        *(int *)(*piVar4 + iVar3 * 4) = param_2;
        goto LAB_0016aff4;
      }
    }
    iVar3 = FUN_0016d774(uVar1 * 4 + 4,DAT_0016b01c);
    if (iVar3 != 0) {
      if (*piVar4 != 0) {
        FUN_000037d0(iVar3,*piVar4,(uint)*(ushort *)(iVar5 + 0x108) << 2);
        FUN_0016d744(*piVar4);
      }
      *piVar4 = iVar3;
      *(int *)(iVar3 + (uint)*(ushort *)(iVar5 + 0x108) * 4) = param_2;
      *(short *)(iVar5 + 0x108) = *(short *)(iVar5 + 0x108) + 1;
    }
  }
LAB_0016aff4:
  FUN_001179d0(iVar5);
  return;
}

