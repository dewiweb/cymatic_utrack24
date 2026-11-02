// rea decompile_all
// name: FUN_0061f300
// address: 0x61f300
// body: available
// range: 0x61f300-0x61f40e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0061f300(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d11e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff78) &&
     (FUN_004c0391(&DAT_00cfff78,DAT_00c76070 ^ (uint)&stack0xfffffffc), DAT_00cfff78 == -1)) {
    _atexit(FUN_0072a380);
    FUN_004c0352(&DAT_00cfff78);
  }
  FUN_00637f30();
  local_8 = 0;
  puVar4 = DAT_00cfff20;
  if (DAT_00cfff20 == (undefined4 *)0x0) {
    puVar5 = operator_new(0xc);
    piVar1 = puVar5 + 1;
    *puVar5 = juce::ReferenceCountedObject::vftable;
    *piVar1 = 0;
    *puVar5 = juce::CurrentThreadHolder::vftable;
    puVar4 = DAT_00cfff20;
    if (DAT_00cfff20 != puVar5) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      puVar3 = DAT_00cfff20;
      UNLOCK();
      puVar4 = puVar5;
      if (DAT_00cfff20 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = DAT_00cfff20 + 1;
        iVar2 = *piVar1;
        DAT_00cfff20 = puVar5;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar4 = DAT_00cfff20;
        if (iVar2 == 1) {
          (**(code **)*puVar3)(1);
          puVar4 = DAT_00cfff20;
        }
      }
    }
  }
  DAT_00cfff20 = puVar4;
  puVar4 = DAT_00cfff20;
  *in_ECX = DAT_00cfff20;
  if (puVar4 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar4 + 1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  LOCK();
  DAT_00c8aaa8 = 0;
  UNLOCK();
  ExceptionList = local_10;
  return;
}

