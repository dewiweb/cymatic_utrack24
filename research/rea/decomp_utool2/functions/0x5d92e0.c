// rea decompile_all
// name: FUN_005d92e0
// address: 0x5d92e0
// body: available
// range: 0x5d92e0-0x5d9400 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005d92e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  float10 fVar3;
  float fVar4;
  double dVar5;
  
  _memset(in_ECX,0,0x38);
  in_ECX[3] = in_EDX;
  in_ECX[1] = in_EDX[1];
  in_ECX[2] = in_EDX[1];
  *in_ECX = *in_EDX;
  uVar2 = FUN_005d97f0(0);
  in_ECX[5] = uVar2;
  uVar2 = FUN_005d9760();
  in_ECX[0xb] = uVar2;
  uVar1 = in_EDX[4];
  dVar5 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar5 = -dVar5;
  }
  fVar3 = (float10)FUN_004ccda2(dVar5,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  fVar4 = (float)fVar3 + 0.5;
  FUN_00436410();
  in_ECX[0xc] = (int)fVar4;
  uVar1 = in_EDX[5];
  dVar5 = (double)(uVar1 & 0x1fffff);
  if ((int)uVar1 < 0) {
    dVar5 = -dVar5;
  }
  fVar3 = (float10)FUN_004ccda2(dVar5,((int)uVar1 >> 0x15 & 0x3ffU) - 0x314);
  fVar4 = (float)fVar3 + 0.5;
  FUN_00436410();
  in_ECX[0xd] = (int)fVar4;
  return 0;
}

