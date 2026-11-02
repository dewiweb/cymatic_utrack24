// rea decompile_all
// name: FUN_00445ad0
// address: 0x445ad0
// body: available
// range: 0x445ad0-0x445bfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445ad0(void)

{
  int *piVar1;
  int *in_ECX;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  uint in_stack_ffffffe0;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fdd7c;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  if ((in_ECX[1] != 1) || (*in_ECX != 1)) {
    in_ECX[2] = 0x40;
    in_stack_ffffffe0 = CONCAT31((int3)((uint)&local_10 >> 8),(char)in_ECX[0x25] != '\0');
    in_stack_ffffffdc = 0x40;
    in_stack_ffffffd8 = 0x445b24;
    FUN_00403500(0x40,in_stack_ffffffe0);
    piVar1 = (int *)in_ECX[4];
    in_ECX[3] = (int)piVar1;
    *piVar1 = (int)(piVar1 + 4);
    *(undefined4 *)(in_ECX[3] + 4) = 0;
    in_ECX[1] = 1;
    *in_ECX = 1;
  }
  FUN_00425f70(1,1,in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0);
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  local_8 = 1;
  if ((in_ECX[0x4f] != 1) || (in_ECX[0x4e] != 1)) {
    in_ECX[0x50] = 0x40;
    in_stack_ffffffe0 = (uint)((char)in_ECX[0x73] != '\0');
    in_stack_ffffffdc = 0x40;
    in_stack_ffffffd8 = 0x445ba7;
    FUN_00403500(0x40,in_stack_ffffffe0);
    piVar1 = (int *)in_ECX[0x52];
    in_ECX[0x51] = (int)piVar1;
    *piVar1 = (int)(piVar1 + 4);
    *(undefined4 *)(in_ECX[0x51] + 4) = 0;
    in_ECX[0x4f] = 1;
    in_ECX[0x4e] = 1;
  }
  FUN_00425f70(1,1,in_stack_ffffffd8,in_stack_ffffffdc,in_stack_ffffffe0);
  ExceptionList = local_10;
  return;
}

