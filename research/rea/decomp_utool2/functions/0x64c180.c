// rea decompile_all
// name: FUN_0064c180
// address: 0x64c180
// body: available
// range: 0x64c180-0x64c2de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64c2d2 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x64c2da to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064c180(int param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int in_EDX;
  char *pcVar3;
  char *pcVar4;
  
  if ((in_ECX == 0) || (in_EDX == 0)) {
    return;
  }
  if ((param_1 != 1) && (param_1 != 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  if (param_2 != (char *)0x0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (((((int)pcVar3 - (int)(param_2 + 1) != 0) && (*param_2 != '-')) &&
        (iVar2 = FUN_00657280(), iVar2 != 0)) && (param_3 != (char *)0x0)) {
      pcVar4 = param_3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if ((((int)pcVar4 - (int)(param_3 + 1) != 0) && (*param_3 != '-')) &&
         (iVar2 = FUN_00657280(), iVar2 != 0)) {
        *(char *)(in_EDX + 0xfc) = (char)param_1;
        iVar2 = FUN_00655c00();
        *(int *)(in_EDX + 0x100) = iVar2;
        if (iVar2 == 0) {
          FUN_006563b0();
          return;
        }
        FUN_004c2c30(iVar2,param_2,((int)pcVar3 - (int)(param_2 + 1)) + 1);
        iVar2 = FUN_00655c00();
        *(int *)(in_EDX + 0x104) = iVar2;
        if (iVar2 == 0) {
          if (*(void **)(in_EDX + 0x100) != (void *)0x0) {
            FID_conflict__free(*(void **)(in_EDX + 0x100));
          }
          *(undefined4 *)(in_EDX + 0x100) = 0;
          FUN_006563b0();
          return;
        }
        FUN_004c2c30(iVar2,param_3,((int)pcVar4 - (int)(param_3 + 1)) + 1);
        *(uint *)(in_EDX + 8) = *(uint *)(in_EDX + 8) | 0x4000;
        *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x100;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

