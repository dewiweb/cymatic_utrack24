// rea decompile_all
// name: FUN_00016a00
// address: 0x16a00
// body: available
// range: 0x16a00-0x16ae2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_00016a00(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  lVar2 = KsGetDevice();
  lVar3 = KsPinGetParentFilter(param_1);
  uVar1 = *(undefined8 *)(lVar2 + 0x10);
  lVar2 = *(longlong *)(lVar3 + 0x10);
  puVar4 = (ulonglong *)ExAllocatePoolWithTag(0,0x1d8,0x42737661);
  if (puVar4 == (ulonglong *)0x0) {
    uVar5 = 0xc000009a;
  }
  else {
    FUN_0001cf40(puVar4,0,0x1d8);
    FUN_00016af0(puVar4,uVar1,lVar2,param_1);
    *puVar4 = (ulonglong)&PTR_FUN_0001ee20;
    *(undefined4 *)(puVar4 + 5) = 2;
    *(undefined8 *)((longlong)puVar4 + 0x54) = *(undefined8 *)(puVar4[4] + 0x14);
    uVar5 = FUN_00017750();
    if ((-1 < (int)uVar5) &&
       (uVar5 = KsAddItemToObjectBag(*(undefined8 *)(param_1 + 8),puVar4,FUN_0001a580),
       -1 < (int)uVar5)) {
      *(ulonglong **)(param_1 + 0x10) = puVar4;
      return uVar5;
    }
    uVar5 = uVar5 & 0xffffffff;
    (**(code **)*puVar4)(puVar4,1);
  }
  return uVar5;
}

