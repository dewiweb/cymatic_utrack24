// rea decompile_all
// name: FUN_0045be27
// address: 0x45be27
// body: available
// range: 0x45be27-0x45bea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0045be27(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(unaff_EBP + 0xc) != 0)) {
    FUN_004c2c30();
  }
  if (0xf < (uint)unaff_ESI[5]) {
    FUN_0045b830(*unaff_ESI,unaff_ESI[5] + 1);
  }
  unaff_ESI[5] = 0xf;
  unaff_ESI[4] = 0;
  puVar2 = unaff_ESI;
  if (0xf < (uint)unaff_ESI[5]) {
    puVar2 = (undefined4 *)*unaff_ESI;
  }
  *(undefined1 *)puVar2 = 0;
  iVar1 = *(int *)(unaff_EBP + 0xc);
  *unaff_ESI = unaff_EBX;
  unaff_ESI[5] = unaff_EDI;
  unaff_ESI[4] = iVar1;
  if (0xf < (uint)unaff_ESI[5]) {
    unaff_ESI = unaff_EBX;
  }
  *(undefined1 *)((int)unaff_ESI + iVar1) = 0;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

