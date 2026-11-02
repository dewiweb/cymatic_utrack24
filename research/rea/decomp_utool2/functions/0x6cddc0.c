// rea decompile_all
// name: FUN_006cddc0
// address: 0x6cddc0
// body: available
// range: 0x6cddc0-0x6cde93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cddc0(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *lParam;
  int iVar3;
  BOOL BVar4;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072688b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lParam = operator_new(0x10);
  piVar1 = lParam + 1;
  *lParam = juce::ReferenceCountedObject::vftable;
  *piVar1 = 0;
  local_8 = 1;
  *lParam = `public:_void___thiscall_juce::Component::postCommandMessage(int)'::__l2::
            CustomCommandMessage::vftable;
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0040de70(in_ECX);
  }
  lParam[2] = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  lParam[3] = param_1;
  if ((DAT_00c8a658 != 0) && (*(char *)(DAT_00c8a658 + 4) == '\0')) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    BVar4 = PostMessageW(DAT_00c8a650,0x47b,0,(LPARAM)lParam);
    if (BVar4 != 0) {
      ExceptionList = local_10;
      return;
    }
  }
  LOCK();
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  LOCK();
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)*lParam)(1,uVar2);
  }
  ExceptionList = local_10;
  return;
}

