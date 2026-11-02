// rea decompile_all
// name: FUN_0012cfb0
// address: 0x12cfb0
// body: available
// range: 0x12cfb0-0x12d03b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012cfb0(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *local_18;
  undefined4 local_14 [2];
  
  piVar3 = (int *)param_1[1];
  piVar2 = param_1;
  if (piVar3 != (int *)0x0) {
    piVar2 = (int *)piVar3[0x3e];
  }
  piVar1 = piVar2;
  local_18 = param_3;
  local_14[0] = param_2;
  if (piVar3 != (int *)0x0 && piVar2 != (int *)0x0) {
    do {
      piVar3 = piVar1;
      piVar2 = (int *)0x0;
      piVar1 = (int *)piVar3[0x3e];
    } while ((int *)piVar3[0x3e] != (int *)0x0);
  }
  while( true ) {
    if (piVar3 != (int *)0x0) {
      piVar2 = local_18;
    }
    if (piVar3 == (int *)0x0 || piVar2 == (int *)0x0) break;
    if ((piVar3[0x1a] & 0x1000000U) == 0 && (piVar3[0x1a] & 0x10000U) == 0) {
      (**(code **)(*piVar3 + 0xd8))(piVar3,local_14,&local_18);
    }
    piVar2 = (int *)FUN_001d7a54(param_1,piVar3);
    piVar3 = piVar2;
  }
  return;
}

