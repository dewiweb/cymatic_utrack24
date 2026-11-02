// rea decompile_all
// name: ___acrt_fp_strflt_to_string
// address: 0x4e2f09
// body: available
// range: 0x4e2f09-0x4e2fc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___acrt_fp_strflt_to_string
   
   Library: Visual Studio 2015 Release */

int ___acrt_fp_strflt_to_string(char *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    *param_1 = '\0';
    iVar5 = param_3;
    if (param_3 < 1) {
      iVar5 = 0;
    }
    if (param_2 <= iVar5 + 1U) {
      piVar1 = __errno();
      iVar5 = 0x22;
      goto LAB_004e2f1d;
    }
    if (param_4 != 0) {
      pcVar4 = *(char **)(param_4 + 8);
      *param_1 = '0';
      pcVar2 = param_1;
      for (; pcVar2 = pcVar2 + 1, 0 < param_3; param_3 = param_3 + -1) {
        cVar3 = *pcVar4;
        if (cVar3 == '\0') {
          cVar3 = '0';
        }
        else {
          pcVar4 = pcVar4 + 1;
        }
        *pcVar2 = cVar3;
      }
      *pcVar2 = '\0';
      if ((-1 < param_3) && ('4' < *pcVar4)) {
        while (pcVar2 = pcVar2 + -1, *pcVar2 == '9') {
          *pcVar2 = '0';
        }
        *pcVar2 = *pcVar2 + '\x01';
      }
      if (*param_1 == '1') {
        *(int *)(param_4 + 4) = *(int *)(param_4 + 4) + 1;
      }
      else {
        pcVar4 = param_1 + 1;
        do {
          cVar3 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar3 != '\0');
        FUN_004c1df0(param_1,param_1 + 1,pcVar4 + (1 - (int)(param_1 + 2)));
      }
      return 0;
    }
  }
  piVar1 = __errno();
  iVar5 = 0x16;
LAB_004e2f1d:
  *piVar1 = iVar5;
  FUN_004d0d1c();
  return iVar5;
}

