// rea decompile_all
// name: FUN_00128130
// address: 0x128130
// body: available
// range: 0x128130-0x128163 inclusive
// range: 0x131068-0x13114f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00128130(int param_1,undefined4 param_2,short *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  short sStack_30;
  short sStack_2e;
  short sStack_2c;
  short sStack_2a;
  undefined1 auStack_28 [8];
  undefined1 local_20 [16];
  
  iVar1 = FUN_0012bbec(param_1 + 0x90,param_3[1]);
  if (iVar1 == 0) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_00142754();
  piVar4 = (int *)*puVar2;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piVar4 + 0x4c))(&sStack_30,piVar4);
    if ((((sStack_2e == param_3[1]) && (sStack_30 == *param_3)) && (sStack_2c == param_3[2])) &&
       (sStack_2a == param_3[3])) break;
    piVar4 = (int *)piVar4[0x1a];
  }
  (**(code **)(*piVar4 + 0x54))(auStack_28,piVar4,param_3[3]);
  uVar3 = FUN_0015e89c(auStack_28);
  (**(code **)(*piVar4 + 0x4c))(local_20,piVar4);
  FUN_0013cd88(param_2,local_20,uVar3);
  FUN_0010e7f4(auStack_28);
  return 1;
}

