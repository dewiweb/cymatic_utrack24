// rea decompile_all
// name: FUN_0001a74a
// address: 0x1a74a
// body: available
// range: 0x1a74a-0x1a8ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0001a74a(int param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 auStack_54 [36];
  undefined1 auStack_30 [8];
  int local_28;
  undefined1 auStack_24 [4];
  int iStack_20;
  undefined4 local_1c;
  int *piStack_18;
  
  iStack_20 = param_1;
  local_1c = param_2;
  piStack_18 = param_3;
  FUN_001a2920(auStack_30,param_1 + 0xf0);
  if (*(char *)(param_1 + 0x9c) != '\0') {
LAB_0001a764:
    FUN_001a2938(auStack_30);
    return 3;
  }
  if (((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xdc) == 0)) &&
     (((iVar2 = FUN_001bbcdc(param_1), iVar2 != 2 && (iVar2 != 5)) ||
      (iVar2 = FUN_00061820(param_3), iVar2 != 0)))) {
    local_28 = param_1 + 200;
    iVar2 = FUN_000a12d6(param_1,*(undefined4 *)(param_1 + 8),0,0,2,0x40,0,local_28,0);
    if (iVar2 != 0) {
      uVar3 = FUN_0007982c(auStack_24,local_28);
      iVar2 = FUN_000e88a0(*(int *)(param_1 + 0xd4) + 0x14,uVar3);
      FUN_00079844(auStack_24);
      if (iVar2 == 1) {
        *(undefined1 *)(*(int *)(param_1 + 0xd4) + 0x11d) = *(undefined1 *)(param_1 + 0xe0);
        iVar2 = FUN_000ea530(*(undefined4 *)(param_1 + 0xd4),local_1c,param_3,param_3[4]);
        if (iVar2 != 0) {
          FUN_00205224(auStack_54);
          *(undefined1 **)(param_1 + 0xdc) = auStack_54;
          FUN_000e8a10(*(int *)(param_1 + 0xd4) + 0x14,param_1 + 0xc4);
          FUN_000e8830(*(int *)(param_1 + 0xd4) + 0x14);
          pcVar4 = (char *)FUN_0020520c(auStack_54,0xffffffff);
          FUN_000e88f8(*(int *)(param_1 + 0xd4) + 0x14);
          iVar2 = FUN_001b3cce(local_28);
          if (iVar2 != 0) {
            FUN_000a1348(param_1,local_28);
          }
          *(undefined4 *)(param_1 + 0xdc) = 0;
          if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) {
            FUN_00205264(auStack_54);
            goto LAB_0001a764;
          }
          cVar1 = *(char *)(*(int *)(param_1 + 0xd4) + 0x100);
          if (cVar1 == '\0') {
            (**(code **)(*param_3 + 8))(param_3);
            FUN_00205264(auStack_54);
            FUN_001a2938(auStack_30);
            return 0;
          }
          if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
            FUN_00205264(auStack_54);
            FUN_001a2938(auStack_30);
            return 2;
          }
          FUN_00205264(auStack_54);
          goto LAB_0001a87c;
        }
      }
      FUN_000a1348(param_1,local_28);
    }
  }
LAB_0001a87c:
  FUN_001a2938(auStack_30);
  return 1;
}

