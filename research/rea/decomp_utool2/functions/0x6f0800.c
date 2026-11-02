// rea decompile_all
// name: FUN_006f0800
// address: 0x6f0800
// body: available
// range: 0x6f0800-0x6f099a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0800(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x7c) + 8);
  iVar1 = *(int *)(in_ECX + 0x84) + *(int *)(in_ECX + 0x94);
  if (iVar2 < iVar1) {
    iVar2 = iVar1;
  }
  dVar4 = (double)iVar2;
  if ((double)iVar2 <= 0.0) {
    dVar4 = 0.0;
  }
  if ((*(double *)(in_ECX + 0x180) != 0.0) || (iVar2 = in_ECX, *(double *)(in_ECX + 0x188) != dVar4)
     ) {
    *(undefined8 *)(in_ECX + 0x180) = 0;
    *(double *)(in_ECX + 0x188) = dVar4;
    FUN_006b03b0(in_ECX,*(undefined8 *)(in_ECX + 400),*(undefined8 *)(in_ECX + 0x198));
    FUN_006aff30();
    iVar2 = extraout_ECX;
  }
  dVar5 = (double)*(int *)(in_ECX + 0x84);
  dVar4 = (double)*(int *)(in_ECX + 0x94) + dVar5;
  if (dVar4 <= dVar5) {
    dVar4 = dVar5;
  }
  FUN_006b03b0(iVar2,dVar5,dVar4);
  iVar2 = FUN_006f27e0();
  dVar4 = (double)*(int *)(in_ECX + 0x98) + *(double *)(in_ECX + 0xa8);
  if (dVar4 <= (double)iVar2) {
    dVar4 = (double)iVar2;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if ((*(double *)(in_ECX + 0x280) != 0.0) ||
     (uVar3 = extraout_ECX_00, *(double *)(in_ECX + 0x288) != dVar4)) {
    *(undefined8 *)(in_ECX + 0x280) = 0;
    *(double *)(in_ECX + 0x288) = dVar4;
    FUN_006b03b0(extraout_ECX_00,*(undefined8 *)(in_ECX + 0x290),*(undefined8 *)(in_ECX + 0x298));
    FUN_006aff30();
    uVar3 = extraout_ECX_01;
  }
  dVar4 = *(double *)(in_ECX + 0xa8);
  dVar5 = (double)*(int *)(in_ECX + 0x98) + dVar4;
  if (dVar5 <= dVar4) {
    dVar5 = dVar4;
  }
  FUN_006b03b0(uVar3,dVar4,dVar5);
  return;
}

