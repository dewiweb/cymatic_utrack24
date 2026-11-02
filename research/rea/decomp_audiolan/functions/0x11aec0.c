// rea decompile_all
// name: FUN_0011aec0
// address: 0x11aec0
// body: available
// range: 0x11aec0-0x11af37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x11af34 to 0x10e5e0 FUN_0010e5e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0011aec0(undefined4 param_1,int *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  undefined1 in_CY;
  
  iVar1 = (**(code **)(*(int *)((int)param_2 + *(int *)(*param_2 + -0x38)) + 0x18))
                    (*(int *)(*param_2 + -0x38) + (int)param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = (uint)*(ushort *)(iVar1 + 8);
    in_CY = param_3 <= uVar2;
  }
  if (!(bool)in_CY || (iVar1 == 0 || uVar2 == param_3)) {
    return;
  }
  FUN_0010e620(param_4,param_3 + 1);
  iVar3 = *(int *)(iVar1 + 0x10);
  uVar2 = extraout_r1;
  if (iVar3 != 0) {
    uVar2 = (uint)*(ushort *)(iVar1 + 8);
  }
  if (iVar3 != 0 && param_3 < uVar2) {
    iVar3 = iVar3 + param_3 * 8;
    if (iVar3 != 0) {
      FUN_0010e518(param_4,&LAB_0011af38);
      FUN_0010e5e0(param_4,iVar3);
      return;
    }
    return;
  }
  return;
}

