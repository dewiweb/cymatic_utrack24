// rea decompile_all
// name: FUN_00014b84
// address: 0x14b84
// body: available
// range: 0x14b84-0x14cb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00014b84(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  if ((longlong *)*plVar1 == plVar1) {
    return -0x1fffffff;
  }
  lVar8 = 0;
  lVar7 = lVar8;
LAB_00014bbb:
  if (lVar7 == 0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_00014c8f;
    lVar7 = *plVar1 - *(longlong *)(param_1 + 0xe0);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xe0) + lVar7);
    if (plVar2 == plVar1) goto LAB_00014c8f;
    lVar7 = (longlong)plVar2 - *(longlong *)(param_1 + 0xe0);
  }
  if (lVar7 != 0) {
    FUN_0001d248(lVar7 + 0x1408);
    iVar4 = FUN_0001d398((ulonglong *)(lVar7 + 0x1408));
    if (iVar4 < 0) {
      return iVar4;
    }
    plVar2 = (longlong *)(lVar7 + 0x1448);
    lVar5 = lVar8;
    do {
      lVar6 = lVar8;
      if (lVar5 == 0) {
        if ((longlong *)*plVar2 == plVar2) goto LAB_00014c5b;
        lVar5 = *plVar2 - *(longlong *)(lVar7 + 0x1458);
      }
      else {
        plVar3 = *(longlong **)(*(longlong *)(lVar7 + 0x1458) + lVar5);
        if (plVar3 == plVar2) goto LAB_00014c5b;
        lVar5 = (longlong)plVar3 - *(longlong *)(lVar7 + 0x1458);
      }
      if ((lVar5 == 0) ||
         (lVar6 = lVar5, *(char *)(lVar5 + 0x38) == *(char *)(*(longlong *)(lVar7 + 0x1468) + 3)))
      goto LAB_00014c5b;
    } while( true );
  }
LAB_00014c8f:
  iVar4 = FUN_00014804(param_1);
  if (-1 < iVar4) {
    return 0;
  }
  return iVar4;
LAB_00014c5b:
  if ((lVar6 != 0) && ((uint)*(byte *)(lVar6 + 0x48) != *(uint *)(lVar7 + 0x19a0))) {
    FUN_0001d928((longlong *)(lVar7 + 0x1408),*(byte *)(lVar7 + 0x19a0));
  }
  FUN_0001da9c((longlong *)(lVar7 + 0x1408));
  goto LAB_00014bbb;
}

