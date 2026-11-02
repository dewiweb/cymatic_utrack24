// rea decompile_all
// name: FUN_0007b9dc
// address: 0x7b9dc
// body: available
// range: 0x7b9dc-0x7ba61 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0007b9dc(char *param_1,int *param_2,undefined4 *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int local_2c;
  char *pcStack_24;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  
  uVar3 = 0xffffffff;
  if (*param_1 != '\0') {
    iVar2 = *param_2;
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 4) + 0x1c;
    }
    pcStack_24 = param_1;
    local_20 = param_2;
    local_1c = param_3;
    local_18 = param_4;
    iVar1 = FUN_000cd658(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),iVar2,
                         &local_3c,0x14);
    if (iVar1 == 0) {
      while ((local_3c != -1 && (local_38 != 0))) {
        if (local_3c == DAT_0007ba64) {
          iVar1 = local_2c;
          if (param_5 <= local_2c) {
            iVar1 = param_5 + -1;
          }
          FUN_000cd658(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0xc),iVar2 + 0x14,
                       local_18,iVar1);
          *(undefined1 *)(local_18 + iVar1) = 0;
          *local_20 = local_38 + iVar2;
          *local_1c = local_34;
          return 1;
        }
        iVar2 = local_38 + iVar2;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

