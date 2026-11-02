// rea decompile_all
// name: FUN_004ba140
// address: 0x4ba140
// body: available
// range: 0x4ba140-0x4ba261 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba140(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  undefined4 in_stack_ffffffd0;
  undefined4 in_stack_ffffffd4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007043e6;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = in_ECX + 0x78;
  FUN_004be520(iVar1,in_stack_ffffffd0,in_stack_ffffffd4);
  iVar3 = *(int *)(in_ECX + 0x60);
  FUN_004bdec0(iVar1,1);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    *(undefined4 *)(in_ECX + 0x34) = 0;
    (*(code *)**(undefined4 **)(in_ECX + 0x38))(0x84c0,uVar5);
  }
  local_8 = 0xffffffff;
  iVar4 = *param_1;
  if (*(int *)(in_ECX + 0x24 + *(int *)(in_ECX + 0x34) * 4) != iVar4) {
    *(int *)(in_ECX + 0x24 + *(int *)(in_ECX + 0x34) * 4) = iVar4;
    glBindTexture(0xde1,iVar4);
  }
  piVar2 = (int *)(in_ECX + 8);
  if ((char)param_5 == '\0') {
    FUN_004b98a0(piVar2,iVar1,iVar3 + 0x1a8);
  }
  else {
    FUN_004b98a0(piVar2,iVar1,iVar3 + 0x228);
  }
  FUN_004b9070(param_2,param_1[1],param_1[2],param_1[3],param_1[4],(float)*piVar2,
               (float)*(int *)(in_ECX + 0xc),param_5);
  ExceptionList = local_10;
  return;
}

