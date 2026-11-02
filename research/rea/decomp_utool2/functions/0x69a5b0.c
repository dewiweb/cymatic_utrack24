// rea decompile_all
// name: FUN_0069a5b0
// address: 0x69a5b0
// body: available
// range: 0x69a5b0-0x69a69d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069a5b0(int param_1)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  int extraout_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722192;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    operator_new(0xd0);
    local_8 = 0;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  if (*(int *)(*(int *)(DAT_00c8a67c + 0x20) + 8) != 300) {
    FUN_0063eb10(300);
  }
  if ((*(byte *)((int)in_ECX + 0x69) & 0x10) == 0) {
    if (in_ECX[3] != 0) {
      cVar1 = FUN_006e6320(uVar2);
      param_1 = extraout_EDX;
      if (cVar1 == '\0') goto LAB_0069a649;
    }
    if ((*(uint *)(param_1 + 0x10) >> 5 & 1) == 0) {
      cVar1 = '\x01';
      goto LAB_0069a64b;
    }
  }
LAB_0069a649:
  cVar1 = '\0';
LAB_0069a64b:
  *(char *)(in_ECX + 0x2a) = cVar1;
  if ((cVar1 != '\0') &&
     (((*(int **)(param_1 + 0x18) == in_ECX ||
       ((*(char *)(in_ECX[0x2f] + 0xcc) == '\0' && (*(char *)(in_ECX[0x2f] + 0xcd) == '\0')))) &&
      (*(char *)((int)in_ECX + 0xaa) == '\0')))) {
    *(undefined1 *)((int)in_ECX + 0xaa) = 1;
    (**(code **)(*in_ECX + 0xb0))();
  }
  ExceptionList = local_10;
  return;
}

