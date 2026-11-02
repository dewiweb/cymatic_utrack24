// rea decompile_all
// name: FUN_0045e270
// address: 0x45e270
// body: available
// range: 0x45e270-0x45e312 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0045e270(void)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int in_EDX;
  int iVar3;
  
  iVar1 = *in_ECX;
  uVar2 = FUN_00443260();
  for (iVar3 = (in_EDX - ((-(uint)(uVar2 < 0x10000) & 0xfffffffe) + 4)) + -2;
      (uVar2 != 0 && (-1 < iVar3)); iVar3 = iVar3 - ((-(uint)(uVar2 < 0x10000) & 0xfffffffe) + 4)) {
    if (uVar2 < 0x10000) {
      *(short *)*in_ECX = (short)uVar2;
    }
    else {
      *(short *)*in_ECX = (short)(uVar2 - 0x10000 >> 10) + -0x2800;
      *in_ECX = *in_ECX + 2;
      *(ushort *)*in_ECX = ((ushort)(uVar2 - 0x10000) & 0x3ff) + 0xdc00;
    }
    *in_ECX = *in_ECX + 2;
    uVar2 = FUN_00443260();
  }
  *(undefined2 *)*in_ECX = 0;
  return (*in_ECX - iVar1) + 2;
}

