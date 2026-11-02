// rea decompile_all
// name: FUN_00509390
// address: 0x509390
// body: available
// range: 0x509390-0x5094c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00509390(int param_1,int param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int in_ECX;
  float in_XMM0_Da;
  float fVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x118) + 0x18);
  if (((((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 9)) || ((iVar1 == 0xb || (iVar1 == 1)))) ||
     ((iVar1 == 3 || ((iVar1 == 10 || (iVar1 == 0xc)))))) {
    FUN_0049c350();
  }
  else {
    in_XMM0_Da = 0.0;
  }
  dVar5 = (double)in_XMM0_Da;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x118) + 0x18);
  if ((((iVar1 == 0) || (iVar1 == 2)) || (iVar1 == 9)) ||
     (((iVar1 == 0xb || (iVar1 == 1)) ||
      ((iVar1 == 3 || ((iVar1 == 10 || (fVar3 = 0.0, iVar1 == 0xc)))))))) {
    FUN_0049c350();
    fVar3 = in_XMM0_Da;
  }
  dVar4 = (double)param_2;
  if ((dVar4 < dVar5) || ((double)fVar3 < dVar4)) {
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x80);
  }
  else {
    *(double *)(param_1 + 0x78) =
         (((dVar4 - dVar5) - (double)*(int *)(in_ECX + 0xb0)) * *(double *)(in_ECX + 0x88)) /
         ((double)fVar3 - dVar5);
  }
  FUN_00509710();
  ppuVar2 = (undefined **)**(int **)(in_ECX + 0x7c);
  if (ppuVar2 == DSPMixerPanel::vftable) {
    *(undefined1 *)((int)*(int **)(in_ECX + 0x7c) + 0x3d) = 1;
    FUN_00515db0(1);
    return;
  }
  (*(code *)ppuVar2[4])(in_ECX + 0xa0);
  return;
}

