// rea decompile_all
// name: FUN_0000acc8
// address: 0xacc8
// body: available
// range: 0xacc8-0xadd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000acc8(int *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r4;
  int *piVar3;
  
  if (param_1[7] == 0) {
    return 0;
  }
  iVar2 = param_1[6];
  if (iVar2 != 0) {
    unaff_r4 = *(int *)(iVar2 + 0x60);
  }
  if (iVar2 == 0 || unaff_r4 == 0xff) {
    piVar3 = (int *)param_1[0xe];
  }
  else if (*(char *)(iVar2 + 0x65) == '\0') {
    if (*(char *)(iVar2 + 0x5c) == '\x10') {
      *(code **)(param_1[7] + 0xc4) = FUN_0000aa6c;
      *(int **)(param_1[7] + 200) = param_1;
      if ((param_2 == (int *)0x0) || (param_2 == param_1)) {
        if (param_1[9] == -1) {
          piVar3 = (int *)param_1[0xe];
          goto joined_r0x0000ad10;
        }
        *(int *)(param_1[7] + 0x58) = param_1[9];
        if (param_3 != -2) {
          *(char *)(param_1[7] + 0xa8) = (char)param_3;
          return 1;
        }
      }
      else {
        *(int *)(param_1[7] + 0x58) = param_2[9];
      }
      *(undefined1 *)(param_1[7] + 0xa8) = *(undefined1 *)((int)param_1 + 0x2a);
      return 1;
    }
    piVar3 = (int *)param_1[0xe];
  }
  else {
    piVar3 = (int *)param_1[0xe];
  }
joined_r0x0000ad10:
  if (piVar3 != (int *)0x0) {
    uVar1 = (**(code **)(*param_1 + 0x1c))();
    (**(code **)(*piVar3 + 8))(piVar3,uVar1,0);
  }
  return 0;
}

