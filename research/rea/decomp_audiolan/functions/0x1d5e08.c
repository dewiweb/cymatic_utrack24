// rea decompile_all
// name: FUN_001d5e08
// address: 0x1d5e08
// body: available
// range: 0x1d5e08-0x1d5f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001d5e08(int param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *extraout_r1;
  char *extraout_r1_00;
  int extraout_r2;
  int extraout_r2_00;
  
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  iVar2 = FUN_00003ca4(param_1 + 0x18);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
    return 0;
  }
  pcVar3 = (char *)*param_2;
  iVar2 = param_2[1];
  do {
    cVar1 = *pcVar3;
    if ((cVar1 != ' ' && cVar1 != '\n') && (cVar1 != '\r' && cVar1 != '\t')) {
      *param_2 = (int)pcVar3;
      param_2[1] = iVar2;
      cVar1 = *pcVar3;
      if (cVar1 == '\0') {
        *(char **)(param_1 + 0x198) = s_Text_only_contains_white_space_s_001d5f78;
        *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
        FUN_00003cc8(param_1 + 0x18,1);
LAB_001d5ecc:
        FUN_001d5220(param_1,param_2,param_3);
LAB_001d5ef0:
        pcVar3 = (char *)*param_2;
        iVar2 = param_2[1];
        do {
          cVar1 = *pcVar3;
          if ((cVar1 != ' ' && cVar1 != '\n') && (cVar1 != '\r' && cVar1 != '\t')) {
            *param_2 = (int)pcVar3;
            param_2[1] = iVar2;
            if (*pcVar3 == '\0') {
              return 1;
            }
            *(char **)(param_1 + 0x198) = s_Nothing_should_follow_the_root_o_001d5f9c;
            *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
            FUN_00003cc8(param_1 + 0x18,1);
            pcVar3 = extraout_r1_00;
            iVar2 = extraout_r2_00;
          }
          pcVar3 = pcVar3 + 1;
        } while( true );
      }
      if (cVar1 == '[') {
        FUN_001d4638(param_1,param_2,param_3);
        goto LAB_001d5ef0;
      }
      if (cVar1 == '{') goto LAB_001d5ecc;
      *(char **)(param_1 + 0x198) = s_Expect_either_an_object_or_array_001d5f4c;
      *(int *)(param_1 + 0x19c) = *param_2 - param_2[1];
      FUN_00003cc8(param_1 + 0x18,1);
      pcVar3 = extraout_r1;
      iVar2 = extraout_r2;
    }
    pcVar3 = pcVar3 + 1;
  } while( true );
}

