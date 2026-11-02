// rea decompile_all
// name: FUN_0022a504
// address: 0x22a504
// body: available
// range: 0x22a504-0x22a5bd inclusive
// range: 0x22a72a-0x22a72f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0022a504(undefined4 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int extraout_r3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  local_28 = *(undefined4 *)(param_2 + 8);
  iVar5 = param_2 + 0x14;
  FUN_001c6f34();
  func_0xffc213c4();
  puVar6 = (undefined1 *)(*(char *)(param_2 + 0x100 + extraout_r3) * 8);
  uVar1 = FUN_001b91cc(param_2);
  uVar2 = FUN_001b91b2(iVar5);
  if (uVar2 < uVar1) {
    uVar1 = FUN_001b91b2(iVar5);
LAB_0022a54c:
    if (uVar1 == 0x200) {
      FUN_000e884e(iVar5,DAT_0022a750);
      uVar3 = 32000;
      if (*(int *)(puVar6 + 0x14) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(puVar6 + 0x14) + *(int *)(puVar6 + 0x18);
      }
      goto LAB_0022a56c;
    }
  }
  else {
    if (0x3f < uVar1) goto LAB_0022a54c;
    uVar1 = 0;
  }
  FUN_000e884e(iVar5,DAT_0022a758);
  if (*(int *)(puVar6 + 0x14) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(puVar6 + 0x14) + *(int *)(puVar6 + 0x18);
  }
  uVar3 = 16000;
LAB_0022a56c:
  iVar4 = FUN_0001a724(iVar5,uVar1,uVar3,iVar4);
  if (iVar4 != 0) {
    FUN_000e8844(iVar5);
    FUN_00002898(DAT_0022a754);
    *puVar6 = 1;
    puVar6[1] = (char)iVar4;
    FUN_00201d4c(auStack_30,param_2);
    FUN_00201d5c(auStack_30);
  }
  return 1;
}

