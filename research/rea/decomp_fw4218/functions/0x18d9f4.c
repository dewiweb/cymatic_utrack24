// rea decompile_all
// name: FUN_0018d9f4
// address: 0x18d9f4
// body: available
// range: 0x18d9f4-0x18db7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0018d9f4(ushort *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  
  if (DAT_0018db80 <= *param_1) {
    return (int *)0x0;
  }
  piVar5 = (int *)0x0;
  FUN_00171d94(auStack_20,param_3);
  iVar2 = FUN_001be9b0(auStack_20);
  if (iVar2 == 0) goto LAB_0018db6c;
  iStack_30 = *param_5;
  iStack_2c = param_5[1];
  if (iStack_2c == 0 && iStack_30 == 0) {
    iStack_30 = -1;
    iStack_2c = 0x4fffffff;
LAB_0018da7c:
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
        iVar2 = FUN_0022c124(param_1);
      }
    }
  }
  else if ((param_5[2] & 0xffffU) == DAT_0018db84) goto LAB_0018da7c;
  uVar4 = *param_1;
  uVar3 = FUN_001beccc(auStack_20);
  piVar5 = (int *)FUN_0019e718(param_2,uVar3,param_4,uVar4);
  if ((piVar5 != (int *)0x0) && (iVar2 = FUN_0020849c(param_1,piVar5), iVar2 == 0)) {
    (**(code **)(*piVar5 + 0x3c))(piVar5);
    piVar5 = (int *)0x0;
  }
LAB_0018db6c:
  FUN_00171ea4(auStack_20);
  return piVar5;
}

