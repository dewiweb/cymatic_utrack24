// rea decompile_all
// name: FUN_0066c8b0
// address: 0x66c8b0
// body: available
// range: 0x66c8b0-0x66c96b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066c8b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int in_EDX;
  
  if (in_ECX[5] != 100) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x14;
    *(int *)(*in_ECX + 0x18) = in_ECX[5];
    (**(code **)*in_ECX)();
  }
  if (in_ECX[in_EDX + 0x12] == 0) {
    iVar1 = (**(code **)in_ECX[1])();
    *(undefined1 *)(iVar1 + 0x80) = 0;
    in_ECX[in_EDX + 0x12] = iVar1;
  }
  iVar1 = 0;
  do {
    iVar2 = (*param_1 * param_2 + 0x32) / 100;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else if ((0x7fff < iVar2) || (0xff < iVar2)) {
      iVar2 = 0xff;
    }
    param_1 = param_1 + 1;
    *(short *)(iVar1 + in_ECX[in_EDX + 0x12]) = (short)iVar2;
    iVar1 = iVar1 + 2;
  } while (iVar1 < 0x80);
  *(undefined1 *)(in_ECX[in_EDX + 0x12] + 0x80) = 0;
  return;
}

