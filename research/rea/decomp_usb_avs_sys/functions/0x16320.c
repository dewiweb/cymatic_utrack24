// rea decompile_all
// name: FUN_00016320
// address: 0x16320
// body: available
// range: 0x16320-0x163ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00016320(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar3 = KsGetDevice();
  lVar4 = KsPinGetParentFilter(param_1);
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  lVar3 = *(longlong *)(lVar4 + 0x10);
  puVar5 = (ulonglong *)ExAllocatePoolWithTag(0,0x92e8,0x42737661);
  if (puVar5 != (ulonglong *)0x0) {
    FUN_0001cf40(puVar5,0,0x92e8);
    plVar6 = FUN_00018790(puVar5,uVar1,lVar3,param_1);
    if (plVar6 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar6 + 0x30))(plVar6);
      uVar8 = (ulonglong)uVar2;
      if (-1 < (int)uVar2) {
        uVar7 = KsAddItemToObjectBag(*(undefined8 *)(param_1 + 8),plVar6,FUN_0001a580);
        uVar8 = uVar7 & 0xffffffff;
        if (-1 < (int)uVar7) {
          *(longlong **)(param_1 + 0x10) = plVar6;
          return uVar7;
        }
      }
      (**(code **)*plVar6)(plVar6,1);
      return uVar8;
    }
  }
  return 0xc000009a;
}

