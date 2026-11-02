// rea decompile_all
// name: FUN_00102dbc
// address: 0x102dbc
// body: available
// range: 0x102dbc-0x102e9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00102dbc(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_5 == 0) {
    return -0x27;
  }
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = FUN_001f01c4(0x40,1);
  if ((iVar2 != 0) &&
     (piVar3 = (int *)FUN_0012c218(iVar2,param_2,iVar1 == param_2,*(undefined4 *)(param_1 + 0x28)),
     piVar3 != (int *)0x0)) {
    iVar1 = (**(code **)(*piVar3 + 0x20))(piVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_001f01c4(0x40,1);
      if ((iVar1 != 0) && (iVar1 = FUN_00098d34(iVar1,param_2,piVar3), iVar1 != 0)) {
        iVar2 = FUN_00098b08(iVar1,param_2,s_DeframerOut_00102e9c);
        if (iVar2 == 0) {
          *(int *)(param_2 + 0x14) = iVar1;
        }
        return iVar2;
      }
      (**(code **)(*piVar3 + 0x1c))(piVar3);
      return -0x22;
    }
    (**(code **)(*piVar3 + 0x1c))(piVar3);
  }
  return -0x20;
}

