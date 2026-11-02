// rea decompile_all
// name: FUN_0063d7c0
// address: 0x63d7c0
// body: available
// range: 0x63d7c0-0x63d868 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0063d7c0(code *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  DWORD DVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  HANDLE pvVar7;
  int in_ECX;
  
  DVar4 = GetCurrentThreadId();
  if (DVar4 == *(DWORD *)(in_ECX + 8)) {
    uVar5 = (*param_1)(param_2);
    return uVar5;
  }
  puVar6 = operator_new(0x18);
  piVar1 = puVar6 + 1;
  *puVar6 = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  *puVar6 = juce::AsyncFunctionCallback::vftable;
  pvVar7 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCWSTR)0x0);
  puVar6[2] = pvVar7;
  puVar6[4] = param_1;
  puVar6[3] = 0;
  puVar6[5] = param_2;
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  cVar3 = FUN_0063e270();
  if (cVar3 == '\0') {
    uVar5 = 0;
  }
  else {
    WaitForSingleObject((HANDLE)puVar6[2],0xffffffff);
    uVar5 = puVar6[3];
  }
  LOCK();
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)*puVar6)(1);
  }
  return uVar5;
}

