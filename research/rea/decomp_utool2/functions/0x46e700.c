// rea decompile_all
// name: FUN_0046e700
// address: 0x46e700
// body: available
// range: 0x46e700-0x46e7a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046e700(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = param_1[2];
  iVar4 = param_1[2];
  if (in_ECX[1] != iVar4) {
    if (iVar4 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else {
      FUN_00419e50(iVar4,in_ECX);
    }
    in_ECX[1] = iVar4;
  }
  iVar4 = 0;
  if (0 < in_ECX[2]) {
    iVar5 = 0;
    do {
      piVar2 = (int *)(*in_ECX + iVar5);
      if (piVar2 != (int *)0x0) {
        piVar3 = (int *)(*param_1 + iVar5);
        iVar1 = *piVar3;
        *piVar2 = iVar1;
        if (iVar1 != 0) {
          LOCK();
          *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
          UNLOCK();
        }
        piVar2[1] = piVar3[1];
        piVar2[2] = piVar3[2];
        piVar2[3] = piVar3[3];
        piVar2[4] = piVar3[4];
        piVar2[5] = piVar3[5];
        *(char *)(piVar2 + 6) = (char)piVar3[6];
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x1c;
    } while (iVar4 < in_ECX[2]);
  }
  return;
}

