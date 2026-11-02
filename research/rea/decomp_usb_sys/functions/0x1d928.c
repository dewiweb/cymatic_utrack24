// rea decompile_all
// name: FUN_0001d928
// address: 0x1d928
// body: available
// range: 0x1d928-0x1d9de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001d928(longlong *param_1,byte param_2)

{
  longlong *plVar1;
  byte *in_RAX;
  longlong lVar2;
  undefined8 uVar3;
  byte local_res10 [24];
  uint7 in_stack_ffffffffffffffd9;
  
  lVar2 = 0;
  plVar1 = param_1 + 8;
  do {
    if (lVar2 != 0) {
      in_RAX = (byte *)(param_1[10] + lVar2);
      if (*(longlong **)in_RAX != plVar1) {
        lVar2 = (longlong)*(longlong **)in_RAX - param_1[10];
        goto LAB_0001d968;
      }
LAB_0001d975:
      lVar2 = 0;
      break;
    }
    if ((longlong *)*plVar1 == plVar1) goto LAB_0001d975;
    lVar2 = *plVar1 - param_1[10];
LAB_0001d968:
    if (lVar2 == 0) goto LAB_0001d975;
  } while (*(byte *)(lVar2 + 0x48) != param_2);
  if (lVar2 != 0) {
    uVar3 = 0;
    local_res10[0] = param_2;
    in_RAX = FUN_0001bf88(*param_1,0,0xb);
    if ((((in_RAX != (byte *)0x0) && (param_2 <= in_RAX[4])) && (param_2 != 0)) &&
       (in_RAX = (byte *)FUN_0001cb60(*param_1,in_RAX[3],CONCAT71((int7)((ulonglong)uVar3 >> 8),1),1
                                      ,(ulonglong)in_stack_ffffffffffffffd9 << 8,1,local_res10),
       -1 < (int)in_RAX)) {
      param_1[0xc] = *(longlong *)(lVar2 + 0x40);
      return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
    }
  }
  return (ulonglong)in_RAX & 0xffffffffffffff00;
}

