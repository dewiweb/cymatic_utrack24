// rea decompile_all
// name: FUN_0012e910
// address: 0x12e910
// body: available
// range: 0x12e910-0x12ea13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0012e910(undefined4 *param_1,ushort param_2,int param_3,ushort param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_30 [16];
  
  *(ushort *)(param_3 + 0x4c) = param_4 | 0x44;
  *(undefined4 *)(param_3 + 0x48) = param_6;
  uVar4 = 0;
  FUN_0010f738(param_3 + 0x1c,param_5);
  iVar1 = FUN_000eaaa4(param_3,*(undefined2 *)((int)param_1 + 10));
  if (iVar1 == 0) {
    uVar3 = 0;
    if (*(short *)((int)param_1 + 10) != 0) {
      do {
        if ((*(ushort *)(param_1[1] + uVar3 * 8 + 6) & param_2) != 0) {
          uVar2 = FUN_001375f0(*param_1,*(undefined2 *)(param_1[1] + uVar3 * 8));
          iVar1 = FUN_0015d700(param_3 + 0xc,uVar2);
          if (iVar1 != 1) {
            uVar2 = FUN_001375f0(*param_1,*(undefined2 *)(param_1[1] + uVar3 * 8));
            FUN_0010f674(auStack_30,uVar2,*(undefined2 *)(param_1[1] + uVar3 * 8 + 2));
            iVar1 = FUN_0015e90c(auStack_30);
            if (iVar1 == 0) {
              FUN_000eaa14(param_3,auStack_30);
            }
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)((int)param_1 + 10));
    }
  }
  else {
    uVar4 = 0x17;
  }
  return uVar4;
}

