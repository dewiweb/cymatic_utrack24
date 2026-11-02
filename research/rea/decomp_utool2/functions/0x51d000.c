// rea decompile_all
// name: FUN_0051d000
// address: 0x51d000
// body: available
// range: 0x51d000-0x51d130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0051d000(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *_Memory;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070a01b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x288) != 0) {
    FUN_00410ea0(&stack0xffffffd4);
    local_8 = 0;
    FUN_006f6dd6(*(undefined4 *)(in_ECX + 0xa0),0,&juce::TreeView::RTTI_Type_Descriptor,
                 &ProjectExplorer::RTTI_Type_Descriptor,0);
    local_8 = 0xffffffff;
    cVar2 = FUN_00517d90();
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_0051d07e;
    }
  }
  uVar3 = 0;
LAB_0051d07e:
  *(undefined1 *)(in_ECX + 0x3c0) = uVar3;
  uVar4 = FUN_00410ea0();
  local_8 = 1;
  FUN_006e4900(uVar4);
  FUN_006e6170(0x1000281);
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  (**(code **)(*(int *)(in_ECX + 0x28c) + 0x28))();
  FUN_004f7a10(*(char *)(in_ECX + 0x3c0) != '\0');
  ExceptionList = local_10;
  return;
}

