// rea decompile_all
// name: FUN_000c5cd8
// address: 0xc5cd8
// body: available
// range: 0xc5cd8-0xc5e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000c5cd8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int local_50 [6];
  int local_38 [5];
  
  uVar4 = 0;
  do {
    iVar2 = param_1 + uVar4 * 0x24;
    if (iVar2 != -0xd4) {
      if ((uVar4 & 0xff) == 0) {
        FUN_001fe1e4(local_50 + 2);
        bVar1 = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12);
        iVar3 = local_50[2];
      }
      else {
        FUN_001fe1e4(local_50 + 3);
        bVar1 = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16);
        iVar3 = local_50[3];
      }
      FUN_001fe1f8(iVar3);
      if ((bVar1 & 0x20) != 0) {
        if (uVar4 == 0) {
          FUN_001fe1e4(local_38);
          *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) =
               *(byte *)(*(int *)(param_1 + 0x4c8) + 0x12) & 0xdf;
          iVar3 = local_38[0];
        }
        else {
          FUN_001fe1e4(local_50);
          *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16) =
               *(byte *)(*(int *)(param_1 + 0x4c8) + 0x16) & 0xdf;
          iVar3 = local_50[0];
        }
        FUN_001fe1f8(iVar3);
        iVar5 = *(int *)(param_1 + 0x348);
        local_50[0] = FUN_001ce2b4(iVar5,local_50 + 2,0xffffffff);
        iVar3 = local_50[2];
        if (local_50[0] != 0) {
          FUN_00002898(DAT_000c5e70,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8),
                       *(undefined4 *)(iVar5 + 0x10));
          return;
        }
        if (local_50[2] == 0) {
          return;
        }
        local_50[0] = *(int *)(iVar2 + 0xd8);
        local_50[1] = 1;
        local_50[2] = 0;
        local_50[3] = 0x40;
        FUN_000470a0(iVar3,7,*(undefined1 *)(iVar2 + 0xd5),1);
        local_50[4] = 2;
        local_50[5] = iVar3;
        thunk_EXT_FUN_004005e0(*(int *)(param_1 + 0x34c) + 0x10,local_50 + 4,0xffffffff);
      }
    }
    uVar4 = uVar4 + 1;
    if (7 < (int)uVar4) {
      return;
    }
  } while( true );
}

