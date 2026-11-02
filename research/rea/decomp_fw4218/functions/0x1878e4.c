// rea decompile_all
// name: FUN_001878e4
// address: 0x1878e4
// body: available
// range: 0x1878e4-0x187a13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x187a10 to 0x184504 FUN_00184504 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001878e4(int *param_1)

{
  int iVar1;
  undefined4 unaff_r6;
  undefined1 auStack_78 [12];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [68];
  undefined1 auStack_20 [16];
  
  if (*(char *)((int)param_1 + 0x4d) == '\x01') {
    return;
  }
  FUN_00189f60(param_1);
  if (*(char *)((int)param_1 + 0x4d) == '\x02') {
    FUN_00189e3c(param_1);
    FUN_00184504(param_1[0x1f],param_1);
    return;
  }
  iVar1 = FUN_001a1558(*(int *)param_1[0x1f] + 0x4a0);
  if (iVar1 == 0) {
    return;
  }
  if (param_1[0x42] == 0) {
    *(undefined1 *)((int)param_1 + 0x4d) = 1;
    FUN_00188330(param_1,3);
    FUN_001a00b4(*(undefined4 *)param_1[0x1f],0);
    FUN_001512cc(auStack_78);
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1);
    if (iVar1 != 0) {
      unaff_r6 = 0;
    }
    if (iVar1 == 0) {
      unaff_r6 = 1;
    }
    (**(code **)(*param_1 + 0xd4))(auStack_20,param_1);
    FUN_00151094(auStack_78,auStack_20,unaff_r6);
    FUN_001a2410(*(int *)param_1[0x1f] + 0x4a0,auStack_78,0);
    FUN_0015111c(auStack_78);
    FUN_0014ca10(auStack_64);
    FUN_0014ca10(auStack_6c);
    return;
  }
  return;
}

