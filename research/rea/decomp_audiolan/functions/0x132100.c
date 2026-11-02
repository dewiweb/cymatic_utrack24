// rea decompile_all
// name: FUN_00132100
// address: 0x132100
// body: available
// range: 0x132100-0x13225f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00132100(int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined2 local_28;
  
  if (*(ushort *)(param_1 + 10) != 0) {
    iVar5 = (int)((*(ushort *)(param_1 + 10) - 1) * 0x10000) >> 0x10;
    iVar4 = 0;
    if (-1 < iVar5) {
      do {
        uVar1 = iVar4 + (iVar5 - iVar4) / 2 & 0xffff;
        iVar3 = *(int *)(*(int *)(param_1 + 4) + uVar1 * 4);
        iVar2 = FUN_0015ebcc(param_2,iVar3 + 8);
        if (iVar2 == 0) {
          iVar4 = FUN_0015eb7c(param_2,iVar3 + 8);
          if (iVar4 == 0) {
            if (iVar3 != 0) {
              return iVar3;
            }
            break;
          }
          iVar4 = (int)((uVar1 + 1) * 0x10000) >> 0x10;
        }
        else {
          iVar5 = (int)((uVar1 - 1) * 0x10000) >> 0x10;
        }
      } while (iVar4 <= iVar5);
    }
  }
  local_30 = *param_2;
  uStack_2c = param_2[1];
  local_28 = (undefined2)DAT_00132260;
  if (*(ushort *)(param_1 + 10) != 0) {
    iVar5 = (int)((*(ushort *)(param_1 + 10) - 1) * 0x10000) >> 0x10;
    iVar4 = 0;
    if (-1 < iVar5) {
      do {
        uVar1 = iVar4 + (iVar5 - iVar4) / 2 & 0xffff;
        iVar3 = *(int *)(*(int *)(param_1 + 4) + uVar1 * 4);
        iVar2 = FUN_0015ebcc(&local_30,iVar3 + 8);
        if (iVar2 == 0) {
          iVar4 = FUN_0015eb7c(&local_30,iVar3 + 8);
          if (iVar4 == 0) {
            return iVar3;
          }
          iVar4 = (int)((uVar1 + 1) * 0x10000) >> 0x10;
        }
        else {
          iVar5 = (int)((uVar1 - 1) * 0x10000) >> 0x10;
        }
      } while (iVar4 <= iVar5);
    }
  }
  return 0;
}

