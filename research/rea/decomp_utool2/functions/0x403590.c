// rea decompile_all
// name: FUN_00403590
// address: 0x403590
// body: available
// range: 0x403590-0x403699 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00403590(int param_1)

{
  double dVar1;
  double *in_ECX;
  int in_EDX;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  undefined4 in_XMM3_Da;
  undefined4 in_XMM3_Db;
  
  dVar7 = 0.0;
  pdVar3 = in_ECX;
  iVar6 = in_EDX;
  if (3 < in_EDX) {
    iVar2 = (in_EDX - 4U >> 2) + 1;
    iVar6 = in_EDX + iVar2 * -4;
    do {
      dVar1 = *pdVar3;
      pdVar4 = pdVar3 + param_1;
      pdVar5 = pdVar4 + param_1;
      pdVar3 = pdVar5 + param_1 + param_1;
      dVar7 = pdVar5[param_1] + *pdVar5 + *pdVar4 + dVar1 + dVar7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  for (; 0 < iVar6; iVar6 = iVar6 + -1) {
    dVar7 = dVar7 + *pdVar3;
    pdVar3 = pdVar3 + param_1;
  }
  dVar7 = (double)CONCAT44(in_XMM3_Db,in_XMM3_Da) / dVar7;
  if (3 < in_EDX) {
    iVar6 = (in_EDX - 4U >> 2) + 1;
    in_EDX = in_EDX + iVar6 * -4;
    do {
      *in_ECX = *in_ECX * dVar7;
      pdVar3 = in_ECX + param_1;
      *pdVar3 = *pdVar3 * dVar7;
      pdVar3 = pdVar3 + param_1;
      *pdVar3 = *pdVar3 * dVar7;
      pdVar3 = pdVar3 + param_1;
      *pdVar3 = *pdVar3 * dVar7;
      in_ECX = pdVar3 + param_1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  for (; 0 < in_EDX; in_EDX = in_EDX + -1) {
    *in_ECX = *in_ECX * dVar7;
    in_ECX = in_ECX + param_1;
  }
  return;
}

