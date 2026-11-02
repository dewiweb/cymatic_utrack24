// rea decompile_all
// name: FUN_00445c00
// address: 0x445c00
// body: available
// range: 0x445c00-0x445d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00445c00(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  undefined4 in_stack_ffffffd0;
  int in_stack_ffffffd4;
  undefined4 in_stack_ffffffd8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006fed96;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x130) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  local_8 = 0;
  if ((param_2 != *(int *)(in_ECX + 0x13c)) || (param_1 != *(int *)(in_ECX + 0x138))) {
    uVar1 = param_2 + 3U & 0xfffffffc;
    uVar4 = param_1 * 4 + 0x13U & 0xfffffff0;
    iVar2 = uVar1 * param_1;
    in_stack_ffffffd8 = CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(in_ECX + 0x1cc) != '\0');
    in_stack_ffffffd4 = uVar4 + (iVar2 + 8) * 4;
    *(int *)(in_ECX + 0x140) = in_stack_ffffffd4;
    in_stack_ffffffd0 = 0x445c96;
    FUN_00403500(in_stack_ffffffd4,in_stack_ffffffd8);
    *(int *)(in_ECX + 0x144) = *(int *)(in_ECX + 0x148);
    iVar2 = *(int *)(in_ECX + 0x148) + uVar4;
    iVar3 = 0;
    if (0 < param_1) {
      do {
        *(int *)(*(int *)(in_ECX + 0x144) + iVar3 * 4) = iVar2;
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + uVar1 * 4;
      } while (iVar3 < param_1);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x144) + param_1 * 4) = 0;
    *(int *)(in_ECX + 0x13c) = param_2;
    *(int *)(in_ECX + 0x138) = param_1;
  }
  FUN_00425f70(param_1,param_2,in_stack_ffffffd0,in_stack_ffffffd4,in_stack_ffffffd8);
  ExceptionList = local_10;
  return;
}

