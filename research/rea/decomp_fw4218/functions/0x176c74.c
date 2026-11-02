// rea decompile_all
// name: FUN_00176c74
// address: 0x176c74
// body: available
// range: 0x176c74-0x176d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00176c74(byte *param_1,uint param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = DAT_00176d60;
  iVar1 = DAT_00176d5c;
  if (*DAT_00176d58 == '\0') {
    uVar5 = 0;
    *DAT_00176d58 = '\x01';
    do {
      iVar4 = 4;
      uVar6 = uVar5;
      do {
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar6 >> 1;
        }
        else {
          uVar6 = uVar2 ^ uVar6 >> 1;
        }
        if ((uVar6 & 1) == 0) {
          uVar6 = uVar6 >> 1;
        }
        else {
          uVar6 = uVar2 ^ uVar6 >> 1;
        }
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(uint *)(iVar1 + uVar5 * 4) = uVar6;
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 0x100);
  }
  if (0 < (int)param_2) {
    pbVar3 = param_1 + -1;
    if ((param_2 & 1) != 0) {
      *param_3 = *(uint *)(iVar1 + (((uint)*param_1 ^ *param_3) & 0xff) * 4) ^ *param_3 >> 8;
      pbVar3 = param_1;
    }
    iVar4 = (int)param_2 >> 1;
    if (iVar4 != 0) {
      do {
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(iVar1 + (((uint)pbVar3[1] ^ *param_3) & 0xff) * 4) ^ *param_3 >> 8;
        *param_3 = uVar2;
        pbVar3 = pbVar3 + 2;
        *param_3 = *(uint *)(iVar1 + ((*pbVar3 ^ uVar2) & 0xff) * 4) ^ uVar2 >> 8;
      } while (iVar4 != 0);
      return;
    }
    return;
  }
  return;
}

