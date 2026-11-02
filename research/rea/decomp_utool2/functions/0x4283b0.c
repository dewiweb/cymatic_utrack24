// rea decompile_all
// name: FUN_004283b0
// address: 0x4283b0
// body: available
// range: 0x4283b0-0x428454 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004283b0(void)

{
  MemMapBase *pMVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  MemMapBase *this;
  undefined4 *puVar5;
  int in_ECX;
  
  FUN_00428460();
  piVar3 = *(int **)(in_ECX + 0x88);
  piVar2 = (int *)(in_ECX + 0x88);
  piVar4 = *(int **)(in_ECX + 0xc);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  *piVar2 = 0;
  (**(code **)(*piVar4 + 0x38))(piVar4,&DAT_00c14418,piVar2);
  if (*piVar2 != 0) {
    puVar5 = operator_new(0xc);
    puVar5[1] = 1;
    *puVar5 = juce::WasapiClasses::WASAPIDeviceBase::SessionEventCallback::vftable;
    puVar5[2] = in_ECX;
    FUN_00432e20(puVar5);
    (**(code **)(*(int *)*piVar2 + 0x28))((int *)*piVar2,*(undefined4 *)(in_ECX + 0x8c));
    this = *(MemMapBase **)(in_ECX + 0x8c);
    if (*(undefined ***)this == juce::WasapiClasses::WASAPIDeviceBase::SessionEventCallback::vftable
       ) {
      pMVar1 = this + 4;
      *(int *)pMVar1 = *(int *)pMVar1 + -1;
      if (*(int *)pMVar1 == 0) {
        MemMapBase::_scalar_deleting_destructor_(this,1);
        return;
      }
    }
    else {
      (*(code *)(*(undefined ***)this)[2])(this);
    }
  }
  return;
}

