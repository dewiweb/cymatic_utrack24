// rea decompile_all
// name: FUN_006f06e0
// address: 0x6f06e0
// body: available
// range: 0x6f06e0-0x6f074b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f06e0(void)

{
  int iVar1;
  int *in_ECX;
  double in_XMM1_Qa;
  double dVar2;
  undefined1 auStack_1c [12];
  undefined4 uStack_10;
  
  uStack_10 = 0x6f06ef;
  iVar1 = FUN_006f27e0();
  dVar2 = 0.0;
  if ((0.0 <= in_XMM1_Qa) && (dVar2 = (double)iVar1 + 3.0, in_XMM1_Qa <= (double)iVar1 + 3.0)) {
    dVar2 = in_XMM1_Qa;
  }
  if (*(double *)(in_ECX + 0x2a) != dVar2) {
    *(double *)(in_ECX + 0x2a) = dVar2;
    uStack_10 = 0x6f0733;
    (**(code **)(*in_ECX + 0xd4))();
    FUN_006e6400(auStack_1c);
    FUN_006ce9f0(1);
  }
  return;
}

