// rea decompile_all
// name: FUN_00132c40
// address: 0x132c40
// body: available
// range: 0x132c40-0x132d93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00132c40(undefined4 *param_1,int param_2,ushort param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [16];
  
  *(ushort *)(param_2 + 0x4c) = param_3 | 0x84;
  *(undefined4 *)(param_2 + 0x48) = param_5;
  uVar6 = 0;
  FUN_0010f738(param_2 + 0x1c,param_4);
  uVar2 = (uint)*(ushort *)(param_1 + 4);
  uVar5 = 0;
  uVar4 = 0;
  if (uVar2 != 0) {
    do {
      if (((uVar4 < uVar2) &&
          (iVar3 = FUN_0013f040(*param_1,*(undefined2 *)(param_1[2] + uVar4 * 8)), iVar3 != 0)) &&
         (*(char *)(iVar3 + 0xe) == '\x01' || *(char *)(iVar3 + 0xe) == '\x02')) {
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
      uVar2 = (uint)*(ushort *)(param_1 + 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
    if (uVar5 != 0) {
      iVar3 = FUN_000eaaa4(param_2,uVar5);
      if (iVar3 != 0) {
        return 0x17;
      }
      uVar2 = 0;
      if (*(short *)(param_1 + 4) == 0) {
        return 0;
      }
      do {
        iVar3 = FUN_0013f040(*param_1,*(undefined2 *)(param_1[2] + uVar2 * 8));
        if ((iVar3 != 0) && (cVar1 = *(char *)(iVar3 + 0xe), cVar1 == '\x01' || cVar1 == '\x02')) {
          if (cVar1 == '\x02') {
            uVar6 = 0xd;
          }
          FUN_0010f674(auStack_28,iVar3,*(undefined2 *)(param_1[2] + uVar2 * 8 + 2));
          iVar3 = FUN_0015e90c(auStack_28);
          if (iVar3 == 0) {
            FUN_000eaa14(param_2,auStack_28);
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 4));
      return uVar6;
    }
  }
  return 0x15;
}

