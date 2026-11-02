// rea decompile_all
// name: FUN_00135910
// address: 0x135910
// body: available
// range: 0x135910-0x135a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00135910(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [16];
  
  piVar3 = (int *)param_1[1];
  if (piVar3 == (int *)0x0) {
    return;
  }
  do {
    iVar1 = (**(code **)(*piVar3 + 0x48))(piVar3);
    if (iVar1 != 0) {
      FUN_0015e8b8(auStack_20,param_2);
      piVar2 = (int *)(**(code **)(*piVar3 + 0x48))(piVar3);
      (**(code **)(*piVar2 + 0x44))(auStack_2c,piVar2);
      FUN_0015e8b8(auStack_38,auStack_2c);
      iVar1 = FUN_0015e940(auStack_38,auStack_20);
      if (iVar1 != 0) {
        if (piVar3 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(*piVar3 + -0x14) + (int)piVar3;
        }
        FUN_00134fb4(*param_1,iVar1);
        piVar2 = (int *)param_1[1];
        if (piVar2 != (int *)0x0 && piVar3 != (int *)0x0) {
          if (piVar2 == piVar3) {
            param_1[1] = piVar2[0x1e];
          }
          if ((int *)param_1[2] == piVar3) {
            param_1[2] = ((int *)param_1[2])[0x1d];
          }
          if (piVar3[0x1d] != 0) {
            *(int *)(piVar3[0x1d] + 0x78) = piVar3[0x1e];
          }
          if (piVar3[0x1e] != 0) {
            *(int *)(piVar3[0x1e] + 0x74) = piVar3[0x1d];
          }
          piVar3[0x1d] = 0;
          piVar3[0x1e] = 0;
          param_1[3] = param_1[3] + -1;
        }
        (**(code **)(*piVar3 + 0x3c))(piVar3);
        return;
      }
    }
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)param_1[1];
    }
    else {
      piVar3 = (int *)piVar3[0x1e];
    }
  } while (piVar3 != (int *)0x0);
  return;
}

