// rea decompile_all
// name: FUN_0042e450
// address: 0x42e450
// body: available
// range: 0x42e450-0x42e4db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042e450(undefined4 param_1,int param_2,int param_3,uint param_4,undefined4 param_5)

{
  char cVar1;
  undefined8 in_XMM0_Qa;
  
  cVar1 = FUN_00432b80();
  if (cVar1 != '\0') {
    if (param_2 == 0x3c3) {
      if ((0x7f < (byte)param_4) && (*(char *)(param_3 + 0x28) != '\0')) {
        cVar1 = (&DAT_00c13b10)[param_4 & 0x7f];
        FUN_0042e590();
        FUN_00434d80(&param_4,(int)cVar1,*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8),
                     in_XMM0_Qa);
        FUN_0042e4e0();
        return;
      }
    }
    else if (param_2 == 0x3c4) {
      FUN_0042e320(param_4,param_5);
    }
  }
  return;
}

