// rea decompile_all
// name: FUN_0003f42c
// address: 0x3f42c
// body: available
// range: 0x3f42c-0x3f4f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003f42c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_2 + 4);
  if (uVar3 == 2) {
    if (*_DAT_0003f4fc * 10 <
        (*(int *)(param_2 + 0xb4) + *(int *)(param_2 + 0xb0)) - *(int *)(param_1 + 0xdc)) {
      uVar1 = FUN_0002272c(param_2 + 4,*(int *)(param_2 + 0x24) + 4,param_1 + 0x37,10,param_4);
      FUN_00024642(0,s___SetNextAnnounceProbeTime__Prob_0003f4fe + 2,*(undefined1 *)(param_2 + 0x7a)
                   ,(*(int *)(param_2 + 0xb4) + *(int *)(param_2 + 0xb0)) - *(int *)(param_1 + 0xdc)
                   ,uVar1);
      FUN_00024642(0,DAT_0003f538,*(int *)(&DAT_00001fd8 + param_1),*(int *)(param_1 + 0xdc),
                   *(int *)(&DAT_00001fd8 + param_1) - *(int *)(param_1 + 0xdc));
    }
    iVar2 = *(int *)(param_2 + 0xb4) + *(int *)(param_2 + 0xb0);
    if (-1 < *(int *)(param_1 + 0xf8) - iVar2) {
      *(int *)(param_1 + 0xf8) = iVar2;
    }
    if (*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xdc) < 0) {
      *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0xdc);
    }
  }
  else if (((*(char *)(param_2 + 0x7b) != '\0') &&
           ((((((uVar3 & 0x3f) >> 2 != 0 &&
               ((*(int *)(param_2 + 0x2c) == 0 ||
                ((*(byte *)(*(int *)(param_2 + 0x2c) + 4) & 0x3f) >> 2 != 0)))) &&
              ((*(int *)(param_2 + 0x30) == 0 ||
               ((*(byte *)(*(int *)(param_2 + 0x30) + 4) & 0x3f) >> 2 != 0)))) &&
             ((*(int *)(param_2 + 0x34) == 0 ||
              ((*(byte *)(*(int *)(param_2 + 0x34) + 4) & 0x3f) >> 2 != 0)))) || (uVar3 == 1)))) &&
          (iVar2 = *(int *)(param_2 + 0xb4) + *(int *)(param_2 + 0xb0),
          -1 < *(int *)(param_1 + 0xfc) - iVar2)) {
    *(int *)(param_1 + 0xfc) = iVar2;
    return;
  }
  return;
}

