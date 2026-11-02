// rea decompile_all
// name: FUN_0017474c
// address: 0x17474c
// body: available
// range: 0x17474c-0x17488d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1747ba to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_0017474c(int param_1,char *param_2,int param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  if (((*param_2 != '<') && (*param_2 != '\0')) || (param_2[1] != '!')) {
LAB_001747ba:
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  pcVar2 = param_2 + 1;
  cVar1 = param_2[1];
  iVar4 = param_4;
  do {
    if (cVar1 == '\0') {
      if ((param_4 != 0) && (param_3 == 0x3e)) {
        return pcVar2;
      }
LAB_00174828:
      *(char **)(param_1 + 8) = pcVar2;
      *(undefined1 *)(param_1 + 0xc) = 9;
      return (char *)0x0;
    }
    if (cVar1 == '<') {
      if ((pcVar2[1] != '!') || (pcVar2[2] == '-')) goto LAB_0017480a;
      if (pcVar2[2] != '[') {
        pcVar2 = (char *)FUN_0017474c(param_1,pcVar2,param_3,0,iVar4);
        if (pcVar2 == (char *)0x0) {
          return (char *)0x0;
        }
        if (*pcVar2 == '>') goto LAB_00174782;
        goto LAB_001747ba;
      }
      pcVar2 = pcVar2 + 1;
      do {
        if (*pcVar2 == '<') {
          if ((pcVar2[1] != '!') || (pcVar2[2] != '[')) goto LAB_001747f2;
          pcVar2 = (char *)FUN_0017488e(param_1,pcVar2);
          if (pcVar2 == (char *)0x0) {
            return (char *)0x0;
          }
        }
        else {
          if (((*pcVar2 == ']') && (pcVar2[1] == ']')) && (pcVar2[2] == '>')) {
            pcVar2 = pcVar2 + 3;
            goto LAB_00174800;
          }
LAB_001747f2:
          pcVar2 = pcVar2 + 1;
        }
      } while (*pcVar2 != '\0');
      *(char **)(param_1 + 8) = pcVar2;
      pcVar2 = (char *)0x0;
      *(undefined1 *)(param_1 + 0xc) = 9;
LAB_00174800:
      if (pcVar2 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    else if ((cVar1 == '\"') || (cVar1 == '\'')) {
LAB_0017480a:
      if ((cVar1 == '\"') || (cVar1 == '\'')) {
        do {
          pcVar3 = pcVar2;
          pcVar2 = pcVar3 + 1;
          if (*pcVar2 == '\0') goto LAB_00174828;
        } while (*pcVar2 != cVar1);
        pcVar2 = pcVar3 + 2;
      }
      else if (cVar1 == '<') {
        if (pcVar2[1] == '?') {
          pcVar2 = pcVar2 + 2;
          while( true ) {
            if (*pcVar2 == '\0') goto LAB_00174828;
            if ((*pcVar2 == '?') && (pcVar2[1] == '>')) break;
            pcVar2 = pcVar2 + 1;
          }
          pcVar2 = pcVar2 + 2;
        }
        else {
          if (((pcVar2[1] != '!') || (pcVar2[2] != '-')) || (pcVar2[3] != '-')) goto LAB_00174862;
          pcVar2 = pcVar2 + 4;
          while( true ) {
            if (*pcVar2 == '\0') goto LAB_00174828;
            if (((*pcVar2 == '-') && (pcVar2[1] == '-')) && (pcVar2[2] == '>')) break;
            pcVar2 = pcVar2 + 1;
          }
          pcVar2 = pcVar2 + 4;
        }
      }
      else {
LAB_00174862:
        *(char **)(param_1 + 8) = pcVar2;
        pcVar2 = (char *)0x0;
        *(undefined1 *)(param_1 + 0xc) = 9;
      }
      if (pcVar2 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    else {
      if (cVar1 == '>') {
        return pcVar2;
      }
LAB_00174782:
      pcVar2 = pcVar2 + 1;
    }
    cVar1 = *pcVar2;
  } while( true );
}

