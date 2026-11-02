// rea decompile_all
// name: FUN_0012cbcc
// address: 0x12cbcc
// body: available
// range: 0x12cbcc-0x12cd57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0012cbcc(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  int *param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  int *piVar5;
  int iStack_30;
  int iStack_2c;
  undefined1 auStack_20 [8];
  
  if (DAT_0012cd58 <= *param_1) {
    return (int *)0x0;
  }
  piVar5 = (int *)0x0;
  FUN_0010e728(auStack_20,param_3);
  iVar2 = FUN_0015e6b4(auStack_20);
  if (iVar2 == 0) goto LAB_0012cd44;
  iStack_30 = *param_5;
  iStack_2c = param_5[1];
  if (iStack_2c == 0 && iStack_30 == 0) {
    iStack_30 = -1;
    iStack_2c = 0x4fffffff;
LAB_0012cc54:
    iVar2 = *(int *)(param_1 + 2);
    if (iVar2 != 0) {
      for (iVar1 = *(int *)(iVar2 + 0xf8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xf8)) {
        iVar2 = iVar1;
      }
      uVar4 = 0;
      while (iVar2 != 0) {
        if ((iStack_30 == *(int *)(iVar2 + 0xe0) && iStack_2c == *(int *)(iVar2 + 0xe4)) &&
           (uVar4 <= *(ushort *)(iVar2 + 0xe8))) {
          uVar4 = *(ushort *)(iVar2 + 0xe8) + 1;
        }
        iVar2 = FUN_001d7a54(param_1);
      }
    }
  }
  else if ((param_5[2] & 0xffffU) == DAT_0012cd5c) goto LAB_0012cc54;
  uVar4 = *param_1;
  uVar3 = FUN_0015e89c(auStack_20);
  piVar5 = (int *)FUN_00145be0(param_2,uVar3,param_4,uVar4);
  if ((piVar5 != (int *)0x0) && (iVar2 = FUN_001bfe60(param_1,piVar5), iVar2 == 0)) {
    (**(code **)(*piVar5 + 0x3c))(piVar5);
    piVar5 = (int *)0x0;
  }
LAB_0012cd44:
  FUN_0010e7f4(auStack_20);
  return piVar5;
}

