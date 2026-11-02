// rea decompile_all
// name: FUN_0063d710
// address: 0x63d710
// body: available
// range: 0x63d710-0x63d79c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063d710(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    puVar4 = operator_new(0x2c);
    *puVar4 = juce::ActionBroadcaster::vftable;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    InitializeCriticalSection((LPCRITICAL_SECTION)(puVar4 + 5));
    puVar1 = (undefined4 *)*in_ECX;
    if ((puVar1 != puVar4) && (*in_ECX = (int)puVar4, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar3 = param_1;
  iVar2 = *in_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x14));
  if (iVar3 != 0) {
    FUN_00447220(&param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x14));
  return;
}

