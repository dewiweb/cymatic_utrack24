// rea decompile_all
// name: FUN_004259d0
// address: 0x4259d0
// body: available
// range: 0x4259d0-0x425a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x425a6f with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004259d0(int param_1,int param_2)

{
  code *pcVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  undefined **local_10;
  undefined8 local_c;
  
  iVar3 = *in_ECX;
  if (iVar3 < 0x20) {
    piVar2 = in_ECX + 5;
  }
  else {
    FID_conflict__free((void *)in_ECX[4]);
    piVar2 = (int *)FUN_004c554b(iVar3 * 4 + 4);
    in_ECX[4] = (int)piVar2;
    if (piVar2 == (int *)0x0) {
      local_10 = std::bad_alloc::vftable;
      local_c = 0xc066d4;
      __CxxThrowException_8(&local_10,&DAT_00c4d060);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0;
  in_ECX[3] = (int)piVar2;
  if (0 < *in_ECX) {
    do {
      *(int *)(in_ECX[3] + iVar3 * 4) = *(int *)(param_1 + iVar3 * 4) + param_2 * 8;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *in_ECX);
  }
  *(undefined4 *)(in_ECX[3] + *in_ECX * 4) = 0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  return;
}

