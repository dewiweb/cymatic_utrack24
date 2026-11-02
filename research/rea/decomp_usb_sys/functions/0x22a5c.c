// rea decompile_all
// name: FUN_00022a5c
// address: 0x22a5c
// body: available
// range: 0x22a5c-0x22b41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00022a5c(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 local_res18 [4];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x28);
  lVar5 = *(longlong *)(param_1 + 0x30);
  plVar6 = *(longlong **)(lVar3 + 0x50);
  if (plVar6 == (longlong *)(lVar3 + 0x50)) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)plVar6 - *(longlong *)(lVar3 + 0x60);
  }
  while( true ) {
    if (lVar8 == 0) {
      *(undefined4 *)(param_2 + (ulonglong)*(uint *)(lVar4 + 0x30) * 4) = 0xcf;
      *(undefined4 *)(param_2 + (ulonglong)*(uint *)(lVar5 + 0x30) * 4) = 0xcf;
    }
    else {
      puVar7 = (undefined1 *)FUN_00024350(lVar8);
      puVar1 = (uint *)(param_2 + (ulonglong)*(uint *)(lVar5 + 0x30) * 4);
      puVar2 = (uint *)(param_2 + (ulonglong)*(uint *)(lVar4 + 0x30) * 4);
      if (puVar7 == (undefined1 *)0x0) {
        local_res18[0] = 0;
        FUN_00022c18((uint *)(lVar3 + 0x130),puVar2,puVar1,(undefined1 *)local_res18,0);
        *(int *)(lVar4 + 0xc0) = *(int *)(lVar4 + 0xc0) + 1;
      }
      else {
        FUN_00022c18((uint *)(lVar3 + 0x130),puVar2,puVar1,puVar7,1);
        FUN_000243a8(lVar8,4);
        *(int *)(lVar4 + 0xa8) = *(int *)(lVar4 + 0xa8) + 1;
      }
    }
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    param_2 = param_2 + (ulonglong)param_4 * 4;
  }
  return;
}

