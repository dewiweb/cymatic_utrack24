// rea decompile_all
// name: FUN_004379ad
// address: 0x4379ad
// body: available
// range: 0x4379ad-0x437a2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_004379ad(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int *in_ECX;
  int unaff_EBX;
  int local_8;
  
  in_ECX[1] = in_EAX;
  *in_ECX = unaff_EBX;
  in_ECX[2] = *(int *)(in_EAX + 0x1c);
  piVar1 = in_ECX + 0x812;
  *piVar1 = 0;
  in_ECX[0x814] = (int)piVar1;
  in_ECX[0x813] = (int)piVar1;
  local_8 = FUN_004378be();
  if (local_8 == 0) {
    iVar2 = FUN_004d021d();
    in_ECX[0x11] = iVar2;
    in_ECX[0xb] = (int)FUN_0043788a;
    in_ECX[0xc] = (int)&LAB_004378a5;
    iVar2 = *(int *)(unaff_EBX + 0x1c);
    in_ECX[4] = 0;
    in_ECX[0xd] = iVar2;
    in_ECX[3] = (int)(in_ECX + 0x412);
    iVar2 = FUN_00437384();
    if ((iVar2 != 0) || (in_ECX[3] == 0)) {
      local_8 = 3;
    }
  }
  return local_8;
}

