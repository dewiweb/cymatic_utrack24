// rea decompile_all
// name: FUN_0046cc80
// address: 0x46cc80
// body: available
// range: 0x46cc80-0x46cd0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046cc80(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *in_ECX;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = in_ECX[2] + 10;
  if (in_ECX[1] < iVar3) {
    FUN_0040ede0(iVar3 / 2 + 8 + iVar3 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  iVar4 = 9;
  in_ECX[2] = iVar3 + 10;
  piVar2 = (int *)(iVar3 * 0x10 + 8 + *in_ECX);
  do {
    if (piVar2 != (int *)0x8) {
      iVar3 = *param_2;
      piVar2[-2] = iVar3;
      piVar1 = (int *)(iVar3 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      iVar3 = param_2[1];
      piVar2[-1] = iVar3;
      piVar1 = (int *)(iVar3 + -8);
      if (piVar1 != &DAT_00bfe124) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      *piVar2 = param_2[2];
      iVar3 = param_2[3];
      piVar2[1] = iVar3;
      if (iVar3 != 0) {
        LOCK();
        *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
        UNLOCK();
      }
    }
    piVar2 = piVar2 + 4;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return;
}

