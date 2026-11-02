// rea decompile_all
// name: FUN_0016223c
// address: 0x16223c
// body: available
// range: 0x16223c-0x1622fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1622f8 to 0xe5b54 FUN_000e5b54 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016223c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_000b9aac();
  if (param_4 != 0x1000) {
    return;
  }
  iVar5 = *(int *)(iVar2 + 0x158);
  uVar3 = *(int *)(iVar2 + 0x15c) - iVar5;
  if (uVar3 < 0x200) {
    uVar3 = (uint)((ulonglong)(param_5 * uVar3) * (ulonglong)DAT_001622fc >> 0x2f);
  }
  else {
    if (uVar3 < 0x600) {
      iVar2 = 0x100;
    }
    else {
      iVar2 = 0x200;
    }
    if (0x7fff < param_5) {
      lVar1 = (ulonglong)(param_5 - 0x8000) * (ulonglong)(uVar3 - iVar2);
      iVar4 = FUN_0000243c((int)lVar1,
                           (uVar3 - iVar2) * ((int)(param_5 - 0x8000) >> 0x1f) +
                           (int)((ulonglong)lVar1 >> 0x20),DAT_00162304,0);
      iVar5 = iVar4 + iVar5 + iVar2;
      goto LAB_001622e0;
    }
    uVar3 = (uint)((ulonglong)DAT_00162300 * (ulonglong)(iVar2 * param_5) + (ulonglong)DAT_00162300
                  >> 0x2d);
  }
  iVar5 = uVar3 + iVar5;
LAB_001622e0:
  *(int *)(param_1 + 0x38) = iVar5;
  FUN_000e5b54(param_1 + -0xc,1,0,0x1000);
  return;
}

