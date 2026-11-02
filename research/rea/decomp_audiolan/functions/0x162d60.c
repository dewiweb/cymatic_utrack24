// rea decompile_all
// name: FUN_00162d60
// address: 0x162d60
// body: available
// range: 0x162d60-0x162e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x162e44 to 0x10a288 FUN_0010a288 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00162d60(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  bool bVar7;
  undefined1 local_70 [12];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [68];
  
  piVar5 = (int *)(param_1 + -0x10);
  iVar4 = *(int *)(param_1 + 0x494);
  if (*(int *)(param_1 + 0x494) != 0) {
    do {
      iVar2 = FUN_0010f598(param_2,iVar4);
      bVar6 = iVar2 < 0;
      bVar7 = iVar2 == 0;
      if (0 < iVar2) {
        iVar2 = 1;
      }
      if (bVar6) {
        iVar2 = 0;
      }
      if (bVar7) {
        if (iVar4 != 0) {
          FUN_0010a288(piVar5,param_2);
          return;
        }
        break;
      }
      iVar3 = *(int *)(iVar4 + iVar2 * 4 + 0x5c);
      if (iVar3 == 0) break;
      bVar1 = 0;
      if (iVar2 != 0) {
        bVar1 = *(byte *)(iVar4 + 100);
      }
      iVar4 = iVar3;
    } while (iVar2 == 0 || (bVar1 & 0x80) == 0);
  }
  FUN_0010a288(piVar5,param_2);
  FUN_000eea30(local_70);
  FUN_000ed5c8(local_70,param_2,param_3);
  (**(code **)(*piVar5 + 0x28))(piVar5,local_70);
  FUN_000ee880(local_70);
  FUN_000e9f98(auStack_5c);
  FUN_000e9f98(auStack_64);
  return;
}

