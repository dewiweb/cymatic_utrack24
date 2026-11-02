// rea decompile_all
// name: FUN_0064c2e0
// address: 0x64c2e0
// body: available
// range: 0x64c2e0-0x64c4ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64c4eb to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064c2e0(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                 char *param_6,int param_7)

{
  char cVar1;
  int iVar2;
  void *_Dst;
  int in_ECX;
  char *pcVar3;
  int in_EDX;
  char *pcVar4;
  int iVar5;
  
  if (((((in_ECX != 0) && (in_EDX != 0)) && (param_1 != (char *)0x0)) && (param_6 != (char *)0x0))
     && (((int)param_5 < 1 || (param_7 != 0)))) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if ((3 < param_4) || (0xff < param_5)) {
LAB_0064c4e9:
                    /* WARNING: Subroutine does not return */
      FUN_00656590();
    }
    iVar5 = 0;
    if (0 < (int)param_5) {
      do {
        pcVar4 = *(char **)(param_7 + iVar5 * 4);
        if (pcVar4 == (char *)0x0) goto LAB_0064c4e9;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        iVar2 = FUN_00657280();
        if (iVar2 == 0) goto LAB_0064c4e9;
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)param_5);
    }
    iVar5 = FUN_00655c00();
    *(int *)(in_EDX + 0xd0) = iVar5;
    if (iVar5 != 0) {
      FUN_004c2c30(iVar5,param_1,pcVar3 + (1 - (int)(param_1 + 1)));
      *(undefined4 *)(in_EDX + 0xd4) = param_2;
      *(undefined4 *)(in_EDX + 0xd8) = param_3;
      *(char *)(in_EDX + 0xe4) = (char)param_4;
      *(char *)(in_EDX + 0xe5) = (char)param_5;
      pcVar3 = param_6;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      iVar5 = FUN_00655c00();
      *(int *)(in_EDX + 0xdc) = iVar5;
      if (iVar5 == 0) {
        FUN_006563b0();
        return;
      }
      FUN_004c2c30(iVar5,param_6,pcVar3 + (1 - (int)(param_6 + 1)));
      _Dst = (void *)FUN_00655c00();
      *(void **)(in_EDX + 0xe0) = _Dst;
      if (_Dst == (void *)0x0) {
        FUN_006563b0();
        return;
      }
      _memset(_Dst,0,param_5 * 4 + 4);
      iVar5 = 0;
      if (0 < (int)param_5) {
        do {
          pcVar4 = *(char **)(param_7 + iVar5 * 4);
          pcVar3 = pcVar4 + 1;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          iVar2 = FUN_00655c00();
          *(int *)(*(int *)(in_EDX + 0xe0) + iVar5 * 4) = iVar2;
          if (iVar2 == 0) {
            FUN_006563b0();
            return;
          }
          FUN_004c2c30(iVar2,*(undefined4 *)(param_7 + iVar5 * 4),pcVar4 + (1 - (int)pcVar3));
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_5);
      }
      *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x400;
      *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x80;
      return;
    }
    FUN_006563b0();
  }
  return;
}

