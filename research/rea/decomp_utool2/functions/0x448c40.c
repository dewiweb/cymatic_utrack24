// rea decompile_all
// name: FUN_00448c40
// address: 0x448c40
// body: available
// range: 0x448c40-0x448da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00448c40(void *param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 in_EDX;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  void *local_30;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ff148;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_stack_00000018 * 2 <= in_stack_0000001c) {
    do {
      iVar2 = in_stack_00000018 * 4 + in_ECX;
      in_ECX = in_stack_00000018 * 4 + iVar2;
      iVar2 = FUN_00449020(iVar2,iVar2,in_ECX,0,0,0,0,in_stack_00000014,in_stack_00000020,0,uVar1);
      in_stack_00000014 = *(undefined4 *)(iVar2 + 0x10);
      if (local_30 != (void *)0x0) {
        FID_conflict__free(local_30);
      }
      in_stack_0000001c = in_stack_0000001c + in_stack_00000018 * -2;
    } while (in_stack_00000018 * 2 <= in_stack_0000001c);
  }
  if (in_stack_00000018 < in_stack_0000001c) {
    iVar2 = in_ECX + in_stack_00000018 * 4;
    FUN_00449020(iVar2,iVar2,in_EDX,0,0,0,0,in_stack_00000014,in_stack_00000020,0,uVar1);
  }
  else {
    FUN_00426800(in_EDX,0,0,0,0,in_stack_00000014);
  }
  if (local_30 != (void *)0x0) {
    FID_conflict__free(local_30);
  }
  if (param_1 != (void *)0x0) {
    FID_conflict__free(param_1);
  }
  ExceptionList = local_10;
  return;
}

