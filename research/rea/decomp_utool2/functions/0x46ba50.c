// rea decompile_all
// name: FUN_0046ba50
// address: 0x46ba50
// body: available
// range: 0x46ba50-0x46bbbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046ba50(PVOID param_1,DWORD param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  HDC pHVar4;
  HANDLE pvVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int *_Memory;
  int local_18;
  DWORD local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070166e;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  *in_ECX = juce::Typeface::vftable;
  in_ECX[2] = &DAT_00bfe12c;
  in_ECX[3] = &DAT_00bfe12c;
  in_ECX[4] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 5));
  local_8 = 0;
  *in_ECX = juce::WindowsTypeface::vftable;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  in_ECX[0xd] = pHVar4;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0x3f800000;
  in_ECX[0x1f] = 0x3f800000;
  in_ECX[0x20] = 0xffffffff;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  local_14 = 0;
  pvVar5 = AddFontMemResourceEx(param_1,param_2,(PVOID)0x0,&local_14);
  in_ECX[0x1d] = pvVar5;
  local_8 = CONCAT31(local_8._1_3_,2);
  puVar6 = (undefined4 *)FUN_0063f270(uVar3);
  uVar2 = in_ECX[2];
  in_ECX[2] = *puVar6;
  *puVar6 = uVar2;
  _Memory = (int *)(local_18 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  FUN_0046c3a0();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

