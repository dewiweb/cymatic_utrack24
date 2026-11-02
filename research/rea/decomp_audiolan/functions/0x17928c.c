// rea decompile_all
// name: FUN_0017928c
// address: 0x17928c
// body: available
// range: 0x17928c-0x179359 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017928c(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = DAT_0017935c;
  iVar4 = 0;
  do {
    pcVar3 = (char *)(iVar4 * 0x8c + param_1 + iVar2);
    if ((*pcVar3 != '\0') && (iVar1 = FUN_001a6f04(pcVar3,param_2), iVar1 == 0)) {
      if (*(int *)(*(int *)(pcVar3 + 0x40) + 4) == 0) {
        iVar1 = *(int *)(param_3 + 4);
      }
      else {
        if (*(int *)(param_3 + 4) == 0) goto LAB_001792d2;
        iVar1 = FUN_001a6f04();
      }
      if (iVar1 == 0) {
        FUN_001a8fa4(*(undefined4 *)(pcVar3 + 0x40));
        pcVar3[0x40] = '\0';
        pcVar3[0x41] = '\0';
        pcVar3[0x42] = '\0';
        pcVar3[0x43] = '\0';
        FUN_001a8e70(param_3,pcVar3 + 0x40);
        pcVar3[0x84] = '\x01';
        pcVar3[0x85] = '\0';
        pcVar3[0x86] = '\0';
        pcVar3[0x87] = '\0';
        iVar2 = *(int *)(pcVar3 + 0x40);
        goto joined_r0x00179314;
      }
    }
LAB_001792d2:
    iVar4 = iVar4 + 1;
    if (99 < iVar4) {
      iVar4 = 0;
      while (pcVar3 = (char *)(iVar4 * 0x8c + param_1 + iVar2), *pcVar3 != '\0') {
        iVar4 = iVar4 + 1;
        if (99 < iVar4) {
          return 0xffffffff;
        }
      }
      FUN_000027f4(pcVar3,0x40,&DAT_00179360,param_2);
      FUN_000027f4(pcVar3 + 0x44,0x40,s_0a4f113b_00179364);
      pcVar3[0x84] = '\x01';
      pcVar3[0x85] = '\0';
      pcVar3[0x86] = '\0';
      pcVar3[0x87] = '\0';
      FUN_001a8e70(param_3,pcVar3 + 0x40);
      *(undefined4 *)(pcVar3 + 0x88) = param_4;
      iVar2 = *(int *)(pcVar3 + 0x40);
joined_r0x00179314:
      if (iVar2 == 0) {
        FUN_000038a0(pcVar3,0x8c);
      }
      return 0;
    }
  } while( true );
}

