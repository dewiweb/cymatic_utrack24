// rea decompile_all
// name: FUN_004766c0
// address: 0x4766c0
// body: available
// range: 0x4766c0-0x476778 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004766c0(int param_1,int param_2)

{
  undefined1 uVar1;
  int *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[2] = param_2;
  _eh_vector_constructor_iterator_
            (in_ECX + 3,3,4,(_func_void_void_ptr *)&LAB_00464380,guard_check_icall);
  if (*(int *)(*in_ECX + 0xc) == 3) {
    if ((*(char *)((int)in_ECX + 10) == *(char *)((int)in_ECX + 9)) &&
       (*(char *)((int)in_ECX + 9) == (char)in_ECX[2])) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(in_ECX + 6) = uVar1;
    *(char *)(in_ECX + 3) = (char)in_ECX[2];
    *(undefined1 *)((int)in_ECX + 0xd) = *(undefined1 *)((int)in_ECX + 9);
    *(undefined1 *)((int)in_ECX + 0xe) = *(undefined1 *)((int)in_ECX + 10);
    *(char *)((int)in_ECX + 0xf) = (char)in_ECX[2];
    *(undefined1 *)(in_ECX + 4) = *(undefined1 *)((int)in_ECX + 9);
    *(undefined1 *)((int)in_ECX + 0x11) = *(undefined1 *)((int)in_ECX + 10);
    *(char *)((int)in_ECX + 0x12) = (char)in_ECX[2];
    *(undefined1 *)((int)in_ECX + 0x13) = *(undefined1 *)((int)in_ECX + 9);
    *(undefined1 *)(in_ECX + 5) = *(undefined1 *)((int)in_ECX + 10);
    *(char *)((int)in_ECX + 0x15) = (char)in_ECX[2];
    *(undefined1 *)((int)in_ECX + 0x16) = *(undefined1 *)((int)in_ECX + 9);
    *(undefined1 *)((int)in_ECX + 0x17) = *(undefined1 *)((int)in_ECX + 10);
    return;
  }
  *(undefined1 *)(in_ECX + 6) = 0;
  return;
}

