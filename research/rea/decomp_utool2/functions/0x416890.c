// rea decompile_all
// name: FUN_00416890
// address: 0x416890
// body: available
// range: 0x416890-0x416926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416926 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00416890(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  undefined **local_10;
  undefined8 local_c;
  
  iVar1 = *in_ECX * 4 + 4;
  iVar3 = iVar1 + (in_ECX[1] * *in_ECX + 8) * 4;
  in_ECX[2] = iVar3;
  FID_conflict__free((void *)in_ECX[4]);
  iVar3 = FUN_004c554b(iVar3);
  in_ECX[4] = iVar3;
  if (iVar3 != 0) {
    iVar4 = 0;
    in_ECX[3] = iVar3;
    iVar3 = iVar3 + iVar1;
    if (0 < *in_ECX) {
      do {
        *(int *)(in_ECX[3] + iVar4 * 4) = iVar3;
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + in_ECX[1] * 4;
      } while (iVar4 < *in_ECX);
    }
    *(undefined4 *)(in_ECX[3] + *in_ECX * 4) = 0;
    *(undefined1 *)(in_ECX + 0x25) = 0;
    return;
  }
  local_10 = std::bad_alloc::vftable;
  local_c = 0xc066d4;
  __CxxThrowException_8(&local_10,&DAT_00c4d060);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

