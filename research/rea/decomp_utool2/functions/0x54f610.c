// rea decompile_all
// name: FUN_0054f610
// address: 0x54f610
// body: available
// range: 0x54f610-0x54f6f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


longlong FUN_0054f610(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int in_ECX;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00710390;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  lVar3 = 0;
  lVar5 = 0;
  switch(*(undefined4 *)(in_ECX + 8)) {
  case 1:
    iVar4 = 0;
    lVar5 = 0;
    if (0 < *(int *)(in_ECX + 0x58)) {
      do {
        FUN_004110e0(&local_14,iVar4);
        local_8 = 0;
        lVar6 = FUN_0054f610();
        local_8 = 0xffffffff;
        lVar5 = lVar6 + lVar3;
        if (local_14 != (undefined4 *)0x0) {
          LOCK();
          piVar1 = local_14 + 1;
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)*local_14)(1);
          }
        }
        iVar4 = iVar4 + 1;
        lVar3 = lVar6 + lVar3;
      } while (iVar4 < *(int *)(in_ECX + 0x58));
    }
    break;
  case 2:
    lVar5 = FUN_00560170();
    break;
  case 3:
    lVar5 = FUN_0040eaa0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    break;
  case 4:
    lVar5 = 0x1000;
  }
  ExceptionList = local_10;
  return lVar5;
}

