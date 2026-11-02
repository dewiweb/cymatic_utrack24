// rea decompile_all
// name: Catch_All@0045dd01
// address: 0x45dd01
// body: available
// range: 0x45dd01-0x45dd78 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Catch_All_0045dd01(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int extraout_EDX;
  int unaff_EBX;
  int unaff_EBP;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  FUN_0045bd10();
  __CxxThrowException_8(0,0);
  do {
    uVar1 = *unaff_ESI;
    unaff_ESI = unaff_ESI + 1;
    unaff_ESI[extraout_EDX + -0xc1757d] = uVar1;
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  cVar2 = *(char *)(unaff_EBP + 0xc);
  *(int *)(unaff_EBX + 0x14) = extraout_EDX;
  if (cVar2 != '\0') {
    *(undefined2 *)(unaff_EBX + 0xc) = 0x2c2e;
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return;
  }
  puVar3 = *(undefined4 **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBX + 0xc) = *(undefined1 *)*puVar3;
  *(undefined1 *)(unaff_EBX + 0xd) = *(undefined1 *)puVar3[1];
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

