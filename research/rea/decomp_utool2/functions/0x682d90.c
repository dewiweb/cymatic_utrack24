// rea decompile_all
// name: FUN_00682d90
// address: 0x682d90
// body: available
// range: 0x682d90-0x682e44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00682d90(void)

{
  int *in_ECX;
  int iVar1;
  float fVar2;
  float in_XMM1_Da;
  float in_XMM2_Da;
  
  if (in_ECX[2] == 0) {
    FUN_00682e50();
  }
  iVar1 = in_ECX[2] + 3;
  if (in_ECX[1] < iVar1) {
    FUN_00409cf0(iVar1 / 2 + in_ECX[2] + 0xb & 0xfffffff8);
  }
  iVar1 = in_ECX[2];
  in_ECX[2] = iVar1 + 1;
  *(undefined4 *)(*in_ECX + iVar1 * 4) = 0x47c35080;
  iVar1 = in_ECX[2];
  in_ECX[2] = iVar1 + 1;
  *(float *)(*in_ECX + iVar1 * 4) = in_XMM1_Da;
  iVar1 = in_ECX[2];
  in_ECX[2] = iVar1 + 1;
  *(float *)(*in_ECX + iVar1 * 4) = in_XMM2_Da;
  fVar2 = in_XMM1_Da;
  if ((float)in_ECX[3] <= in_XMM1_Da) {
    fVar2 = (float)in_ECX[3];
  }
  if (in_XMM1_Da <= (float)in_ECX[4]) {
    in_XMM1_Da = (float)in_ECX[4];
  }
  in_ECX[3] = (int)fVar2;
  fVar2 = in_XMM2_Da;
  if ((float)in_ECX[5] <= in_XMM2_Da) {
    fVar2 = (float)in_ECX[5];
  }
  if (in_XMM2_Da <= (float)in_ECX[6]) {
    in_XMM2_Da = (float)in_ECX[6];
  }
  in_ECX[4] = (int)in_XMM1_Da;
  in_ECX[5] = (int)fVar2;
  in_ECX[6] = (int)in_XMM2_Da;
  return;
}

