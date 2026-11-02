// rea decompile_all
// name: FUN_0012aeb0
// address: 0x12aeb0
// body: available
// range: 0x12aeb0-0x12af9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0012aeb0(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_20 [16];
  
  do {
    if (param_3 == (int *)0x0) {
      piVar3 = *(int **)(param_1 + 4);
      if (*(int **)(param_1 + 4) == (int *)0x0) {
        return (int *)0x0;
      }
      do {
        piVar1 = piVar3;
        if ((*(byte *)(piVar1 + 0x43) & 0x80) != 0) break;
        piVar3 = (int *)piVar1[0x42];
      } while ((int *)piVar1[0x42] != (int *)0x0);
    }
    else {
      piVar1 = (int *)param_3[0x41];
      if (piVar1 == (int *)0x0) {
        piVar3 = *(int **)(param_1 + 4);
        piVar1 = (int *)0x0;
        if (piVar3 == param_3) {
          return (int *)0x0;
        }
        do {
          if (*(ushort *)(piVar3 + 0x24) < *(ushort *)(param_3 + 0x24)) {
            piVar1 = piVar3;
          }
          piVar3 = (int *)piVar3[(*(ushort *)(piVar3 + 0x24) < *(ushort *)(param_3 + 0x24)) + 0x41];
        } while (piVar3 != param_3);
      }
      else {
        while ((*(byte *)(piVar1 + 0x43) & 0x80) == 0) {
          piVar1 = (int *)piVar1[0x42];
          if (piVar1 == (int *)0x0) {
            return (int *)0x0;
          }
        }
      }
    }
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    (**(code **)(*piVar1 + 0xac))(auStack_20,piVar1);
    iVar2 = FUN_0010f76c(auStack_20,param_2);
    param_3 = piVar1;
    if (iVar2 != 0) {
      return piVar1;
    }
  } while( true );
}

