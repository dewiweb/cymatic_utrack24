// rea decompile_all
// name: FUN_0001a420
// address: 0x1a420
// body: available
// range: 0x1a420-0x1a56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_avs_x64.pdb (GUID 9c4162c5-ab4a-46f5-9caf-9da7a69640ea, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001a420(ulonglong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  
  lVar5 = KsGetDevice();
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  puVar6 = (ulonglong *)ExAllocatePoolWithTag(0,0x98,0x42737661);
  if (puVar6 == (ulonglong *)0x0) {
    return 0xc000009a;
  }
  FUN_0001cf40(puVar6,0,0x98);
  puVar1 = puVar6 + 1;
  *puVar6 = (ulonglong)&PTR_FUN_0001f060;
  puVar6[2] = (ulonglong)puVar1;
  *puVar1 = (ulonglong)puVar1;
  puVar6[3] = param_1;
  puVar6[7] = 8;
  puVar1 = puVar6 + 5;
  puVar6[6] = (ulonglong)puVar1;
  *puVar1 = (ulonglong)puVar1;
  puVar6[8] = uVar7;
  plVar4 = *(longlong **)(uVar7 + 0x4008);
  plVar2 = (longlong *)((longlong)puVar6 + *(longlong *)(uVar7 + 0x4010));
  lVar5 = *plVar4;
  plVar2[1] = (longlong)plVar4;
  *plVar2 = lVar5;
  *(longlong **)(*plVar4 + 8) = plVar2;
  *plVar4 = (longlong)plVar2;
  FUN_0001cf40(puVar6 + 9,0,0x40);
  *(undefined1 *)(puVar6 + 0x11) = 0;
  lVar5 = KsGetParent(param_1);
  uVar7 = *(ulonglong *)(lVar5 + 0x10);
  puVar6[0x12] = uVar7;
  uVar3 = *(undefined4 *)(uVar7 + 4);
  *(undefined1 *)((longlong)puVar6 + 0x89) = 0;
  *(undefined1 *)((longlong)puVar6 + 0x8a) = 0;
  *(undefined4 *)(puVar6 + 4) = uVar3;
  *puVar6 = (ulonglong)&PTR_FUN_0001f038;
  uVar7 = KsAddItemToObjectBag(*(undefined8 *)(param_1 + 8),puVar6,FUN_0001a580);
  if ((int)uVar7 < 0) {
    (**(code **)*puVar6)(puVar6,1);
    return uVar7 & 0xffffffff;
  }
  *(ulonglong **)(param_1 + 0x10) = puVar6;
  return uVar7;
}

