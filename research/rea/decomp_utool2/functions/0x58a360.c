// rea decompile_all
// name: FUN_0058a360
// address: 0x58a360
// body: available
// range: 0x58a360-0x58a405 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058a360(undefined4 param_1)

{
  int iVar1;
  undefined4 *in_ECX;
  int *_Memory;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *local_8;
  
  pcVar4 = "ExportTempBuffer::BackgroundThread";
  local_8 = in_ECX;
  FUN_0045c990("ExportTempBuffer::BackgroundThread");
  uVar2 = 0x58a386;
  FUN_00630a80(&local_8,pcVar4);
  _Memory = local_8 + -2;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  in_ECX[0x10] = param_1;
  *in_ECX = ExportTempBuffer::BackgroundThread::vftable;
  uVar3 = 0x58a3c0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x11));
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  FUN_004099e0(uVar2,uVar3,0x65);
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  return;
}

