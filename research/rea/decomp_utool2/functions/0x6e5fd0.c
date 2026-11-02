// rea decompile_all
// name: FUN_006e5fd0
// address: 0x6e5fd0
// body: available
// range: 0x6e5fd0-0x6e605d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006e5fd0(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_ECX + 0x38) + -1;
  if (-1 < iVar4) {
    while( true ) {
      iVar2 = **(int **)(*(int *)(in_ECX + 0x30) + iVar4 * 4);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(iVar2 + 8);
      }
      if (param_1 == iVar2) break;
      iVar4 = iVar4 + -1;
      if (iVar4 < 0) {
        return;
      }
    }
    iVar4 = *(int *)(*(int *)(in_ECX + 0x30) + iVar4 * 4);
    if (iVar4 != 0) {
      if (param_2 != '\0') {
        FUN_00495140();
        param_1 = extraout_ECX;
      }
      FUN_004af1c0(iVar4,param_1);
      if (0 < *(int *)(in_ECX + 0x18)) {
        piVar3 = (int *)(*(int *)(in_ECX + 8) + 0xc);
        LOCK();
        iVar4 = *piVar3;
        if (iVar4 == 0) {
          *piVar3 = 1;
          iVar4 = 0;
        }
        UNLOCK();
        if ((iVar4 == 0) && (cVar1 = FUN_0063e270(), cVar1 == '\0')) {
          LOCK();
          *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
          UNLOCK();
        }
      }
    }
  }
  return;
}

