// rea decompile_all
// name: FUN_0021d35e
// address: 0x21d35e
// body: available
// range: 0x21d35e-0x21d465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0021d35e(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar1 = (char *)FUN_0021d164(param_2);
  *(undefined4 *)(pcVar1 + 0x10) = *param_5;
  *(undefined4 *)(pcVar1 + 0x14) = param_5[1];
  *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
  if (((*(int *)(param_2 + 0x10) == param_4) || (param_3 != 0)) ||
     (iVar2 = FUN_0022dd14(param_2 + 0x19,param_5,param_4 + 0x10), iVar2 != 0)) {
    *(char **)(param_4 + 8) = pcVar1;
    iVar2 = *(int *)(param_2 + 0x10);
    if (iVar2 != param_4) {
      if (*(int *)(iVar2 + 8) == param_4) {
        *(char **)(iVar2 + 8) = pcVar1;
      }
      goto LAB_0021d3c2;
    }
    *(char **)(iVar2 + 4) = pcVar1;
    iVar2 = *(int *)(param_2 + 0x10);
  }
  else {
    *(char **)(param_4 + 0xc) = pcVar1;
    iVar2 = *(int *)(param_2 + 0x10);
    if (*(int *)(iVar2 + 0xc) != param_4) goto LAB_0021d3c2;
  }
  *(char **)(iVar2 + 0xc) = pcVar1;
LAB_0021d3c2:
  *(int *)(pcVar1 + 4) = param_4;
  pcVar5 = pcVar1;
  do {
    while( true ) {
      if ((*(char **)(*(int *)(param_2 + 0x10) + 4) == pcVar5) ||
         (pcVar3 = *(char **)(pcVar5 + 4), *pcVar3 != '\0')) {
        **(undefined1 **)(*(int *)(param_2 + 0x10) + 4) = 1;
        *param_1 = pcVar1;
        return;
      }
      pcVar4 = *(char **)(*(int *)(pcVar3 + 4) + 8);
      if (pcVar3 != pcVar4) break;
      pcVar4 = *(char **)(*(int *)(pcVar3 + 4) + 0xc);
      if ((pcVar4 == (char *)0x0) || (*pcVar4 != '\0')) {
        if (*(char **)(pcVar3 + 0xc) == pcVar5) {
          FUN_0021d1ce(param_2,pcVar3);
          pcVar5 = pcVar3;
        }
        **(undefined1 **)(pcVar5 + 4) = 1;
        **(undefined1 **)(*(int *)(pcVar5 + 4) + 4) = 0;
        FUN_0021d200(param_2,*(undefined4 *)(*(int *)(pcVar5 + 4) + 4));
      }
      else {
LAB_0021d454:
        *pcVar3 = '\x01';
        *pcVar4 = '\x01';
        **(undefined1 **)(*(int *)(pcVar5 + 4) + 4) = 0;
        pcVar5 = *(char **)(*(int *)(pcVar5 + 4) + 4);
      }
    }
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == '\0')) goto LAB_0021d454;
    if (*(char **)(pcVar3 + 8) == pcVar5) {
      FUN_0021d200(param_2,pcVar3);
      pcVar5 = pcVar3;
    }
    **(undefined1 **)(pcVar5 + 4) = 1;
    **(undefined1 **)(*(int *)(pcVar5 + 4) + 4) = 0;
    FUN_0021d1ce(param_2,*(undefined4 *)(*(int *)(pcVar5 + 4) + 4));
  } while( true );
}

