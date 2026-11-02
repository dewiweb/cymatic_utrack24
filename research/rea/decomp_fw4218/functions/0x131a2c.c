// rea decompile_all
// name: FUN_00131a2c
// address: 0x131a2c
// body: available
// range: 0x131a2c-0x131b83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00131a2c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_64;
  undefined1 auStack_60 [48];
  undefined4 local_30;
  uint uStack_2c;
  short local_28 [2];
  short local_24 [2];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [4];
  
  uVar1 = (uint)*(ushort *)(param_1 + 0x114);
  uVar3 = DAT_00131b84;
  if (*(ushort *)(param_1 + 0x5ee) < uVar1) {
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        if (*(byte *)(param_1 + uVar4 + 0xfc) == param_3) break;
        uVar4 = uVar4 + 1 & 0xfffeffff;
      } while (uVar4 < uVar1);
    }
    if (uVar1 == uVar4) {
      FUN_00002898(DAT_00131b88);
      return 0;
    }
    iVar2 = FUN_00110ee8(param_2,auStack_60,auStack_20,&local_30,&uStack_2c,auStack_18,&local_64);
    uVar3 = DAT_00131b8c;
    if (iVar2 != 0) {
      iVar2 = FUN_000f5710(param_1,auStack_60,local_28,local_24);
      if (iVar2 != 0) {
        if ((*(short *)(param_1 + 0x116) == local_28[0]) && (local_24[0] == 1)) {
          iVar5 = param_1 + uVar4 * 4;
          *(undefined4 *)(iVar5 + 0x5f8) = local_30;
          iVar2 = FUN_0005f284(param_1,local_64);
          if (iVar2 != 0) {
            if (uStack_2c <= *(uint *)(param_1 + 0x5f0)) {
              uStack_2c = *(uint *)(param_1 + 0x5f0);
            }
            *(uint *)(param_1 + 0x5f0) = uStack_2c;
            *(undefined4 *)(iVar5 + 0x658) = local_64;
            *(short *)(param_1 + 0x5ee) = *(short *)(param_1 + 0x5ee) + 1;
            return 1;
          }
        }
        else {
          FUN_00002898(DAT_00131b90);
        }
      }
      FUN_0005f2d8(param_1,local_64);
      return 0;
    }
  }
  FUN_00002898(uVar3);
  return 0;
}

