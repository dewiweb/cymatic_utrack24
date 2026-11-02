// rea decompile_all
// name: FUN_00591780
// address: 0x591780
// body: available
// range: 0x591780-0x591848 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00591780(undefined4 param_1,undefined4 param_2)

{
  int *_Memory;
  int iVar1;
  undefined4 *in_ECX;
  
  FUN_0045c990("ExportWriteThreadPoolJob");
  *in_ECX = juce::ThreadPoolJob::vftable;
  in_ECX[1] = in_ECX;
  _Memory = in_ECX + -2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    *_Memory = *_Memory + 1;
    UNLOCK();
  }
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined1 *)((int)in_ECX + 0xe) = 0;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  *in_ECX = ExportWriteThreadPoolJob::vftable;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = param_1;
  in_ECX[7] = param_2;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  in_ECX[0xc] = &DAT_00bfe12c;
  in_ECX[0xd] = &DAT_00bfe12c;
  in_ECX[0xf] = 0;
  FUN_0058e480(in_ECX);
  return;
}

