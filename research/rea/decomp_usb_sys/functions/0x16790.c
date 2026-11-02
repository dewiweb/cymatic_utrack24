// rea decompile_all
// name: FUN_00016790
// address: 0x16790
// body: available
// range: 0x16790-0x1685c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00016790(undefined8 param_1,uint *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  longlong *plVar6;
  
  lVar4 = DAT_00029268;
  FUN_00016bc8((longlong *)(DAT_00029268 + 0xd0));
  plVar6 = (longlong *)(lVar4 + 0x120);
  FUN_00023624(plVar6);
  *param_2 = 0;
  param_2[0x101] = 0;
  lVar4 = 0;
LAB_000167cc:
  if (lVar4 == 0) {
    if ((longlong *)*plVar6 == plVar6) {
      return;
    }
    lVar4 = *plVar6 - plVar6[2];
  }
  else {
    plVar1 = *(longlong **)(plVar6[2] + lVar4);
    if (plVar1 == plVar6) {
      return;
    }
    lVar4 = (longlong)plVar1 - plVar6[2];
  }
  if (lVar4 == 0) {
    return;
  }
  plVar1 = (longlong *)(lVar4 + 0x30);
  puVar5 = param_2 + 0x101;
  if (*(char *)(lVar4 + 0x78) != '\0') {
    puVar5 = param_2;
  }
  lVar3 = 0;
LAB_0001680d:
  if (lVar3 == 0) {
    if ((longlong *)*plVar1 == plVar1) goto LAB_000167cc;
    lVar3 = *plVar1 - *(longlong *)(lVar4 + 0x40);
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(lVar4 + 0x40) + lVar3);
    if (plVar2 == plVar1) goto LAB_000167cc;
    lVar3 = (longlong)plVar2 - *(longlong *)(lVar4 + 0x40);
  }
  if (lVar3 == 0) goto LAB_000167cc;
  if (*puVar5 < 0x100) {
    puVar5[(ulonglong)*puVar5 + 1] = *(uint *)(lVar3 + 0x1c);
    *puVar5 = *puVar5 + 1;
  }
  goto LAB_0001680d;
}

