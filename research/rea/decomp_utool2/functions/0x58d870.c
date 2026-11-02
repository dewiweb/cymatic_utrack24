// rea decompile_all
// name: FUN_0058d870
// address: 0x58d870
// body: available
// range: 0x58d870-0x58d957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0058d870(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  void *_Memory;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00713f81;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = Exportjob_Song::vftable;
  in_ECX[0x49] = ResamplerThreadPool::vftable;
  local_8 = 0;
  FUN_0062ef90(in_ECX,5000,in_ECX);
  FUN_0061eea0(uVar1);
  CloseHandle((HANDLE)in_ECX[0x56]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  FUN_00407640();
  _Memory = (void *)in_ECX[0x4a];
  FID_conflict__free(_Memory);
  in_ECX[0x3b] = ReaderThreadPool::vftable;
  local_8 = 1;
  FUN_0062ef90(extraout_ECX,5000,_Memory);
  FUN_0061eea0();
  CloseHandle((HANDLE)in_ECX[0x48]);
  DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x42));
  FUN_00407640();
  FID_conflict__free((void *)in_ECX[0x3c]);
  FUN_0058e8a0();
  ExceptionList = local_10;
  return;
}

