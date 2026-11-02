// rea decompile_all
// name: FUN_000fdddc
// address: 0xfdddc
// body: available
// range: 0xfdddc-0xfdec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fdddc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined1 auStack_4c [60];
  
  *(undefined1 *)(param_1 + 0xb0) = 1;
  if ((param_2 != 0) || (2000 < *(uint *)(param_1 + 0x7c))) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  uVar1 = FUN_0017bfc0();
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  local_64 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_5c = 0;
  local_56 = 0;
  local_54 = 0;
  local_4e = 0;
  iVar2 = FUN_0010f718(auStack_4c);
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined1 *)(iVar2 + 0x35) = 1;
  FUN_000ee880(iVar2 + -0x1c);
  iVar2 = FUN_0017bfc0();
  FUN_000ede0c(&local_68,1000,iVar2 * 1000,0,*(undefined4 *)(param_1 + 0xac));
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))
            (*(int **)(param_1 + 0x18),&local_68,param_1 + 0x5c);
  FUN_000ee880(&local_68);
  FUN_000e9f98(&local_54);
  FUN_000e9f98(&local_5c);
  return;
}

