// rea decompile_all
// name: FUN_00428000
// address: 0x428000
// body: available
// range: 0x428000-0x4280de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00428000(void)

{
  MemMapBase *pMVar1;
  int *piVar2;
  MemMapBase *this;
  uint uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fd7a8;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::WasapiClasses::WASAPIDeviceBase::vftable;
  piVar2 = (int *)in_ECX[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2,uVar3);
  }
  in_ECX[2] = 0;
  CloseHandle((HANDLE)in_ECX[0x12]);
  local_8 = 0;
  this = (MemMapBase *)in_ECX[0x23];
  if (this != (MemMapBase *)0x0) {
    if (*(undefined ***)this == juce::WasapiClasses::WASAPIDeviceBase::SessionEventCallback::vftable
       ) {
      pMVar1 = this + 4;
      *(int *)pMVar1 = *(int *)pMVar1 + -1;
      if (*(int *)pMVar1 == 0) {
        MemMapBase::_scalar_deleting_destructor_(this,1);
      }
    }
    else {
      (*(code *)(*(undefined ***)this)[2])(this);
    }
  }
  local_8 = 1;
  piVar2 = (int *)in_ECX[0x22];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FID_conflict__free((void *)in_ECX[0x1b]);
  FID_conflict__free((void *)in_ECX[0x13]);
  FID_conflict__free((void *)in_ECX[0xf]);
  local_8 = 2;
  piVar2 = (int *)in_ECX[3];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  local_8 = 3;
  piVar2 = (int *)in_ECX[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = local_10;
  return;
}

