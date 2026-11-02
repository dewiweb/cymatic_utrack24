// rea decompile_all
// name: FUN_00544580
// address: 0x544580
// body: available
// range: 0x544580-0x5446af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00544580(void)

{
  undefined4 *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070edde;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  *in_ECX = GlobalNotifierListener::vftable;
  iVar3 = FUN_00560890(uVar2);
  EnterCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  FUN_00447220(local_14);
  LeaveCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x18));
  in_ECX[1] = juce::ChangeListener::vftable;
  puVar1 = in_ECX + 1;
  in_ECX[2] = juce::Timer::vftable;
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 7);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *in_ECX = AllProjectCollection::vftable;
  *puVar1 = AllProjectCollection::vftable;
  in_ECX[2] = AllProjectCollection::vftable;
  InitializeCriticalSection(lpCriticalSection);
  FUN_00542cf0(lpCriticalSection);
  FUN_0054cd20(lpCriticalSection);
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  DAT_00c8a5c4 = in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004097d0(puVar1);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004097d0(puVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

