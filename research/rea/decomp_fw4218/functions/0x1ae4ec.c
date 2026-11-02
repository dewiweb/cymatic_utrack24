// rea decompile_all
// name: FUN_001ae4ec
// address: 0x1ae4ec
// body: available
// range: 0x1ae4ec-0x1ae56d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_001ae4ec(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  *(undefined4 *)param_1 = s_d6__ERROR__USBPacket__USBPacket__001ae570._0_4_;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  iVar1 = FUN_001ae498(param_1);
  if (iVar1 == 0) {
    pcVar2 = s_d6__ERROR__USBPacket__USBPacket__001ae570 + 4;
    goto LAB_001ae54a;
  }
  iVar1 = FUN_001ae450(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_001ae444(param_1,param_3);
    pcVar2 = DAT_001ae5b0;
    if (iVar1 == 0) goto LAB_001ae54a;
    iVar1 = FUN_001ae468(param_1,param_4);
    if (iVar1 != 0) {
      iVar1 = FUN_001ae420(param_1,0);
      if (iVar1 != 0) {
        iVar1 = FUN_001ae474(param_1,0x40);
        if (iVar1 != 0) {
          return param_1;
        }
        FUN_00002898(DAT_001ae5b0 + 0x9c,0x40);
        return param_1;
      }
      pcVar2 = DAT_001ae5b0 + 0x48;
      goto LAB_001ae54a;
    }
  }
  pcVar2 = DAT_001ae5b0 + -0x48;
LAB_001ae54a:
  FUN_00002898(pcVar2);
  return param_1;
}

