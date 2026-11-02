// rea decompile_all
// name: FUN_0001d9e8
// address: 0x1d9e8
// body: available
// range: 0x1d9e8-0x1da94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 1894bf6845e04e761d2362126ba24f9db4c4a1c4e9fe4a3bde506a90bf5eac94
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB arch_usb_x64.pdb (GUID 7cbd86b9-a0ee-4070-936b-4337fbb7c150, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulonglong FUN_0001d9e8(longlong *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  longlong lVar3;
  byte local_res10 [24];
  uint7 in_stack_ffffffffffffffd9;
  
  lVar3 = *param_1;
  pbVar1 = FUN_0001bf88(lVar3,0,0xb);
  if (pbVar1 == (byte *)0x0) {
    pbVar2 = FUN_0001bf88(lVar3,0,10);
    param_1[0xc] = (longlong)pbVar2;
    pbVar1 = (byte *)0x0;
    if (pbVar2 == (byte *)0x0) {
LAB_0001da91:
      return CONCAT71((int7)((ulonglong)pbVar1 >> 8),1);
    }
  }
  else {
    pbVar2 = (byte *)FUN_0001cae8(lVar3,pbVar1[3],1,1,(ulonglong)in_stack_ffffffffffffffd9 << 8,1,
                                  local_res10);
    if (((-1 < (int)pbVar2) &&
        (pbVar2 = (byte *)CONCAT71((int7)((ulonglong)pbVar2 >> 8),local_res10[0]),
        local_res10[0] <= pbVar1[4])) && (local_res10[0] != 0)) {
      pbVar2 = FUN_0001bf4c(*param_1,0,(uint)pbVar1[(ulonglong)local_res10[0] + 4]);
      param_1[0xc] = (longlong)pbVar2;
      if (pbVar2 != (byte *)0x0) {
        pbVar1 = pbVar2;
        if (pbVar2[2] == 10) goto LAB_0001da91;
        param_1[0xc] = 0;
      }
    }
  }
  return (ulonglong)pbVar2 & 0xffffffffffffff00;
}

