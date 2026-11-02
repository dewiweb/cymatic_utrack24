// rea decompile_all
// name: FUN_0041bfa0
// address: 0x41bfa0
// body: available
// range: 0x41bfa0-0x41c067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041bfa0(void)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  int *in_EDX;
  int *piVar7;
  
  if ((in_ECX != in_EDX) && (piVar7 = in_ECX + 1, piVar7 != in_EDX)) {
    iVar5 = (int)piVar7 - (int)in_ECX;
    do {
      iVar3 = *piVar7;
      piVar6 = piVar7;
      if (*(double *)(*(int *)(iVar3 + 0xdc) + 0x38) < *(double *)(*(int *)(*in_ECX + 0xdc) + 0x38))
      {
        FUN_004c1df0(in_ECX + 1,in_ECX,iVar5);
        *in_ECX = iVar3;
      }
      else {
        while( true ) {
          iVar4 = piVar6[-1];
          dVar1 = *(double *)(*(int *)(iVar3 + 0xdc) + 0x38);
          dVar2 = *(double *)(*(int *)(iVar4 + 0xdc) + 0x38);
          if ((dVar2 <= dVar1) && (-1 < (int)(uint)(dVar2 < dVar1))) break;
          *piVar6 = iVar4;
          piVar6 = piVar6 + -1;
        }
        *piVar6 = iVar3;
      }
      piVar7 = piVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (piVar7 != in_EDX);
  }
  return;
}

