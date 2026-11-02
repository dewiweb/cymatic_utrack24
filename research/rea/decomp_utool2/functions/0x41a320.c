// rea decompile_all
// name: FUN_0041a320
// address: 0x41a320
// body: available
// range: 0x41a320-0x41a38d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041a320(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = param_1[2];
  FUN_0041a3d0(param_1[2]);
  iVar4 = 0;
  if (0 < in_ECX[2]) {
    iVar5 = 0;
    do {
      if ((int *)(*in_ECX + iVar5) != (int *)0x0) {
        iVar1 = *param_1;
        iVar2 = *(int *)(iVar1 + iVar5);
        *(int *)(*in_ECX + iVar5) = iVar2;
        piVar3 = (int *)(iVar2 + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          *piVar3 = *piVar3 + 1;
          UNLOCK();
        }
        FUN_006310b0(iVar1 + 4 + iVar5);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x34;
    } while (iVar4 < in_ECX[2]);
  }
  return;
}

