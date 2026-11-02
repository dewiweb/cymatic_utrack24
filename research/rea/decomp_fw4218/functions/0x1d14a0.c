// rea decompile_all
// name: FUN_001d14a0
// address: 0x1d14a0
// body: available
// range: 0x1d14a0-0x1d159b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d14a0(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_20 [8];
  int local_18;
  
  piVar3 = *(int **)(param_1 + 0x28);
  if ((piVar3 != (int *)0x0) && (cVar1 = (char)piVar3[1], cVar1 != '\0')) {
    local_18 = param_1 + 0x33;
    FUN_001c6cb8(auStack_20);
    iVar2 = *(int *)(param_2 + 0xe);
    if ((cVar1 == '\x01') || ((cVar1 == '\x02' && (*(char *)((int)piVar3 + 5) == '\0')))) {
      if (iVar2 != *piVar3) {
        if (iVar2 != 0) {
          return;
        }
        if (*(int *)(param_2 + 0x18) != *piVar3) {
          return;
        }
        iVar2 = FUN_00003658(auStack_20,param_2 + 8,6);
        if (iVar2 == 0) {
          return;
        }
      }
      *(char *)(*(int *)(param_1 + 0x28) + 9) = *(char *)(*(int *)(param_1 + 0x28) + 9) + '\x01';
    }
    else {
      if (iVar2 != *piVar3) {
        return;
      }
      iVar2 = FUN_00003658(auStack_20,param_2 + 8,6);
      if (iVar2 == 0) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x28);
      if (*(char *)(iVar2 + 8) == '\0') {
        FUN_001d8920(param_1,local_18,DAT_001d15a0,local_18,iVar2,DAT_001d159c,iVar2,1);
        *(undefined1 *)(*(int *)(param_1 + 0x28) + 8) = 100;
        return;
      }
      *(char *)(iVar2 + 9) = *(char *)(iVar2 + 9) + '\x01';
    }
    FUN_001d15fc(param_1);
  }
  return;
}

