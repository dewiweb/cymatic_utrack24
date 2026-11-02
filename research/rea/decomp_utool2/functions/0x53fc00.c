// rea decompile_all
// name: FUN_0053fc00
// address: 0x53fc00
// body: available
// range: 0x53fc00-0x53fca4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053fc00(void)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  cVar2 = FUN_0053fcb0();
  if (cVar2 != '\0') {
    puVar3 = operator_new(0x30);
    puVar3[1] = 0x4000;
    *(undefined1 *)(puVar3 + 2) = 0;
    *puVar3 = SongProjectCopyAudioFilesToLibrary::vftable;
    puVar3[3] = in_ECX;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar1 = *(undefined4 **)(in_ECX + 0x78);
    if ((puVar1 != puVar3) &&
       (*(undefined4 **)(in_ECX + 0x78) = puVar3, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    if (DAT_00c8a5e4 != 0) {
      FUN_005b5fb0(*(undefined4 *)(in_ECX + 0x78));
      FUN_005b66b0();
    }
  }
  return;
}

