// rea decompile_all
// name: FUN_006f1420
// address: 0x6f1420
// body: available
// range: 0x6f1420-0x6f1550 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f1420(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = 5;
  iVar1 = 5;
  if (*(char *)((int)in_ECX + 0xa6) != '\0') {
    iVar1 = 0x23;
  }
  iVar5 = (in_ECX[6] - iVar1) - in_ECX[0x27];
  iVar2 = (in_ECX[7] - in_ECX[0x27]) / in_ECX[0x24];
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  in_ECX[0x25] = iVar1;
  iVar2 = (int)((float)iVar5 / (float)in_ECX[0x23]);
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  in_ECX[0x26] = iVar1;
  FUN_004b6e60();
  if (in_ECX[0xc5] != 0) {
    FID_conflict__free((void *)in_ECX[0xc4]);
    in_ECX[0xc4] = 0;
    in_ECX[0xc5] = 0;
  }
  in_ECX[0xc6] = 0;
  FUN_006f0e60();
  (**(code **)(*in_ECX + 0xd4))();
  if (in_ECX[0xbe] != 0) {
    uVar3 = 3;
    if (*(char *)((int)in_ECX + 0xa6) != '\0') {
      uVar3 = 0x21;
    }
    FUN_006e9790(0,0,uVar3,in_ECX[7]);
  }
  iVar1 = in_ECX[0x27];
  FUN_006e9790(in_ECX[6] - iVar1,0,iVar1,in_ECX[7] - iVar1);
  if (*(char *)((int)in_ECX + 0xa6) != '\0') {
    uVar4 = 0x23;
  }
  FUN_006e9790(uVar4,in_ECX[7] - in_ECX[0x27],iVar5,in_ECX[0x27]);
  FUN_006f0800();
  return;
}

